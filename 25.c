#include <stdio.h>

int main (){
    int vetor[5];
    int i;
    int j;

    for (i = 0; i <= 5; i++){
        printf("Informe um numero: ");
        scanf("%d", &vetor[i]);
    }

    for (j = 5; j >=0; j--) {
        printf("%d\n", vetor[j]);
    }

    return 0;
}