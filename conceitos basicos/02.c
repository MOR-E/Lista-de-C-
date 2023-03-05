/*
Escreva um programa para receber 3 valores inteiros do usuário e
mostrar a sua média (que pode não ser inteira).
*/

#include <stdio.h>

int main(){

    int nota1, nota2, nota3;
    float media = 0;

    printf("Informe tres numeros: ");
    scanf("%d %d %d", &nota1, &nota2, &nota3);

    media = (nota1 + nota2 + nota3);

    printf("%f", media / 3);    
}