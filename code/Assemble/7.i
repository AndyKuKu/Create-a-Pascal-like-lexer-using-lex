entry _nabs
sp = sp - 4
point int t0
t0 = bp - 4
point int t1
t1 = bp + 8
var int t2
t2 = 0 - *t1
*t0 = t2
sp = sp + 4
ret
entry main
sp = sp - 8
point int t0
t0 = bp - 4
*t0 = 5
point int t0
t0 = bp - 8
point int t1
t1 = bp - 4
arg *t1
call _nabs
point int t1
t1 = sp - 12
var int t2
t2 = *t1
*t0 = t2
point int t0
t0 = bp - 8
var int t1
t1 = *t0
println t1
sp = sp + 8

