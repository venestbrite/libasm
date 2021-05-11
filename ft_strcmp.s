section .text
    global _ft_strcmp

_ft_strcmp:
    xor rax, rax
    xor rcx, rcx
    xor rdx, rdx
    cmp rsi, 0
    jz is_zero
    cmp rdi, 0
    jz is_zero

compare:
    mov dl, BYTE[rsi + rcx]
    cmp dl, BYTE[rdi + rcx]
    jne sub

increment:
    inc rcx

not_exist:
    cmp BYTE[rdi + rcx], 0
    je sub
    cmp BYTE[rsi + rcx], 0
    je sub
    jmp compare

sub:
    mov dl, BYTE[rdi + rcx]
    sub dl, BYTE[rsi + rcx]
    cmp dl, 0
    jb less
    jl less
    jz is_zero
    ja greater
    jg greater

greater:
    mov rax, 1
    ret

less:
    mov rax, -1
    ret

is_zero:
  mov rax, 0
  ret