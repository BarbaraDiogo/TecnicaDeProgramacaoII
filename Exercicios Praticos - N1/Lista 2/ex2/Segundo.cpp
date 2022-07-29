/*
2)Escreva um programa que leia o tamanho do lado de um quadrado e
imprima um quadrado vazio desse tamanho com asteriscos e espaços em
branco. Seu programa deve funcionar para quadrados de todos os tamanhos
de lado entre 1 e 20. Por eaemplo, se seu programa lê um tamanho de 5, ele
deve imprimir:
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int tam,count,a,b;

    printf("Informe o tamanho do quadrado que deseja imprimir (tam: 1 a 20): ");
    scanf("%d", &tam);
    printf("\n");
    count=tam-2;

    for (a=0;a<tam;a++)
        printf("*");

    for (b=0;b<count;b++){
        printf("\n*");

        for(a=0; a<count;a++)
            printf(" ");

            for(a=0; a<1;a++)
                printf("*");
    }
    
    printf("\n");
    for (a=0;a<tam;a++)
        printf("*");
        
    return 0;
}