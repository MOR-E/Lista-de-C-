#include <stdio.h>

int main (){
    int n1;
    int i;
    int maior = 0;
    int menor = 0;
    int media = 0;
    int soma = 0;

    for (i = 1; i <= 10; i++) {
        printf("informe um numero: ");
        scanf("%d", &n1);

        soma += n1;

        media = soma / 10;

        if (n1 > maior){
            maior = n1;
        } else if (n1 < maior) {
            menor = n1;
        }
    }

    printf("%d\n", soma);
    printf("%d\n", media);
    printf("%d\n", maior);
    printf("%d\n", menor); // não sei por que esta pegando o 0

    return 0;
}