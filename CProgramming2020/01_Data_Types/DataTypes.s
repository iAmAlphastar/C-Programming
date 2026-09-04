	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 15	sdk_version 10, 15, 6
	.section	__TEXT,__literal8,8byte_literals
	.p2align	3               ## -- Begin function main
LCPI0_0:
	.quad	4651895357622780386     ## double 987.27261999999996
LCPI0_1:
	.quad	4651205692120851378     ## double 908.86672999999996
	.section	__TEXT,__literal4,4byte_literals
	.p2align	2
LCPI0_2:
	.long	1098777625              ## float 15.8760004
LCPI0_3:
	.long	1097439642              ## float 14.6000004
	.section	__TEXT,__text,regular,pure_instructions
	.globl	_main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$80, %rsp
	movsd	LCPI0_0(%rip), %xmm0    ## xmm0 = mem[0],zero
	movsd	LCPI0_1(%rip), %xmm1    ## xmm1 = mem[0],zero
	movss	LCPI0_2(%rip), %xmm2    ## xmm2 = mem[0],zero,zero,zero
	movss	LCPI0_3(%rip), %xmm3    ## xmm3 = mem[0],zero,zero,zero
	movl	$0, -4(%rbp)
	movl	$14, -8(%rbp)
	movl	$15, -12(%rbp)
	movss	%xmm3, -16(%rbp)
	movss	%xmm2, -20(%rbp)
	movsd	%xmm1, -32(%rbp)
	movsd	%xmm0, -40(%rbp)
	movb	$65, -41(%rbp)
	movb	$90, -42(%rbp)
	movl	-8(%rbp), %esi
	movl	-12(%rbp), %edx
	leaq	L_.str(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movss	-16(%rbp), %xmm0        ## xmm0 = mem[0],zero,zero,zero
	cvtss2sd	%xmm0, %xmm0
	movss	-20(%rbp), %xmm1        ## xmm1 = mem[0],zero,zero,zero
	cvtss2sd	%xmm1, %xmm1
	leaq	L_.str.1(%rip), %rdi
	movl	%eax, -48(%rbp)         ## 4-byte Spill
	movb	$2, %al
	callq	_printf
	movsd	-32(%rbp), %xmm0        ## xmm0 = mem[0],zero
	movsd	-40(%rbp), %xmm1        ## xmm1 = mem[0],zero
	leaq	L_.str.2(%rip), %rdi
	movl	%eax, -52(%rbp)         ## 4-byte Spill
	movb	$2, %al
	callq	_printf
	movsbl	-41(%rbp), %esi
	movsbl	-42(%rbp), %edx
	leaq	L_.str.3(%rip), %rdi
	movl	%eax, -56(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	leaq	L_.str.4(%rip), %rdi
	movl	$4, %esi
	movl	%eax, -60(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	leaq	L_.str.5(%rip), %rdi
	movl	$4, %esi
	movl	%eax, -64(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	leaq	L_.str.6(%rip), %rdi
	movl	$4, %esi
	movl	%eax, -68(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	xorl	%ecx, %ecx
	movl	%eax, -72(%rbp)         ## 4-byte Spill
	movl	%ecx, %eax
	addq	$80, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"Display int a = %d\tint b = %d\n\n"

L_.str.1:                               ## @.str.1
	.asciz	"Display float c = %f\tint d = %f\n\n"

L_.str.2:                               ## @.str.2
	.asciz	"Display double e = %lf\tint b = %lf\n\n"

L_.str.3:                               ## @.str.3
	.asciz	"Display char ch1 = %c\tchar ch2 = %c\n\n"

L_.str.4:                               ## @.str.4
	.asciz	"Size of int = %lu byte\n"

L_.str.5:                               ## @.str.5
	.asciz	"Size of int a = %lu byte\n"

L_.str.6:                               ## @.str.6
	.asciz	"Size of int b = %lu byte\n"


.subsections_via_symbols
