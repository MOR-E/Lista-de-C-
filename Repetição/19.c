/*19.A conversão de graus Fahrenheit para Celsius é obtida por
Tc={(Tf-32)x(5/9)}, em que Tc é a temperatura em Celsius e Tf em
Fahrenheit. Faça um programa C que calcule e que imprima uma
tabela de graus Fahrenheit e graus Celsius, cujos graus variem de 50 a
65, de 1 em 1*/

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