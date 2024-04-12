entry _com
sp = sp - 8
point double t0
t0 = bp - 8
point int t1
t1 = bp + 12
arg *t1
call _fac
point double t1
t1 = sp - 16
var double t2
t2 = *t1
point int t1
t1 = bp + 8
arg *t1
call _fac
point double t1
t1 = sp - 16
var double t3
t3 = *t1
var double t1
t1 = t2 / t3
point int t2
t2 = bp + 12
point int t3
t3 = bp + 8
var int t4
t4 = *t2 - *t3
arg t4
call _fac
point double t2
t2 = sp - 16
var double t3
t3 = *t2
var double t2
t2 = t1 / t3
*t0 = t2
sp = sp + 8
ret
entry _fac
sp = sp - 20
point double t0
t0 = bp - 20
*t0 = 1
point int t0
t0 = bp - 12
point int t1
t1 = bp + 8
*t0 = 1
var int t2
t2 = -1
label L0
var int t3
t3 = *t0 != *t1
if_false t3 goto L1
point double t4
t4 = bp - 20
point double t5
t5 = bp - 20
point int t6
t6 = bp - 12
var double t7
t7 = *t5 * *t6
*t4 = t7
*t0 = *t0 + t2
goto L0
label L1
label L2
var int t3
t3 = *t0 == *t1
if_false t3 goto L3
point double t5
t5 = bp - 20
point double t6
t6 = bp - 20
point int t7
t7 = bp - 12
var double t8
t8 = *t6 * *t7
*t5 = t8
*t0 = *t0 + t2
goto L2
label L3
point double t1
t1 = bp - 8
point double t3
t3 = bp - 20
*t1 = *t3
sp = sp + 20
ret
entry main
sp = sp - 8
point int t1
t1 = bp - 4
read t1
point int t1
t1 = bp - 8
readln t1
point int t1
t1 = bp - 4
arg *t1
point int t1
t1 = bp - 8
arg *t1
call _com
point double t1
t1 = sp - 16
var double t3
t3 = *t1
println t3
sp = sp + 8

