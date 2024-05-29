extern int printf (const char *__restrict __format, ...);

int main()
{
#if aa == bb
	printf("yes\n");
#else
	printf("no\n");
#endif
}
