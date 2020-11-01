; char *strdup(const char *s);
		global ft_strdup
		section .text
        extern  malloc
        extern  ft_strlen
        extern  ft_strcpy
ft_strdup:
        push    rdi
        call    ft_strlen wrt ..plt
        inc     rax
        mov     rdi, rax
        call    malloc wrt ..plt
        pop     rsi
        push    rax
        mov     rdi, rax
        call    ft_strcpy wrt ..plt
        pop     rax
        ret
