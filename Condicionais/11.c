#include <stdio.h>

int main () {
    char valor;
    int n1;
    int n2;
    int result;

    printf("Informe o operador: ");
    scanf("%c", &valor);
    printf("Informe um numero: ");
    scanf("%d", &n1);
    printf("Informe um numero: ");
    scanf("%d", &n2);

    printf(valor); // não sei porque não esta pegando o valor do operador

    if (valor == "+")
    {
        result = n1 + n2;
        printf("O resultado e: %d\n", result);
    } else if (valor == "-") {
        result = n1 - n2;
        printf("O resultado e: %d\n", result);
    } else if (valor == "*") {
        result = n1 * n2;
        printf("O resultado e: %d\n", result);
    } else if (valor == "/") {
        result = n1 / n2;
        printf("O resultado e: %d\n", result);
    }
    

    return 0;
}