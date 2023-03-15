/*26. Desenvolva um programa que calcule a média das notas de alunos
para uma turma de no máximo 100 alunos. O programa deve solicitar
no início o tamanho da turma.*/

#include <stdio.h>

int main()
{
	int n_alunos;
	int media;
	int i;
	int vetor_alunos[n_alunos];
    
	printf("Informe o tamanho da turma: ");
	scanf("%d", &n_alunos);
    
	while (n_alunos > 3) {
    	printf("Informe o tamanho da turma novamente: ");
    	scanf("%d", &n_alunos);
	}

    
	for (i = n_alunos; i != 0; i--) {
    	printf("Informe uma nota: ");
    	scanf("%d", & vetor_alunos[i]);
    	media = media + vetor_alunos[i];
	}
	media = media / 3;
	printf("%d", media);

	return 0;
}
