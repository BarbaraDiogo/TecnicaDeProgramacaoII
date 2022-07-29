/*BARBARA DIOGO
2- Escreva um programa em C++ que calcule o fatorial de um determinado número, usando
ponteiros.
*/

#include<iostream>
using namespace std;

int fatorial(int n){
    int fat = 1;
    while(n>1){
        fat = fat * n--;
    }

    return fat;
}

int main(){
    int valor;

    cout << "Informe um numero que deseja saber o fatorial: ";
    cin >> valor;
    
    cout << endl << valor << "! = " << fatorial(valor);

    return 0;
}