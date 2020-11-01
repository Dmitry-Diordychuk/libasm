; ssize_t read(int fildes, void *buf, size_t nbyte);
		global ft_read
		section .text
        extern  __errno_location
ft_read:
        mov     rax, 0x0
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