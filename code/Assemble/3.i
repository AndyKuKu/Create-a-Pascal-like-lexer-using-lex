entry main
sp = sp - 4
point int t0
t0 = bp - 4
*t0 = 0
label L0
point int t0
t0 = bp - 4
var boolean t1
t1 = *t0 < 10
if_false t1 goto L1
point int t0
t0 = bp - 4
point int t2
t2 = bp - 4
var int t3
t3 = *t2 + 1
*t0 = t3
point int t0
t0 = bp - 4
var int t2
t2 = *t0
println t2
goto L0
label L1
sp = sp + 4

