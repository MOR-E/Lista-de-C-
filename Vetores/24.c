/*24.Escreva um programa para informar o maior elemento de um vetor de
5 posições do tipo inteiro. Esse programa deve possuir uma função
para verificar o maior número desse vetor*/

#include <stdio.h>

int func_compara();

  int n1 = 5;
  int vetor[5];
  int i;
  int j;
  int compara_valor;

int main()
{

  for (i = 0; i < 5; i++){
    printf("informe um numero: ");
    scanf("%d", &vetor[i]);
  }

  func_compara();

    return 0;
}

int func_compara (){
    for (j = 0; j <  5; j++){
      if (vetor[j] > vetor[j + 1]){
        compara_valor = vetor[j];
      }
    }
  printf("%d", compara_valor);
}  
