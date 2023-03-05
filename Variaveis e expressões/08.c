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