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