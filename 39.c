/*39.Desenvolva um programa em C que declare três variáveis do tipo
inteiro e três do tipo ponteiro de inteiro apontando para essas variáveis.
Utilizando ponteiros, leia três números e os imprima em ordem
crescente. O programa deve apresentar também o endereço de
memória desses números.*/

#include <stdio.h>

int crescente (int *a1, int *a2);

int main(){

int n1, n2, n3, aux;

int *ptr1 = &n1;
int *ptr2 = &n2;
int *ptr3 = &n3;

    printf("Digite o valr de n1: ");
    scanf("%d",&n1);
    
    printf("Digite o valr de n2: ");
    scanf("%d",&n2);
    
    printf("Digite o valr de n3: ");
    scanf("%d",&n3);
    
    crescente(&n2,&n1);
    crescente(&n3,&n1);
    crescente(&n2,&n3);
    
    printf("Ordem crescente: %d,%d,%d\n", n1 , n2, n3);
    printf("Endereço do ponteiro: %p,%p,%p\n", *ptr1,*ptr2,*ptr3);
    
    return 0;
}


int crescente(int *a1, int *a2) {
    int aux;
    
    if (*a1 > *a2) {
        aux = *a1;
        *a1 = *a2;
        *a2 = aux;    
    }
    
}
