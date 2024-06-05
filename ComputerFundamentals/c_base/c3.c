extern int printf (const char *__restrict __format, ...);
#define ss true
int main()
{
#ifdef __x86_64__
	printf("__x86_64__"\n);
#else
	printf("x86\n");
#endif

#if aa == bb
	printf("yes\n");
#else
	printf("no\n");
#endif
}
