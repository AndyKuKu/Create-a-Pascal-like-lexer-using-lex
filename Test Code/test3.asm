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
	li $t0, 1
	lw $t1, t0
	sw $t0, 0($t1)
	# push an arg
	#save pointer
	addi $sp, $sp, -32
	lw $t0, t0
	sw $t0, 0($sp)
	lw $t0, t1
	sw $t0, 4($sp)
	lw $t0, t2
	sw $t0, 8($sp)
	lw $t0, t3
	sw $t0, 12($sp)
	lw $t0, t4
	sw $t0, 16($sp)
	lw $t0, t5
	sw $t0, 20($sp)
	lw $t0, t6
	sw $t0, 24($sp)
	lw $t0, t7
	sw $t0, 28($sp)
	addi $sp, $sp, -4
	li $t0, 01
	sw $t0, 0($sp)
	# push an arg
	#save pointer
	addi $sp, $sp, -32
	lw $t0, t0
	sw $t0, 0($sp)
	lw $t0, t1
	sw $t0, 4($sp)
	lw $t0, t2
	sw $t0, 8($sp)
	lw $t0, t3
	sw $t0, 12($sp)
	lw $t0, t4
	sw $t0, 16($sp)
	lw $t0, t5
	sw $t0, 20($sp)
	lw $t0, t6
	sw $t0, 24($sp)
	lw $t0, t7
	sw $t0, 28($sp)
	addi $sp, $sp, -4
	li $t0, 02
	sw $t0, 0($sp)
	# calculation
	lw $t1, bp
	li $t2, 4
	sub $t1, $t1, $t2
	sw $t1, t0
	# push an arg
	#save pointer
	addi $sp, $sp, -32
	lw $t0, t0
	sw $t0, 0($sp)
	lw $t0, t1
	sw $t0, 4($sp)
	lw $t0, t2
	sw $t0, 8($sp)
	lw $t0, t3
	sw $t0, 12($sp)
	lw $t0, t4
	sw $t0, 16($sp)
	lw $t0, t5
	sw $t0, 20($sp)
	lw $t0, t6
	sw $t0, 24($sp)
	lw $t0, t7
	sw $t0, 28($sp)
	addi $sp, $sp, -4
	lw $t0, t0
	lw $t0, 0($t0)
	sw $t0, 0($sp)
	# call a function
	addi $sp, $sp, -4
	sw $ra, 0($sp)
	jal _findmin
	lw $ra, 0($sp)
	addi $sp, $sp, 4
	#retrieve pointer
	lw $t0, 4($sp)
	sw $t0, t0
	lw $t0, 8($sp)
	sw $t0, t1
	lw $t0, 12($sp)
	sw $t0, t2
	lw $t0, 16($sp)
	sw $t0, t3
	lw $t0, 20($sp)
	sw $t0, t4
	lw $t0, 24($sp)
	sw $t0, t5
	lw $t0, 28($sp)
	sw $t0, t6
	lw $t0, 32($sp)
	sw $t0, t7
	# calculation
	addi, $sp, $sp, 4
	jr $ra
