/*23.Desenvolva um programa que possua uma função que recebe um
valor inteiro e verifica se o valor é positivo ou negativo. A função deve
retornar um valor booleano. Depois a função principal deve informar ao
usuário o resultado.
*/

#include <stdio.h>
#include <stdbool.h>

int func_compara();

int n1;
bool compara_tf = false;

int main () {
    printf("Informe um numero: ");
    scanf("%d", & n1);

    func_compara();

    if (compara_tf == true ){
        printf("O numero e negativo");
    } else {
        printf("O numero e positivo");
    }

    return 0;
}

int func_compara() {
    if (n1 < 0) {
        return compara_tf = true;
    }

}

