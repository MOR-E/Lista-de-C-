/*Dado um conjunto de N números, faça um programa C que calcule e
mostre a média aritmética dos elementos desse conjunto.
*/

#include <stdio.h>

int main () {

    int n_conjunto;
    int n1;
    int i;
    int soma;
    float media;

    printf("Informe a quantidade do conjunto: ");
    scanf("%d", &n_conjunto);

    for (i = 0; i <= n_conjunto; i++) {
        printf("Informe um numero: ");
        scanf("%d", &n1);
        soma += n1;
    }
    media = soma / n_conjunto;
    printf("%f", media);

    return 0;
}