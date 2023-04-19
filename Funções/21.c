/*21.Escreva um programa que solicite dois números ao usuário e
apresente na tela o resultado da soma do módulo desses números.
Esse programa deve possuir uma função para calcular o módulo.*/

#include <stdio.h>

int func_soma();
void compara();

int n1;
int n2;
int result_soma;

int main () {

    printf("Informe um numero: ");
    scanf("%d", & n1);
    printf("Informe um numero: ");
    scanf("%d", & n2);

    result_soma = n1 + n2;
    void compara();

    if (n1 - n2 > 0){
        printf("- %d\n",result_soma);
    } else {    
        printf("+ %d\n",result_soma);
    }

    return 0;
}

void compara() {


}