/*25.Escreva um programa que solicite seis números do tipo inteiro ao usuário e os armazene em um vetor, depois o programa deverá apresentar na tela os números na ordem inversa do qual foram
digitados.*/

#include <stdio.h>

int func_compara();

  int vetor[6];
  int i;
  int j;

int main()
{

  for (i = 0; i < 6; i++){
    printf("informe um numero: ");
    scanf("%d", &vetor[i]);
  }

  func_compara();

    return 0;
}

int func_compara (){
    for (j = 5; j >=  0; j--){
      printf("%d", vetor[j]);
      }
}  
