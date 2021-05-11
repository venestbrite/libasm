section .text
    global _ft_strcpy

_ft_strcpy:
    xor rax, rax
    xor rcx, rcx
    xor rdx, rdx
    cmp rsi, 0
    jz end
    jmp till_0

increment:
    inc rcx

till_0:
    mov dl, BYTE[rsi + rcx]
    mov BYTE[rdi + rcx], dl
    cmp dl, 0
    jnz increment

end:
    mov rax, rdi
    ret 