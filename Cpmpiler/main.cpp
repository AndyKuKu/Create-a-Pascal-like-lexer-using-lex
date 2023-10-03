#include "common.h"
#include "icg_tac.h"
#include "yy.tab.hpp"
#include "semanticAnalysis.h"
#include <queue>
using namespace std;

extern void genASM(const char* input, const char* output);
int main(int argc, char *argv[]) {
	if (argc<=1) return 0;
	FILE* file = fopen(argv[1], "r");
    yyin = file;

    node_init();
    yyparse();
    semanticAnalysis(ROOT);
	if (semanticAnalysisError) {
		puts("Error occurred, compiling stopped.");
		return 1;
	}

	int len;
	string fname = argv[1];
	for (int i=0; i<fname.size(); i++)
		if (fname[i] == '.') { len=i; break; }
	fname = fname.substr(0,len);


	freopen((fname+".i").c_str(), "w", stdout);
	try {
		genCode(ROOT);
	} catch (Error e) {
		cout<<e.msg<<endl;
	}
	puts("");
	fclose(stdout);

	genASM((fname+".i").c_str(), (fname+".asm").c_str());
	return 0;
}
