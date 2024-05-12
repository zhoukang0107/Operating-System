#include <stdio.h>
void f(void);

int x;

int main()
{
	x = 15213;
	f();
	printf("x = %d", x);
	return 0;
}
