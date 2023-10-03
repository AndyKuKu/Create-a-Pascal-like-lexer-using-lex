entry _findmin
entry _ptest1
sp = sp - 4
sp = sp + 4
ret
entry _ftest1
entry _ftest2
sp = sp - 12
sp = sp + 12
ret
sp = sp - 8
sp = sp + 4
ret
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
entry _proc1
sp = sp - 4
sp = sp + 4
ret
entry _func1
sp = sp - 8
sp = sp + 4
ret
entry main
sp = sp - 114
point int t0
t0 = bp - 4
read t0
point int t1
t1 = bp - 16
goto L2
Label L4
println 0
goto L3
Label L5
println 1
goto L3
Label L6
point int t2
t2 = bp - 4
var int t3
t3 = 980 * 10
var int t4
t4 = t3 + 100
*t2 = t4
point int t2
t2 = bp - 8
*t2 = 2
goto L3
label L2
if_false *t1 != 1 then goto L4
if_false *t1 != 2 then goto L5
if_false *t1 != 3 then goto L6
label L3
label L7
if_false 1 goto L8
point int t2
t2 = bp - 4
*t2 = 1
point int t2
t2 = bp - 8
*t2 = 1
point int t2
t2 = bp - 12
*t2 = 2
goto L7
label L8
call _proc1
call _func1
var int t2
t2 = *sp
point int t2
t2 = bp - 4
