entry _max
sp = sp - 12
point int t0
t0 = bp + 12
point int t1
t1 = bp + 8
var boolean t2
t2 = *t0 > *t1
if_false t2 goto L0
point int t0
t0 = bp - 8
point int t1
t1 = bp + 12
*t0 = *t1
goto L1
label L0
point int t0
t0 = bp - 8
point int t1
t1 = bp + 8
*t0 = *t1
label L1
point int t0
t0 = bp - 4
point int t1
t1 = bp - 8
*t0 = *t1
sp = sp + 12
ret
entry main
sp = sp - 33
point int t0
t0 = bp - 4
*t0 = 100
point int t0
t0 = bp - 8
*t0 = 200
point double t0
t0 = bp - 16
point int t1
t1 = bp - 4
arg *t1
point int t1
t1 = bp - 8
arg *t1
call _max
var int t1
t1 = *sp
*t0 = t1
point int t0
t0 = bp - 4
var int t1
t1 = *t0
println t1
sp = sp + 33
