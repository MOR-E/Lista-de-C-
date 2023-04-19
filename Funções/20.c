/*20.Escreva um programa que solicite dois números do tipo inteiro distintos
ao usuário e que apresente na tela o maior deles. Esse programa deve
possuir uma função para verificar qual é o maior número.
*/

#include <stdio.h>

int myfunction();

int main () {
    
    myfunction();
    return 0;
}

int myfunction () {
    int n1;
    int n2;
    int i;
    int maior = 0;

    for (i = 0; i < 1; i++) {
        printf("informe um numero: ");
        scanf("%d", &n1);
        printf("informe um numero: ");
        scanf("%d", &n2);
        if (n1 >n2){
            maior = n1;
        } else {
            maior = n2;
        }
    }
    printf("O maior numero e o: %d\n", maior);
}