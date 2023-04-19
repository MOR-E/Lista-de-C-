/*10.Desenvolva um programa para comparar a idade de Pedro e a de
Joana e informar quem é o mais velho. Dados de entrada: idade de
Pedro e de Joana (tipo das variáveis: inteiro, e valor em anos).
Observação: essas pessoas possuem idades diferentes.*/

#include <stdio.h>

int main () {

    int pedro_idade;
    int joana_idade;

    printf("Informe a idade de Pedro: ");
    scanf("%d", &pedro_idade);
    printf("Informe a idade de Joana: ");
    scanf("%d", &joana_idade);


    if (pedro_idade >= joana_idade){
        printf("Pedro e mais velho");
    }else {
        printf("Joana e mais velha");
    }


    return 0;
}