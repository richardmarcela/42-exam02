	.file	"inter.c"
	.text
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"\n"
	.section	.text.startup,"ax",@progbits
	.p2align 4
	.globl	main
	.type	main, @function
main:
.LFB12:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	pushq	%rbx
	.cfi_def_cfa_offset 24
	.cfi_offset 3, -24
	subq	$8, %rsp
	.cfi_def_cfa_offset 32
	cmpl	$3, %edi
	je	.L23
.L2:
	movl	$1, %edx
	leaq	.LC0(%rip), %rsi
	movl	$1, %edi
	call	write@PLT
	addq	$8, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 24
	xorl	%eax, %eax
	popq	%rbx
	.cfi_def_cfa_offset 16
	popq	%rbp
	.cfi_def_cfa_offset 8
	ret
.L23:
	.cfi_restore_state
	movq	%rsi, %rbp
	movq	8(%rsi), %rsi
	xorl	%ebx, %ebx
	movzbl	(%rsi), %ecx
	movq	%rsi, %r8
	testb	%cl, %cl
	je	.L2
	.p2align 4,,10
	.p2align 3
.L3:
	xorl	%eax, %eax
	jmp	.L10
	.p2align 4,,10
	.p2align 3
.L24:
	cmpl	%eax, %ebx
	jle	.L7
	addq	$1, %rax
	cmpb	%cl, %dl
	je	.L4
.L10:
	movzbl	(%rsi,%rax), %edx
	testb	%dl, %dl
	jne	.L24
.L7:
	movq	16(%rbp), %rax
	jmp	.L11
	.p2align 4,,10
	.p2align 3
.L9:
	addq	$1, %rax
	cmpb	%cl, %dl
	je	.L8
.L11:
	movzbl	(%rax), %edx
	testb	%dl, %dl
	jne	.L9
.L4:
	addq	$1, %rbx
	leaq	(%rsi,%rbx), %r8
	movzbl	(%r8), %ecx
	testb	%cl, %cl
	jne	.L3
	jmp	.L2
.L8:
	movq	%r8, %rsi
	movl	$1, %edx
	movl	$1, %edi
	call	write@PLT
	movq	8(%rbp), %rsi
	jmp	.L4
	.cfi_endproc
.LFE12:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
