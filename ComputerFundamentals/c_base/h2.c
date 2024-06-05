#include <stdio.h>
#include <unistd.h>
#define FORALL_REGS(_)  _(X) _(Y) _(Z)
#define LOGIC      X1 = (!X && Y && Z) || (X && (!(Y&&Z))); \
                   Y1 = (!Y && Z) || (Y && !Z); \
                   Z1 = !Z
#define DEFINE(X) static int X, X##1;
#define UPDATE(X) X = X##1;
#define PRINT(X)  printf(#X " = %d; ", X);

int main() {
        FORALL_REGS(DEFINE);
        while(1) {
                FORALL_REGS(PRINT);
                putchar('\n'); sleep(1);
                LOGIC;
                FORALL_REGS(UPDATE);
        }
        return 0;
}
