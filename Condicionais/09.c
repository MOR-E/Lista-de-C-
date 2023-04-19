/*9. Faça um programa para ler um número do usuário e determinar se
este número é par ou não par.*/

#include <stdio.h>

int main () {

    int n;
    int result;

    printf("Informe um numero: ");
    scanf("%d", &n);

    result = n % 2;

    if (result == 0){
        printf("par");
    }else {
        printf("impar");
    }


    return 0;
}