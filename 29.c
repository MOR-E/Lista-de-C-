#include <stdio.h>

int main () {
    int i, j;
    int soma;
    int matriz[6][6];

    for (i = 0; i < 6; i++){
        for (j = 0; j < 6; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 6; i++){
        soma = soma + matriz[i][i];
    }
    printf("%d", soma);

    return 0;
}