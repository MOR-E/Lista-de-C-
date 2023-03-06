#include <stdio.h>

int main () {
    double peso_mora;
    double peso_maca;
    double result;
    double preco_mora;
    double preco_maca;
    double result_preco;

    printf("Informe a quantidade de morangos: ");
    scanf("%lf", &peso_mora);
    printf("Informe a quantidade de macas: ");
    scanf("%lf", &peso_maca);
    
    if (peso_maca > 5)
    {
        preco_maca = peso_maca * 2.80;
    } else{
        preco_maca = peso_maca * 3.50;
    }

    if (peso_mora > 5)
    {
        preco_mora = peso_mora * 5.30;
    } else{
        preco_mora = peso_mora * 7.50;
    }
    
    result = peso_maca + peso_mora;
    result_preco = preco_mora + preco_maca;
    printf("%lf\n", result);    
    printf("%lf", result_preco);

    //o output esta saindo com o result == 0 não sei porque
 /*   if (result <= 5, result_preco >= 19){
        result_preco = result / 0.8;
        printf("O preco final e: %lf\n", &result_preco);
    }else {
        printf("%lf", result_preco);
    }*/

    return 0;
}