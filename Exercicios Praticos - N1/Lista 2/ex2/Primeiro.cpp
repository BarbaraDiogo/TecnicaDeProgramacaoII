/*
1) Escreva um programa que use uma instrução for para calcular a média de
vários números inteiros. Suponha que o último valor lido seja o sentinela
9999. Por exemplo, a sequência 10, 8, 11, 7, 9, 9999 indica que o programa
deve calcular a média de todos os valores anteriores a 9999
*/

#include <stdio.h>
#include<locale.h>

int main(){
    int n, contador, x;
    float soma=0;

    printf("Digite a quantidade de numeros que deseja informar: ");
    scanf("%d", &n); 
    contador=0; 

    for(int i=0; i<n; i++)
    while(contador<n){ 
        printf("Digite o %d° número: ", i+1);
        scanf("%d", &x); 
        contador = contador + 1;
        soma = soma + x;
    }
    
    printf("%f", (soma-x)/(n-1));
    return 0;
}