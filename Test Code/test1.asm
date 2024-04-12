.data 0x10000000

	endl:	.asciiz	"\n"
	bp:	.word	0
	offset:	.word	0
	t0:	.word	0
	t1:	.word	0
	t2:	.word	0
	t3:	.word	0
	t4:	.word	0
	t5:	.word	0
	t6:	.word	0
	t7:	.word	0
	t8:	.word	0
	t9:	.word	0
	t10:	.word	0
	t11:	.word	0
	t12:	.word	0
	t13:	.word	0
	t14:	.word	0
	t15:	.word	0
	t16:	.word	0
	t17:	.word	0
	t18:	.word	0
	t19:	.word	0

.text

_findmin:
	# use stack
	lw $t0, bp
	addi $sp, $sp, -4
	sw $t0, 0($sp)
	sw $sp, bp
	# calculation
	addi, $sp, $sp, -0
	# calculation
	lw $t1, bp
	li $t2, 16
	add $t1, $t1, $t2
	sw $t1, t0
	# calculation
	lw $t1, bp
	li $t2, 12
	add $t1, $t1, $t2
	sw $t1, t1
	# stack
	addi $sp, $sp, -4
	sw $sp, t2
	# compare
	lw $t3, t0
	lw $t1, 0($t3)
	lw $t3, t1
	lw $t2, 0($t3)
	slt $t3, $t1, $t2
	lw $t2, t2
	sw $t3, 0($t2)
	# if_false jump
	lw $t1, t2
	lw $t1, 0($t1)
	beq $t1, $0, L0
	# calculation
	lw $t1, bp
	li $t2, 8
	add $t1, $t1, $t2
	sw $t1, t0
	# calculation
	lw $t1, bp
	li $t2, 16
	add $t1, $t1, $t2
	sw $t1, t1
	# assign
	lw $t0, t1
	lw $t0, 0($t0)
	lw $t1, t0
	sw $t0, 0($t1)
	# direct jump
	j L1
L0:
	# calculation
	lw $t1, bp
	li $t2, 8
	add $t1, $t1, $t2
	sw $t1, t0
	# calculation
	lw $t1, bp
	li $t2, 12
	add $t1, $t1, $t2
	sw $t1, t1
	# assign
	lw $t0, t1
	lw $t0, 0($t0)
	lw $t1, t0
	sw $t0, 0($t1)
L1:
	# calculation
	addi, $sp, $sp, 0
	# free stack
	lw $t0, bp
	add $sp, $t0, $0
	lw $t0, 0($sp)
	sw $t0, bp
	addi $sp, $sp, 4
	jr $ra

_max:
	# use stack
	lw $t0, bp
	addi $sp, $sp, -4
	sw $t0, 0($sp)
	sw $sp, bp
	# calculation
	addi, $sp, $sp, -8
	# calculation
	lw $t1, bp
	li $t2, 12
	add $t1, $t1, $t2
	sw $t1, t0
	# calculation
	lw $t1, bp
	li $t2, 8
	add $t1, $t1, $t2
	sw $t1, t1
	# stack
	addi $sp, $sp, -4
	sw $sp, t2
	# compare
	lw $t3, t0
	lw $t1, 0($t3)
	lw $t3, t1
	lw $t2, 0($t3)
	slt $t3, $t2, $t1
	lw $t2, t2
	sw $t3, 0($t2)
	# if_false jump
	lw $t1, t2
	lw $t1, 0($t1)
	beq $t1, $0, L2
	# calculation
	lw $t1, bp
	li $t2, 8
	sub $t1, $t1, $t2
	sw $t1, t0
	# calculation
	lw $t1, bp
	li $t2, 12
	add $t1, $t1, $t2
	sw $t1, t1
	# assign
	lw $t0, t1
	lw $t0, 0($t0)
	lw $t1, t0
	sw $t0, 0($t1)
	# direct jump
	j L3
L2:
	# calculation
	lw $t1, bp
	li $t2, 8
	sub $t1, $t1, $t2
	sw $t1, t0
	# calculation
	lw $t1, bp
	li $t2, 8
	add $t1, $t1, $t2
	sw $t1, t1
	# assign
	lw $t0, t1
	lw $t0, 0($t0)
	lw $t1, t0
	sw $t0, 0($t1)
L3:
	# calculation
	lw $t1, bp
	li $t2, 4
	sub $t1, $t1, $t2
	sw $t1, t0
	# calculation
	lw $t1, bp
	li $t2, 8
	sub $t1, $t1, $t2
	sw $t1, t1
	# assign
	lw $t0, t1
	lw $t0, 0($t0)
	lw $t1, t0
	sw $t0, 0($t1)
	# calculation
	addi, $sp, $sp, 8
	# free stack
	lw $t0, bp
	add $sp, $t0, $0
	lw $t0, 0($sp)
	sw $t0, bp
	addi $sp, $sp, 4
	jr $ra

main:
	sw $sp, bp
	# calculation
	addi, $sp, $sp, -4
	# calculation
	lw $t1, bp
	li $t2, 4
	sub $t1, $t1, $t2
	sw $t1, t0
	# assign
	li $t0, 14
	lw $t1, t0
	sw $t0, 0($t1)
	# calculation
	addi, $sp, $sp, 4
	jr $ra
