entry _findmin
sp = sp - 0
point int t0
t0 = bp + 16
point int t1
t1 = bp + 12
var boolean t2
t2 = *t0 < *t1
if_false t2 goto L0
point int t0
t0 = bp + 8
point int t1
t1 = bp + 16
*t0 = *t1
goto L1
label L0
point int t0
t0 = bp + 8
point int t1
t1 = bp + 12
*t0 = *t1
label L1
sp = sp + 0
ret
entry main
sp = sp - 4
point int t0
t0 = bp - 4
*t0 = 1
arg 1
arg 2
point int t0
t0 = bp - 4
arg *t0
call _findmin
sp = sp + 4

