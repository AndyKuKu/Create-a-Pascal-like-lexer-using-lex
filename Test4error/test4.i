entry _findmin
sp = sp - 4
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
sp = sp + 16
ret
entry _max
sp = sp - 12
point int t0
t0 = bp + 12
point int t1
t1 = bp + 8
var boolean t2
t2 = *t0 > *t1
if_false t2 goto L2
point int t0
t0 = bp - 8
point int t1
t1 = bp + 12
*t0 = *t1
goto L3
label L2
point int t0
t0 = bp - 8
point int t1
t1 = bp + 8
*t0 = *t1
label L3
point int t0
t0 = bp - 4
point int t1
t1 = bp - 8
*t0 = *t1
sp = sp + 16
ret
entry _add
sp = sp - 12
point int t0
t0 = bp - 8
point int t1
t1 = bp + 12
point int t2
t2 = bp + 8
var int t3
t3 = *t1 + *t2
*t0 = t3
point int t0
t0 = bp - 4
point int t1
t1 = bp - 8
*t0 = *t1
sp = sp + 16
ret
entry main
sp = sp - 8
point int t0
t0 = bp - 4
*t0 = 1
arg 1
arg 2
point int t0
t0 = bp - 4
arg *t0
call _findmin
arg 3
arg 4
call _max
var int t0
t0 = *sp
sp = sp + 8
