/*
Escreva um programa que leia o número de alunos e de alunas de
uma sala. Como saída, o programa deve apresentar o número de
alunos e em seguida o de alunas.

*/

#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int alunos;
  int alunas;

  printf("informe a quantidade de alunos é alunas: ");
  scanf("%d %d", &alunos, &alunas);

  printf("%d %d", alunos, alunas);
  return 0;
}