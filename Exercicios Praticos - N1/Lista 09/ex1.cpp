/*
1- Escreva uma função recursiva que determine quantas vezes um dígito K ocorre em um
número natural N. Por exemplo, o dígito 2 ocorre 3 vezes em 762021192
*/

#include<iostream>
using namespace std;

int funcaoRecursiva(int N, int K){
    if(N==0){
        return 0;
    }else{
        return funcaoRecursiva(N/10, K) + (N%10==K);
    }
}

int main(){
    int n, k;

    cout << "Digite um conjunto de numeros: " <<endl;
    cin >> n;

    cout << "Qual digito deseja saber a repetição?" << endl;
    cin >> k;

    cout << "O numero " << k << " se repete " << funcaoRecursiva(n,k) << " vezes." <<endl;

    return 0;
}