# 0 "sum.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "sum.c"
# 11 "sum.c"
int main() {
 printf("%.16f\n", ({ float s = 0; for (int i=1;i!=1000000 +1;i+=1) s+= (float)1/i; s; }));
        printf("%.16f\n", ({ float s = 0; for (int i=1000000;i!=1 +-1;i+=-1) s+= (float)1/i; s; }));
        printf("%.16f\n", ({ double s = 0; for (int i=1;i!=1000000 +1;i+=1) s+= (double)1/i; s; }));
        printf("%.16f\n", ({ double s = 0; for (int i=1000000;i!=1 +-1;i+=-1) s+= (double)1/i; s; }));
}
