/*13. Uma frutaria vende frutas com a seguinte tabela de preços:
Até 5 Kg                  /     Acima de 5 Kg
Morango: R$ 7,50 p/Kg    /      R$ 5,30 p/Kg
Maçã: R$ 3,50 p/Kg      /       R$ 2,80 p/Kg

Se o cliente comprar menos de 5 kg de frutas e o valor total da compra
ultrapassar R$ 19,00, receberá um desconto de 8% sobre o total.
Escreva um programa em C para ler a quantidade (em Kg) de
morangos e a de maçãs (em Kg) e que informe o valor a ser pago pelo
cliente
*/

#include <stdio.h>

int main () {
    float peso_mora;
    float peso_maca;
    float result;
    float preco_mora;
    float preco_maca;
    float result_preco;

    printf("Informe a quantidade de morangos: ");
    scanf("%f", &peso_mora);
    printf("Informe a quantidade de macas: ");
    scanf("%f", &peso_maca);
    
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
    printf("%.2f\n", result);    
    printf("%.2f\n", result_preco);

    //o output esta saindo com o result == 0 não sei porque
 /*   if (result <= 5, result_preco >= 19){
        result_preco = result / 0.8;
        printf("O preco final e: %lf\n", &result_preco);
    }else {
        printf("%lf", result_preco);
    }*/

    return 0;
}