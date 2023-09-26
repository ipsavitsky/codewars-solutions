global cntbyx

section .text

; <-- [dword RAX] cntbyx([dword RDI] outp, ESI x, RDX n) -->
;   Do not allocate memory!
;   Fill the buffer passed in RDI with multiples of x
;   and return the address (pointer) to this buffer.
cntbyx:
    mov rcx, rdx
    mov rbx, rdi
    mov edx, esi
L1:
    mov [rbx], esi
    add rbx, 4
    add esi, edx
    loop L1

    mov rax, rdi            ; copying <outp> to RAX as the result
    ret
; -----> endof cntbyx <-----
