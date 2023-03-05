#include <stdio.h>

int main (){
    int n_inteiro;
    int multi = 0; 
    int result = 0;

    printf("Informe um numero: ");
    scanf("%d", &n_inteiro);

    while (multi <= 10){
        result = multi * n_inteiro;
        printf("%d\n", result);
        multi = multi + 1;

    }

    return 0;
}