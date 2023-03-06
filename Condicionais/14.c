#include <stdio.h>

int main (){
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

    switch (valor)
    {
    case '+':
        result = n1 + n2;
        printf("O resultado e: %d\n", result);
        break;
    case '-':
        result = n1 - n2;
        printf("O resultado e: %d\n", result);
        break;
    case '*':
        result = n1 * n2;
        printf("O resultado e: %d\n", result);
        break;
    case '/':
        result = n1 / n2;
        printf("O resultado e: %d\n", result);
        break;
    default:
        printf("valor não informado");
        break;
    }

    return 0;

}