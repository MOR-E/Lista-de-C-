/*12.Escreva um programa que leia a quantidade de alunas e de alunos.
Depois esse programa deve informar se essa turma possui mais
alunos ou mais alunas. Se essa turma possuir a quantidade de alunas
maior que a de alunos, informe o total de alunos dessa turma. O
programa deve verificar se a quantidade de alunos é igual a de alunas.*/

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