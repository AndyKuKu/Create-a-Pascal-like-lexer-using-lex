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
sp = sp - 78
point byte t0
t0 = bp - 1
goto L4
Label L6
println 0
goto L5
Label L7
println 1
goto L5
label L4
if_false *t0 != 1 then goto L6
if_false *t0 != 2 then goto L7
label L5
Label LUER1
point int t1
t1 = bp - 6
*t1 = 1
point int t1
t1 = bp - 10
*t1 = 2
goto LUER1
label L8
if_false 1 goto L9
point int t1
t1 = bp - 6
*t1 = 1
point int t1
t1 = bp - 10
*t1 = 1
point int t1
t1 = bp - 14
*t1 = 2
goto L8
label L9
point double t1
t1 = bp - 22
point int t2
t2 = bp - 6
point int t3
t3 = bp - 10
var int t4
t4 = *t2 + *t3
point int t2
t2 = bp - 6
var int t3
t3 = t4 * *t2
*t1 = t3
sp = sp + 78
