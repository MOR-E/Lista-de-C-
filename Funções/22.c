/*22.Escreva um programa que solicite dois números inteiros ao usuário e
que apresente na tela como resultado o dobro desses números que
devem ser somados e o resultado da soma devem ser triplicados. Esse
programa deve possuir uma função para dobrar o valor de um número,
outra para somar dois números e uma terceira para triplicar um
número.*/

#include <stdio.h>

int func_soma();
int func_dobrar();
int func_tripli();

int n1;
int n2;
int result_soma;
int result_dobrar_n1;
int result_dobrar_n2;
int result_tripli;

int main () {
    printf("Informe um numero: ");
    scanf("%d", & n1);
    printf("Informe um numero: ");
    scanf("%d", & n2);

    func_dobrar();
    func_soma();
    func_tripli();

    return 0;
}

int func_dobrar (){
    result_dobrar_n1 = n1 * 2;
    result_dobrar_n2 = n2 * 2;
    printf("Foi dobrado o primeiro numero para %d\n", result_dobrar_n1);
    printf(" e o segundo para: %d\n", result_dobrar_n2);
}


int func_soma (){
    result_soma = result_dobrar_n1 + result_dobrar_n2;
    printf("O resultado da soma e %d\n", result_soma);
}


int func_tripli () {
    result_tripli = result_soma * 3;
    printf("O resultado triplicado e: %d\n", result_tripli);
}
