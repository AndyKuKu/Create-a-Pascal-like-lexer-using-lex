
pcompiler: common.h gen.h icg_tac.h semanticAnalysis.h stack.hh symbolTable.h yy.tab.hpp lex.yy.cpp yy.tab.cpp node.cpp parser.cpp semanticAnalysis.cpp symbolTable.cpp icg_tac.cpp main.cpp genCode.cpp gen.cpp
	bison -yd --output=yy.tab.cpp syntax.y
	flex --outfile=lex.yy.cpp scan.l
	g++ -std=c++11 -w -o pcompiler lex.yy.cpp yy.tab.cpp node.cpp parser.cpp semanticAnalysis.cpp symbolTable.cpp icg_tac.cpp main.cpp genCode.cpp gen.cpp

run:
	./pcompiler Test/icg_test1.pas
	./pcompiler Test/icg_test2.pas
	./pcompiler Test/icg_test3.pas
	./pcompiler Test/icg_test4.pas

newrun:
	./pcompiler Assemble/1.pas 
	./pcompiler Assemble/2.pas 
	./pcompiler Assemble/3.pas 
	./pcompiler Assemble/4.pas 
	./pcompiler Assemble/5.pas 
	./pcompiler Assemble/6.pas 
	./pcompiler Assemble/7.pas 
	./pcompiler Assemble/8.pas 
	./pcompiler Assemble/9.pas 
	./pcompiler Assemble/10.pas
	./pcompiler Assemble/11.pas
	./pcompiler Assemble/12.pas

runtest:
	./pcompiler Test/test1.pas
	./pcompiler Test/test2.pas
	./pcompiler Test/test3.pas
	./pcompiler Test/test4.pas
	./pcompiler Test/test5.pas
	./pcompiler Test/test6.pas
	./pcompiler Test/test7.pas
	./pcompiler Test/test8.pas
	./pcompiler Test/test9.pas
	./pcompiler Test/test10.pas
	./pcompiler Test/test11.pas
	./pcompiler Test/sa_error_test.pas


