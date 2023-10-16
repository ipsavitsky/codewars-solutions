SECTION .text
global make_negative

make_negative:
  mov eax, edi
  cmp eax, 0
  jle Ret
  neg eax
Ret:
  ret
