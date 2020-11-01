; char	*ft_strcpy(char *dest-rdi, const char *src-rsi);
		global ft_strcpy
		section .text
ft_strcpy:
        push    rbp
        mov		rcx, 0
loop:
		mov		rdx, rdi
		add		rdx, rcx
        mov     rax, rsi
        add     rax, rcx
        inc     rcx

        mov     bpl, byte [rax]
        mov     byte [rdx], bpl
		
        cmp		byte [rax], 0
		jne		loop

        mov     byte [rdx], 0

		mov		rax, rdi
        pop     rbp
		ret