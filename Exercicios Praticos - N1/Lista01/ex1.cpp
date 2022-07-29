/* Barbara Diogo
1- Escreva instruções que atribuam 5 números
inteiros aleatórios à variável n nos seguintes
intervalos:
a)1 ≤ n ≤ 2
b)1 ≤ n ≤ 100
c)0 ≤ n ≤ 9
d)1000 ≤ n ≤ 1112
e)−1 ≤ n ≤ 1
f) −3 ≤ n ≤ 11
*/
#include<iostream>
#include<time.h>
using namespace std;

int main(){
    int num, z;
    srand(time(NULL));

    cout << "5 numeros inteiros aleatorios de 1 ≤ n ≤ 2: ";
    for(z=0; z<5; z++){
        num = rand() % 2 + 1;
        cout << num << endl;
    }
    
    cout << "5 numeros inteiros aleatorios de 1 ≤ n ≤ 100: ";
    for(z=0; z<5; z++){
        num = rand() % 100 + 1;
        cout << num << endl;
    }

    cout << "5 numeros inteiros aleatorios de 0 ≤ n ≤ 9: ";
    for(z=0; z<5; z++){
        num = rand() % 9;
        cout << num << endl;
    }

    cout << "5 numeros inteiros aleatorios de 1000 ≤ n ≤ 1112: ";
    for(z=0; z<5; z++){
        num = rand() % 1000 + 112;
        cout << num << endl;
    }

    cout << "5 numeros inteiros aleatorios de −1 ≤ n ≤ 1: ";
    for(z=0; z<5; z++){
        num = rand() % 3 - 1;
        cout << num << endl;
    }

    cout << "5 numeros inteiros aleatorios de −3 ≤ n ≤ 11: ";
    for(z=0; z<5; z++){
        num = rand() % 15 - 3;
        cout << num << endl;
    }

    return 0;
}