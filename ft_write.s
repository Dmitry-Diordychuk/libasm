; ssize_t ft_write(int rdi, const void *rsi, size_t rdx);
		global ft_write
		section .text
        extern  __errno_location

ft_write:
        mov     rax, 0x1
        syscall
        push    rax
        or      rax, rax
        jns     end

        call    __errno_location wrt ..plt
        pop     rcx
        neg     rcx
        mov     qword [rax], rcx
        mov     rax, -1
        ret

end:
        pop     rax
        ret