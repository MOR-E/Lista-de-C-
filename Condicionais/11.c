/*11. Fazer um programa que recebe um símbolo de operação do usuário (+,
-, / ou *) e dois números reais. O programa deve retornar o resultado
da operação recebida sobre estes dois números*/

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

    if (valor == "+")
    {
        result = n1 + n2;
        printf("%d\n", result);
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