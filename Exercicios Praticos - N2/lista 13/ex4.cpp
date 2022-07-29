/*BARBARA DIOGO
4. Escrever uma função que multiplique um vetor por um fator k
*/
/*BARBARA DIOGO
4. Escrever uma função que multiplique um vetor por um fator k
*/
#include<iostream>
using namespace std;

void mult(int *v, int k, int tam){
    for(int i=0; i<tam; i++){
        v[i] = v[i]*k;
    }
}

int main(){
    int v[6] = {11, 3, 6, 5, 4, 7}, k, tam;

    cout << "Qual k deseja multiplicar?";
    cin >> k;

    mult(v, k, tam);

    for(int i = 0; i < tam; i++){
        cout << v[i] << " ";
    }

    return 0;
}