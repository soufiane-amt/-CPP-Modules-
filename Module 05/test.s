	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 14	sdk_version 10, 14
	.globl	_main                   ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movl	$45, %edi
	callq	_malloc
	movq	%rax, -8(%rbp)
	movl	$45, %edi
	callq	_malloc
	movq	%rax, -8(%rbp)
	leaq	L_.str(%rip), %rdi
	callq	_system
	xorl	%ecx, %ecx
	movl	%eax, -12(%rbp)         ## 4-byte Spill
	movl	%ecx, %eax
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"leaks a.out"


.subsections_via_symbols
