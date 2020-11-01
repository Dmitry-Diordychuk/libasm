; int strcmp(const char *s1, const char *s2);
		global ft_strcmp
		section .text
ft_strcmp:
        push    rbp
        mov		rcx, 0
        mov     rdx, 0
loop:
		mov		rdx, rdi        ; rdx = rdi + i     s1[i]
		add		rdx, rcx
        mov     rax, rsi        ; rax = rsi + i     s2[i]
        add     rax, rcx
        inc     rcx             ; i++

        cmp     byte [rdx], 0   ; if (s1[i] == 0)
        je      end_of_string

        cmp     byte [rax], 0   ; if (s2[i] == 0)
        je      end_of_string

        mov     bpl, byte [rax] ; if ((s1[i] - s2[i]) == 0)
        sub		byte [rdx], bpl 
		jz		loop
        jmp     end             ; else if ((s1[i] - s2[i]) != 0)

end_of_string:
        mov     bpl, byte [rax] 
        sub		byte [rdx], bpl 
		jmp     end

end:
        mov     rax, 0
        mov     ax, word [rdx] ; else
        pop     rbp             ;   return (s1[i] - s2[i])
        ret