/*
3) Escreva um programa que reproduza “adivinhe o número” da seguinte
forma:
Seu programa escolhe o número a ser adivinhado selecionando um número
inteiro aleatório no intervalo de 1 a 1.000. O programa exibe o prompt:
Adivinhe um número entre 1 e 1.000.
O jogador insere um primeiro palpite. Se o palpite do jogador estiver
incorreto, seu programa deve exibir “Muito alto, tente novamente” ou
“Muito baixo, tente novamente.” para ajudar o jogador a chegar na resposta
correta. O programa deve solicitar ao usuário o próximo palpite. Quando o
usuário digitar a resposta correta, exiba “Parabéns. Você adivinhou o
número!”, e permita que o usuário escolha se quer jogar novamente
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(){
	int tentativa, tamanho, numeroTentativas=0, numeroAleatorio;

    printf("********ADVINHE O NÚMERO********");
    printf("\n");
    printf("Quantas tentativas você deseja ter? ");
    scanf("%d", &tentativa);
    printf("\n");

    srand(time(NULL));
	numeroAleatorio = rand() % 1000 + 1;
	int numero;
	 

    do{
        printf("Adivinhe um numero de 0 a 1.000\n");
		scanf("%d", &numero);

		if(numero > numeroAleatorio){
			printf("Muito alto, tente novamente.\n");

		} else if (numero < numeroAleatorio){
			printf("Muito baixo, tente novamente.\n");

		} else{ 
			printf("Parabéns. Você adivinhou o número!\n");
			tentativa = numeroTentativas;
		}
			
	    tentativa++;	
    }while (numeroTentativas<tentativa);
	
	return 0;
}