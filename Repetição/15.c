#include <stdio.h>

int main () {
    int n1;
    int i;

    printf("Informe um numero: ");
    scanf("%d", &n1);

    for (i = 1; i <= n1; i++)
    {
        if ((i % 2) != 0){
            printf("%d", i);
        }
    }
    
    return 0;
}