/*30.Desenvolva um programa para ler os dados de uma matriz para
armazenar três notas de dez alunos. Em seguida apresente a menor
nota da prova de cada aluno. Desenvolva uma função para obter a
menor nota de cada aluno.
*/
#include <stdio.h>

// Protótipo da função para obter a menor nota de um aluno
float menor_nota(float notas[]);

int main() {
    float notas[10][3]; // Matriz para armazenar as notas dos 10 alunos

    // Lendo as notas dos alunos
    for (int i = 0; i < 10; i++) {
        printf("Digite as notas do aluno %d: ", i+1);
        scanf("%f %f %f", &notas[i][0], &notas[i][1], &notas[i][2]);
    }

    // Apresentando a menor nota de cada aluno
    for (int i = 0; i < 10; i++) {
        float menor = menor_nota(notas[i]); // Chamando a função para obter a menor nota
        printf("Menor nota do aluno %d: %.2f\n", i+1, menor);
    }

    return 0;
}

// Definição da função para obter a menor nota de um aluno
float menor_nota(float notas[]) {
    float menor = notas[0];
    for (int i = 1; i < 3; i++) {
        if (notas[i] < menor) {
            menor = notas[i];
        }
    }
    return menor;
}
