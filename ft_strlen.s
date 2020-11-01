;size_t strlen(const char *s);
		global ft_strlen
		section .text
ft_strlen:
		mov		rcx, 0
loop:
		mov		rdx, rdi
		add		rdx, rcx
		inc		rcx
		cmp		byte [rdx], 0
		jne		loop

		sub		rcx, 1
		mov		rax, rcx
		ret