int foo(int x, int y){
	int z;
	x++;y++;
	asm(
			"addl %1, %2;"
			"movl %2, %0;"
			: "=r"(z) //output
			: "r"(x), "r"(y) // intput
	);
	return z;
}
