#include <stdio.h>

int main () {

    int n;
    int result;

    printf("Informe um numero: ");
    scanf("%d", &n);

    result = n % 2;

    if (result == 0){
        printf("par");
    }else {
        printf("impar");
    }


    return 0;
}