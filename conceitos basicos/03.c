#include <stdio.h>

int main (){
    int segundos;
    double horas;
    double minutos; 
    
    printf("Informe o tempo do jogo em segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;

    minutos = segundos / 60;

    printf("tempo em segundos: %d\n", segundos);
    printf(" tempo em minutos: %lf\n", minutos);
    printf(" tempo em horas: %2f\n", horas); // não sei porque não esta considerando as duas casas dicimais

    return 0;
}