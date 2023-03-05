#include <stdio.h>

int main (){
    int n;
    int n2;
    int result_soma;
    int result_sub;
    int result_rest;
    int result_div;
    int result_media;

    printf("Informe um numero: ");
    scanf("%d", & n);

    printf("Informe um numero: ");
    scanf("%d", & n2);

    result_soma = n + n2;
    printf("%d\n",result_soma);
    result_sub = n - n2;
        printf("%d\n",result_sub,"\n");
    result_rest = n % n2;
        printf("%d\n",result_rest,"\n");
    result_div = n / n2;
        printf("%d\n",result_div,"\n");
    result_media = (n + n2) / 2;
        printf("%d\n",result_media,"\n");

    return 0; 
}