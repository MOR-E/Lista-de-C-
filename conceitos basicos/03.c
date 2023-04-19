/*3. Escreva um programa para:
a. Receba do usuário um tempo em segundos, correspondente à
duração de um evento qualquer (por exemplo, jogo de futebol);
b. Calcule e mostre ao usuário o tempo equivalente em horas, minutos
e segundos.*/

#include <stdio.h>

int main (){
    float segundos;
    float horas;
    float minutos; 
    
    printf("Informe o tempo do jogo em segundos: ");
    scanf("%f", &segundos);

    horas = segundos / 3600;

    minutos = segundos / 60;

    printf("tempo em segundos: %.2f\n", segundos);
    printf(" tempo em minutos: %.2f\n", minutos);
    printf(" tempo em horas: %.2f\n", horas);

    return 0;
}