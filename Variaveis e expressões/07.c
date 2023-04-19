/*7. Desenvolva um programa para calcular e escrever a área e o perímetro
de um quadrado. Dados de entrada: tamanho do lado (tipo da variável:
numérico inteiro, valor em centímetros).*/

#include <stdio.h>

int main (){
    int lado;
    int altura;
    int result_area;
    int result_peri;

    printf("Informe o lado: ");
    scanf("%d", & lado);
    printf("Informe a altura: ");
    scanf("%d", & altura);

    
    result_area = lado * altura;
    printf("Tamanho da area: %d\n", result_area);

    result_peri = lado * 4;
    printf("Tamanho do perimetro: %d\n", result_peri);

    return 0;
}