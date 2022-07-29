/*
2 - Escreva uma função recursiva que converta um número da sua forma decimal para a
forma binária
*/

#include<iostream>
using namespace std;


int conversaoBin(int decimal){
    int x;
    if(decimal/2 != 0){
        x = decimal/2;
        conversaoBin(x);

        cout << decimal%2;
    }else{
        cout << decimal%2;
    }
}

int main(){
    int decimal;

    cout << "Informe um numero decimal: "<<endl;
    cin >> decimal;

    cout << "O numero " << decimal << " em binario é " << conversaoBin(decimal) <<endl;

    return 0;
}