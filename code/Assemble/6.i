entry main
sp = sp - 20
point int t0
t0 = bp - 4
read t0
point int t0
t0 = bp - 8
*t0 = 1
point double t0
t0 = bp - 20
*t0 = 1
point int t0
t0 = bp - 12
point int t1
t1 = bp - 4
*t0 = 1
var int t2
t2 = -1
label L0
var int t3
t3 = *t0 != *t1
if_false t3 goto L1
point int t4
t4 = bp - 8
point int t5
t5 = bp - 8
point int t6
t6 = bp - 12
var int t7
t7 = *t5 * *t6
*t4 = t7
point double t4
t4 = bp - 20
point double t5
t5 = bp - 20
point int t6
t6 = bp - 8
var double t7
t7 = 1 / *t6
var double t6
t6 = *t5 + t7
*t4 = t6
*t0 = *t0 + t2
goto L0
label L1
label L2
var int t3
t3 = *t0 == *t1
if_false t3 goto L3
point int t4
t4 = bp - 8
point int t5
t5 = bp - 8
point int t6
t6 = bp - 12
var int t7
t7 = *t5 * *t6
*t4 = t7
point double t4
t4 = bp - 20
point double t5
t5 = bp - 20
point int t6
t6 = bp - 8
var double t7
t7 = 1 / *t6
var double t6
t6 = *t5 + t7
*t4 = t6
*t0 = *t0 + t2
goto L2
label L3
point double t1
t1 = bp - 20
var double t3
t3 = *t1
println t3
sp = sp + 20

