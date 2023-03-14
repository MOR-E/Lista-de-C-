#include <stdio.h>

int main () { 
    int Tc = 0;
    int Tf = 32;
    int i;
    int compara = 15;
    int faren = 50;
    int cel;

    for (i = 0; i < 15; i++) {
        printf("%d\n", faren);
        int cel = (faren - 32) * (5 / 9);
        printf("%d\n", cel);
    }

    return 0;
}