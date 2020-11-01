; int strcmp(const char *s1, const char *s2);
	        global ft_strcmp
	        section .text
ft_strcmp:
        push    rbp
        mov	rcx, 0
        mov     rdx, 0
        mov     rax, 0
        mov     rbp, 0
loop:
	mov	rax, rdi        ; rdx = rdi + i     s1[i]
	add	rax, rcx
        mov     rdx, rsi        ; rax = rsi + i     s2[i]
        add     rdx, rcx
        inc     rcx             ; i++

        cmp     byte [rax], 0
        je      end

        mov     bpl, byte [rax]
        cmp     bpl, byte [rdx]
        je      loop
        jb      smaller
        pop     rbp
        mov     rax, 1
        ret

end:
        cmp     byte [rdx], 0
        je      equal
        mov     bpl, byte [rax]
        cmp     bpl, byte [rdx]
        pop     rbp
        ret

equal:
        mov     rax, 0
        pop     rbp
        ret

smaller:
        mov     rax, -1
        pop     rbp
        ret