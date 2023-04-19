/*5. Escreva um programa que leia um número na base decimal e em
seguida imprima esse mesmo número nas bases octal e hexadecimal.*/

#include <stdio.h>

int main (){

    int n;
    int octal; 

    printf("Informe um numero: ");
    scanf("%d", & n);

    printf("%d\n", n);
    printf("%x\n", n);
    printf("%o", n);

}