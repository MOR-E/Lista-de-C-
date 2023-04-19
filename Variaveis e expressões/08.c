/*8. Faça um programa que recebe duas notas parciais de um aluno (0 a
100) e informa se ele está aprovado (média maior ou igual a 70), em
exame final (média entre 40 e 69) ou reprovado (média menor do que
40). Caso esteja em exame o programa deve pedir a nota do exame (0
a 100) e informar se o aluno está aprovado (média mais nota do exame
maior ou igual a 100) ou reprovado (média mais nota do exame menor
do que 100).*/

#include <stdio.h>

int main (){
    int nota1;
    int nota2;
    int result1;
    int result_final;
    int exame_final;

    printf("Informe uma nota: ");
    scanf("%d", & nota1);
    printf("Informe uma nota: ");
    scanf("%d", & nota2);

    result1 = (nota1 + nota2) / 2;

    if (result1 >= 40, result1 <= 69){
        printf("esta de final, informe a nota do exame: ");
        scanf("%d", &exame_final);

        result_final = result1 + exame_final;

        if(result_final >= 100){
            printf("aprovado!");
        }else {
            printf("reprovado!");
        } 

    } else if ( result1 >= 70)  {
        printf("aprovado \n");
    }else{
        printf("reprovado \n");
    }
   
    return 0;
}