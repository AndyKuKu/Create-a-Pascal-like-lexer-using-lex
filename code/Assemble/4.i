entry main
sp = sp - 8
point int t0
t0 = bp - 4
*t0 = 123
point int t0
t0 = bp - 8
*t0 = 345
point int t0
t0 = bp - 4
point int t1
t1 = bp - 8
var boolean t2
t2 = *t0 > *t1
if_false t2 goto L0
println 100
goto L1
label L0
println 99
label L1
sp = sp + 8

