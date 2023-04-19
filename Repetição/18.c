/*18.Faça um programa C que leia dez números que representem as notas
de dez alunos, e que apresente:
a) a soma dos números;
b) a média dos números;
c) o maior número;
d) o menor número.
Assuma que as notas são informadas corretamente no intervalo de 1 a 10.*/

#include <stdio.h>

int main (){
    int n1;
    int i;
    int maior = 0;
    int menor = 0;
    int media = 0;
    int soma = 0;

    for (i = 0; i <= 9; i++) {
        printf("informe um numero: ");
        scanf("%d", &n1);

        soma += n1;

        media = soma / 10;

        if (n1 > maior){
            maior = n1;
        } else if (n1 < maior) {
            menor = n1;
        }
    }

    printf("%d\n", soma);
    printf("%d\n", media);
    printf("%d\n", maior);
    printf("%d\n", menor); // não sei por que esta pegando o 0

    return 0;
}