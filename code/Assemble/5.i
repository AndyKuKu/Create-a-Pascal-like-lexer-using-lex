entry main
sp = sp - 4
point int t0
t0 = bp - 4
*t0 = 3
point int t0
t0 = bp - 4
goto L0
Label L2
println 1111111
goto L1
Label L3
println 2222222
goto L1
Label L4
println 3333333
goto L1
Label L5
println 4444444
goto L1
label L0
if *t0 == 1 then goto L2
if *t0 == 2 then goto L3
if *t0 == 3 then goto L4
if *t0 == 4 then goto L5
label L1
sp = sp + 4

