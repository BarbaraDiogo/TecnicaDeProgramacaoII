/*BARBARA DIOGO
6. Escrever uma função que construa um vetor com 10 pontos (x; y) aleatórios inteiros
*/
#include<iostream>
#include <stdlib.h>
#include <locale>
#include <time.h>
#include <windows.h>

using namespace std;

struct coord{

    int x;
    int y;
};

typedef struct coord coord;

void coordenadas(coord vet[]){

    srand(time(NULL));

    for(int i=0; i < 10; i++){

        (vet + i)->x = rand() %200 + 1;
        (vet + i)->y = rand() %200 + 1;
        
    }   
    for(int i=0; i < 10; i++){

        cout << (vet + i)->x << endl;
        cout << (vet + i)->y << endl;
    }

}

int main(){

    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);

    coord vet[10];

    coordenadas(vet);

}