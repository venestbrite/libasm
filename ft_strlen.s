section .text
      global _ft_strlen

_ft_strlen:
  xor rax, rax
  jmp till_0

increment:
  inc rax

till_0:
  cmp BYTE[rdi + rax], 0
  jne increment
  
end:
  ret