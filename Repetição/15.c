/*15.Dado um número, crie um programa C que escreva todos os números
ímpares menores e/ou iguais a esse número e maiores ou igual a um.
Assuma que o número informado é positivo.*/
#include <stdio.h>

int main () {
    int n1;
    int i;

    printf("Informe um numero: ");
    scanf("%d", &n1);

    for (i = 1; i <= n1; i++)
    {
        if ((i % 2) != 0){
            printf("%d", i);
        }
    }
    
    return 0;
}