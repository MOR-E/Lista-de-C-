#include <stdio.h>

int main () {
    int alunos;
    int alunas;
    int result;

    printf("Informe a quantidade de alunos: ");
    scanf("%d", &alunos);
    printf("Informe a quantidade de alunas: ");
    scanf("%d", &alunas);

    if (alunos > alunas)
    {
        printf("A turma possui mais alunos");
    }  else if (alunos == alunas)
    {
        printf("O total de alunos e igual");
    } else {
        printf("A turma possui mais alunas \n");
        result = alunos + alunas;
        printf("A turma possui um total de: %d\n", result);
    }


    return 0;
}