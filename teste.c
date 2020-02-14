#include <stdlib.h>
#include <stdio.h>

int main(){

    int idade;
    do{
        printf("Sua idade: ");
        scanf("%d", &idade);
    }while(idade<0 || idade>100);

    printf("\nSua idade menos 1 é: %d\n", --idade);
    return 0;

    }
