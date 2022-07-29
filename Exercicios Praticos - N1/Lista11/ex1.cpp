/* BARBARA DIOGO
1 - Escreva um programa em C++ que troque os valores das variáveis usando uma chamada
de função por referência.
Exemplo:
Antes da troca
A = 5;
B = 7;
C = 9;
Após a troca:
A = 9
B = 5
C = 7
*/
#include<iostream>
using namespace std;

void troca(int *A, int *B, int *C);

int main(){
    int a, b, c; 

    a=5;
    b=7;
    c=9;
    
    cout << "A ordem original dos valores: a = "<< a << ", b = " << b << " e c = "<< c << endl;

    troca(&a, &b, &c);

    cout << "Valores apos a troca: " << a << ", " << b <<  ", " << c << endl;

    return 0;
}

void troca(int *A, int *B, int *C){
    int aux, aux2;

    aux = *A;
    *A = *C; 
    *C = aux;
    aux2 = *C;
    *C = *B;
    *B = aux2;

    return;
}