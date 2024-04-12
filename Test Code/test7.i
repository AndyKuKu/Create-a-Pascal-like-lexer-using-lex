entry main
sp = sp - 14
point byte t0
t0 = bp - 1
readln t0
point byte t0
t0 = bp - 1
goto L0
Label L2
println 0
goto L1
Label L3
println 1
goto L1
label L0
if *t0 == 1 then goto L2
if *t0 == 2 then goto L3
label L1
Label LUSER1
point int t1
t1 = bp - 6
*t1 = 1
point int t1
t1 = bp - 10
*t1 = 2
goto LUER1
sp = sp + 14

