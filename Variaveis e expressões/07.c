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