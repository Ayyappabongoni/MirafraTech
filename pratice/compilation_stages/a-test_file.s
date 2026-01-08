	.file	"test_file.c"
	.text
	.globl	glob_initallized_var
	.data
	.align 4
	.type	glob_initallized_var, @object
	.size	glob_initallized_var, 4
glob_initallized_var:
	.long	10
	.globl	glob_un_initallized_var
	.bss
	.align 4
	.type	glob_un_initallized_var, @object
	.size	glob_un_initallized_var, 4
glob_un_initallized_var:
	.zero	4
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$10, -8(%rbp)
	movl	$10, -4(%rbp)
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.data
	.align 4
	.type	local_static_var.0, @object
	.size	local_static_var.0, 4
local_static_var.0:
	.long	20
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04.2) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
