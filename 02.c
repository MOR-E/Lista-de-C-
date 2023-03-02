/*
Escreva um programa para receber 3 valores inteiros do usuário e
mostrar a sua média (que pode não ser inteira).
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int nota1, nota2, nota3;

    printf("Informe três números: ");
    scanf("%d %d %d", &nota1, &nota2, &nota3);

    printf("%f", 3 / (nota1 + nota2 + nota3) );
}