int foo(int x, int y) {
	x++; y++;
 	asm("endbr64;"
     	    ".byte 0xf3, 0x0f, 0x1e, 0xfa"
  	);
  return x + y;
}
