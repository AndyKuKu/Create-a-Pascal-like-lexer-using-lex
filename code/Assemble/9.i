entry main
sp = sp - 20
point record t0
t0 = bp - 12
point double t1
t1 = t0 + 4
*t1 = 123.456
point record t0
t0 = bp - 12
point int t1
t1 = t0 + 0
*t1 = 777
point double t0
t0 = bp - 20
point record t1
t1 = bp - 12
point double t2
t2 = t1 + 4
point record t1
t1 = bp - 12
point int t3
t3 = t1 + 0
var double t1
t1 = *t2 + *t3
*t0 = t1
point double t0
t0 = bp - 20
var double t1
t1 = *t0
println t1
sp = sp + 20

