/*BARBARA DIOGO
3. Escreva um programa em C++ que receba 2 vetores (A e B) e calcule a média entre os
elementos de mesmo índice (C[x]=A[x]+B[x]/2) e armazene em um terceiro vetor. Faça
todas as operações possíveis usando ponteiros. 
*/
#include <iostream>
#include <windows.h>
#include <locale>

using namespace std;

void Media(float *vet, float *vet2, float *vet3){
    int i;

    for(i = 0; i < 5; i++){
        vet = vet + i;
        vet2 = vet2 + i;
        vet3 = vet3 + i;

        *vet3 = (*vet + *vet2)/2;
    }
    
}

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);

    float vet[5], vet2[5], vet3[5];
    int i;

    cout << " VETOR 1: " << endl;
    for(i = 0; i < 5; i++){
        cout << " Vetor[" << i << "]: ";
        cin >> vet[i];
    }

    cout << "\n VETOR 2: " << endl;
    for(i = 0; i < 5; i++){
        cout << " Vetor[" << i << "]: ";
        cin >> vet2[i];
    }

    Media(vet, vet2, vet3);

    cout << "\n RESULTADO" << endl;

    for(i = 0; i < 5; i++){
        cout << " Média do vetor: " << vet3[i] << endl;
    }

}