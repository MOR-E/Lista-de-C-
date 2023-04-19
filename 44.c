/*44.Dados os seguintes campos de um registro: nome, dia de aniversário e
mês de aniversário, desenvolver um programa que mostre para cada
um dos meses do ano quem são as pessoas que fazem aniversário e
também a idade atual de cada pessoa (pedir ao usuário a data de
hoje). Considere um conjunto de 40 pessoas.*/

#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int ano;
    
} data;

typedef struct {
    char nome[20];
    data aniversario;
} info;

int main()
{
    info registro[2];
    data data_atual;
    int N;
    
    printf("digite o dia atual: ");
    scanf("%d", &data_atual.dia);
    
    printf("digite o mes atual: ");
    scanf("%d", &data_atual.mes);
    
    printf("digite o ano atual: ");
    scanf("%d", &data_atual.ano);

    for (int i = 0; i< N; i++){
        printf("Digite o nome: ");
        getch(registro[i].nome);
        
        printf("digite o dia do aniversario: ");
        scanf("%d", &registro[i].aniversario.dia);
    
        printf("digite o mes do aniversario: ");
        scanf("%d", &registro[i].aniversario.mes);
    
        printf("digite o ano do aniversario: ");
        scanf("%d", &registro[i].aniversario.ano);
    }    
    

    return 0;
}
