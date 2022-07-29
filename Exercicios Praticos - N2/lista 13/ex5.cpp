/*BARBARA DIOGO
5. Escrever uma função que some dois vetores e armazene os resultados desta soma no primeiro vetor
*/
#include<iostream>
using namespace std;

void soma(int *v1, int *v2){
    for(int i=0; i<10; i++){
        v1[i] = v1[i] + v2[i];
    }
}

int main(){
    int vet1[10] = {2, 5 , 9, 14, 5, 7, 1, 3, 41, 10};
    int vet2[10] = {8, 9, 6, 2, 4, 7, 12, 10, 3, 4};

    soma(vet1, vet2);

    for(int i=0; i<10; i++){
        cout <<" " << vet1[i];
    }
}