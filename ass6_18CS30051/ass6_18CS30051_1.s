	.file	"test.c"
	.section	.rodata
.LC0:
	.string	"***********************Some random outputs!!*************************\n"
.LC1:
	.string	"Passing pointers to function f!\n"
.LC2:
	.string	"Value passed to function: "
.LC3:
	.string	"\n"
.LC4:
	.string	"Value returned from function s is: "
.LC5:
	.string	"\n"
.LC6:
	.string	"Read an integer!!"
.LC7:
	.string	"\n"
.LC8:
	.string	"The integer that was read is:"
.LC9:
	.string	"\n"
	.text	
	.globl	f
	.type	f, @function
f: 
.LFB0:
	.cfi_startproc
	pushq 	%rbp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movq 	%rsp, %rbp
	.cfi_def_cfa_register 5
	subq	$52, %rsp
	movq	%rdi, -20(%rbp)
	movl	-20(%rbp), %eax
	movl	(%eax),%eax
	movl 	%eax, -28(%rbp)
	movl	-28(%rbp), %eax
	movl 	%eax, -24(%rbp)
	movl	$2, %eax
	movl 	%eax, -36(%rbp)
	movl 	-24(%rbp), %eax
	movl 	-36(%rbp), %edx
	addl 	%edx, %eax
	movl 	%eax, -40(%rbp)
	movl	-40(%rbp), %eax
	movl 	%eax, -24(%rbp)
	movl	-24(%rbp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	f, .-f
	.globl	main
	.type	main, @function
main: 
.LFB1:
	.cfi_startproc
	pushq 	%rbp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movq 	%rsp, %rbp
	.cfi_def_cfa_register 5
	subq	$172, %rsp

	movq 	$.LC0, -40(%rbp)
	movl 	-40(%rbp), %eax
	movq 	-40(%rbp), %rdi
	call	printStr
	movl	%eax, -44(%rbp)
	movl	$3, %eax
	movl 	%eax, -48(%rbp)
	movl	-48(%rbp), %eax
	movl 	%eax, -28(%rbp)
	leaq	-28(%rbp), %rax
	movq 	%rax, -56(%rbp)
	movl	-56(%rbp), %eax
	movl 	%eax, -32(%rbp)
	movl	$1, %eax
	movl 	%eax, -64(%rbp)
	movl	-64(%rbp), %eax
	movl 	%eax, -24(%rbp)
	movq 	$.LC1, -68(%rbp)
	movl 	-68(%rbp), %eax
	movq 	-68(%rbp), %rdi
	call	printStr
	movl	%eax, -72(%rbp)
	movq 	$.LC2, -76(%rbp)
	movl 	-76(%rbp), %eax
	movq 	-76(%rbp), %rdi
	call	printStr
	movl	%eax, -80(%rbp)
	movl 	-28(%rbp), %eax
	movq 	-28(%rbp), %rdi
	call	printInt
	movl	%eax, -88(%rbp)
	movq 	$.LC3, -92(%rbp)
	movl 	-92(%rbp), %eax
	movq 	-92(%rbp), %rdi
	call	printStr
	movl	%eax, -96(%rbp)
	movq 	$.LC4, -100(%rbp)
	movl 	-100(%rbp), %eax
	movq 	-100(%rbp), %rdi
	call	printStr
	movl	%eax, -104(%rbp)
	movl 	-24(%rbp), %eax
	movq 	-24(%rbp), %rdi
	call	printInt
	movl	%eax, -108(%rbp)
	movq 	$.LC5, -112(%rbp)
	movl 	-112(%rbp), %eax
	movq 	-112(%rbp), %rdi
	call	printStr
	movl	%eax, -116(%rbp)
	movq 	$.LC6, -120(%rbp)
	movl 	-120(%rbp), %eax
	movq 	-120(%rbp), %rdi
	call	printStr
	movl	%eax, -124(%rbp)
	movq 	$.LC7, -128(%rbp)
	movl 	-128(%rbp), %eax
	movq 	-128(%rbp), %rdi
	call	printStr
	movl	%eax, -132(%rbp)
	movl 	-32(%rbp), %eax
	movq 	-32(%rbp), %rdi
	call	readInt
	movl	%eax, -140(%rbp)
	movl	-140(%rbp), %eax
	movl 	%eax, -28(%rbp)
	movq 	$.LC8, -148(%rbp)
	movl 	-148(%rbp), %eax
	movq 	-148(%rbp), %rdi
	call	printStr
	movl	%eax, -152(%rbp)
	movl 	-28(%rbp), %eax
	movq 	-28(%rbp), %rdi
	call	printInt
	movl	%eax, -156(%rbp)
	movq 	$.LC9, -160(%rbp)
	movl 	-160(%rbp), %eax
	movq 	-160(%rbp), %rdi
	call	printStr
	movl	%eax, -164(%rbp)
	movl	$0, %eax
	movl 	%eax, -168(%rbp)
	movl	-168(%rbp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.ident		"Compiled by 18CS30051"
	.section	.note.GNU-stack,"",@progbits
