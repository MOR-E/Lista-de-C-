/*27. Escreva um programa que leia doze números do tipo inteiro ao usuário.
Separe esses números em pares e ímpares e os armazenem em dois
outros vetores chamados vetpar e vetimpar. Em seguida, o programa
dever apresentar os resultados na tela.*/

#include <stdio.h>

int main () {
	int N = 12;
	int vetor[N];
	int vetimpar[N];
	int vetpar[N];
	int compp = 0;
	int compi = 0;
	int i;
    
    
	for (i = 0; i < 3; i++) {
    	printf("Informe um numero: ");
    	scanf("%d", &vetor);
   	 
    	if (vetor[i] % 2 == 0){
        	vetpar[compp] = vetor[i];
			compp++;
    	} else {
        	vetimpar[compi] = vetor[i];
			compi++;
    	}
	}

    
	for (int i = 0; i < N; i++)
	{
			printf("%d\n", vetpar[i]);
	}
	
	for (int i = 0; i < N; i++)
	{
		printf("%d\n", vetimpar[i]);
	}
    
    
	return 0;
}
