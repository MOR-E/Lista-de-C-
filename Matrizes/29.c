/*29.Faça um programa para obter os valores de uma matriz 6x6 de
números inteiros. Depois da leitura dos dados, o programa deve
calcular a soma dos elementos da diagonal principal. Em seguida ele
deve mostrar os valores da matriz e o da soma*/

#include <stdio.h>

int main () {
    int i, j;
    int soma;
    int matriz[2][2];

    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 2; i++){
        soma = soma + matriz[i][i];
    }
    printf("%d", soma);

    return 0;
}