entry main
sp = sp - 16
point int t0
t0 = bp - 4
*t0 = 10
point int t0
t0 = bp - 4
point int t1
t1 = bp - 4
var int t2
t2 = *t1 + 2
*t0 = t2
point int t0
t0 = bp - 8
point int t1
t1 = bp - 4
var int t2
t2 = *t1 - 3
*t0 = t2
point int t0
t0 = bp - 12
point int t1
t1 = bp - 4
point int t2
t2 = bp - 8
var int t3
t3 = *t1 * *t2
*t0 = t3
point int t0
t0 = bp - 16
point int t1
t1 = bp - 12
var int t2
t2 = 12345 DIV *t1
*t0 = t2
point int t0
t0 = bp - 4
var int t1
t1 = *t0
println t1
point int t0
t0 = bp - 8
var int t1
t1 = *t0
println t1
point int t0
t0 = bp - 12
var int t1
t1 = *t0
println t1
point int t0
t0 = bp - 16
var int t1
t1 = *t0
println t1
sp = sp + 16

