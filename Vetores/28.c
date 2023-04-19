/*28.Desenvolva um programa que leia dez números do tipo inteiro ao
usuário Armazene esses dez números em um vetor. Para os valores
dos elementos inseridos nas posições pares desse vetor, calcule o
somatório deles, para os demais calcule a subtração desses valores.
Em seguida, o programa deverá apresentar na tela os resultados.*/

#include <stdio.h>

int main () {
    int N = 4;
    int vet[N];
    int vet_par;
    int vet_impar;
    int i;
    int j;

    for (i = 0; i < N; i ++) {
        printf("Informe um numero: ");
        scanf("%d", &vet[i]);
    }
    
    for (j = 0; j < N; j++) {
        if (N % 2 == 0) {
            vet_par += vet[j];
        } else {
            vet_impar -= vet[j];
        }
    }

    printf("%d\n", vet_par);
    printf("%d\n", vet_impar);

    return 0; //AINDA ESTA ERRADO, NÃO SIE POR QUE ESTA PEGANDO O ENDEREÇO DE MEMORIA
}

/*     if(vet[i] % 2 == 0){
            vet_par[N] += vet[i];
        } else {
            vet_impar[N] -= vet[i];
        }

*/