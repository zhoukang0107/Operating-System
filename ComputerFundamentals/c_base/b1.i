# 0 "b1.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "b1.c"
# 1 "b2.inc" 1
extern int printf (const char *__restrict __format, ...);
# 2 "b1.c" 2

int main()
{
 printf(
# 1 "b3.inc" 1
# 1 "b4.inc" 1
"this is b4.inc"
# 2 "b3.inc" 2
# 7 "b1.c" 2
  );
}
