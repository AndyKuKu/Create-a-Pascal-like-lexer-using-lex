entry main
sp = sp - 8
point int t0
t0 = bp - 4
*t0 = 10
point int t0
t0 = bp - 8
*t0 = 0
label L0
point int t0
t0 = bp - 8
point int t1
t1 = bp - 8
var int t2
t2 = *t1 + 1
*t0 = t2
point int t0
t0 = bp - 8
var int t1
t1 = *t0
println t1
point int t0
t0 = bp - 8
point int t1
t1 = bp - 4
var boolean t2
t2 = *t0 > *t1
if_false t2 goto L0
sp = sp + 8

