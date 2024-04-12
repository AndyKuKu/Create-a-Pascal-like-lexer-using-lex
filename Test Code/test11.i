entry _max
sp = sp - 16
point int t0
t0 = bp - 4
*t0 = 1
sp = sp + 12
ret
entry _test
sp = sp - 4
point int t0
t0 = bp - 4
*t0 = 1
sp = sp + 0
ret
sp = sp - 88
point int t0
t0 = bp - 12
*t0 = 2147483645
point dword t0
t0 = bp - 20
*t0 = 5
point int t0
t0 = bp - 16
var int t1
t1 = - 10
*t0 = t1
point dword t0
t0 = bp - 24
*t0 = 5
point int t0
t0 = bp - 4
point int t1
t1 = bp - 12
point dword t2
t2 = bp - 20
var int t3
t3 = *t1 + *t2
*t0 = t3
point int t0
t0 = bp - 4
arg *t0
call writeln
point int t0
t0 = bp - 8
point int t1
t1 = bp - 16
point dword t2
t2 = bp - 24
var int t3
t3 = *t1 + *t2
*t0 = t3
point int t0
t0 = bp - 8
arg *t0
call writeln
point int t0
t0 = bp - 72
*t0 = 10
point int t0
t0 = bp - 76
*t0 = 5
point int t0
t0 = bp - 72
point int t1
t1 = bp - 72
point int t2
t2 = bp - 76
var int t3
t3 = *t1 DIV *t2
*t0 = t3
point int t0
t0 = bp - 72
arg *t0
call writeln
point string t0
t0 = bp - 88
string s0 "123"
*t0 = s0
point string t0
t0 = bp - 88
arg *t0
call _max
var int t0
t0 = *sp
point string t0
t0 = bp - 88
arg *t0
call writeln
point int t0
t0 = bp - 12
*t0 = _test
point int t0
t0 = bp - 12
arg *t0
call writeln
sp = sp + 88
