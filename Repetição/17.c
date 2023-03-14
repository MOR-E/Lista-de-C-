#include <stdio.h>

int main () { 
    int n1;
    int i;
    int maior = 0;
    int menor = 0;

    for (i = 0; i < 3; i++) {
        printf("informe um numero: ");
        scanf("%d", &n1);
        if (n1 > maior){
            maior = n1;
        } else if (n1 < maior) {
            menor = n1;
        }
    }
    printf("%d\n", maior);
    printf("%d\n", menor);

    return 0;
}