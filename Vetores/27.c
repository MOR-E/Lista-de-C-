/*27. Escreva um programa que leia doze números do tipo inteiro ao usuário.
Separe esses números em pares e ímpares e os armazenem em dois
outros vetores chamados vetpar e vetimpar. Em seguida, o programa
dever apresentar os resultados na tela.*/

#include <stdio.h>

int main () {
	int n1;
	int size_vetor = 3;
	int vetimpar[size_vetor];
	int vetpar[size_vetor];
	int i;
	int compara;
    
    
	for (i = 0; i < 3; i++) {
    	printf("Informe um numero: ");
    	scanf("%d", &n1);
   	 
    	compara = n1 % 2;
   	 
    	if (compara != 0){
        	vetimpar[size_vetor] = vetimpar[i] + n1;
    	} else {
        	vetpar[size_vetor] = vetpar[i] + n1;
    	}
	}
    // ainda esta errado essa questão

    
	printf("%d\n", vetpar[size_vetor]);
	printf("%d\n", vetimpar[size_vetor]);
    
    
	return 0;
}
