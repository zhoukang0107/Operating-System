#include <stdio.h>
void f(void);

int y = 15212;
int x = 15213;

int main()
{
	f();
	printf("x = %d, y = %d", x, y);
	return 0;
}
