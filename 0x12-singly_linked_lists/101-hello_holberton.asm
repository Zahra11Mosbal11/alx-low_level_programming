	global   main
	  extern    printf
main:
	  mov   edi, str
	  xor   eax, eax
	  call  printf
	  mov   eax, 0
	  ret
str: db `Hello, Holberton\n`,0
