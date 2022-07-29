/* Barbara Diogo
2- Escreva um programa que simule o
lançamento de moedas. Deixe o programa
jogar uma moeda cada vez que o usuário
escolher a opção de menu “Jogar moeda”.
Conte o número de vezes que cada lado da
moeda aparece. Exiba os resultados. O
programa deve chamar uma função flip
separado que não recebe argumentos e retorna
um valor booleano para cara ou coroa. [Nota:
Se o programa simular de forma realista o
lançamento de moedas, cada lado da moeda
deve aparecer aproximadamente na metade das
vezes.]
*/

#include<iostream>
#include<time.h>
using namespace std;

bool flip(){
    int m;

    srand(time(NULL));

    m = rand() % 2;

    if(m == 1){
        return true;
    }else{
        return false;
    }
}

int main(){
    int lado;
    int cara=0, coroa=0;

    while(lado != 0){
        cout << endl << "Cara OU Coroa" << endl;
        cout << "1 - jogar a moeda" << endl;
        cout << "0 - Sair" << endl;
        cin >> lado;

        flip();

        if(flip() == true){
            cara += 1;
        }else{
            coroa += 1;
        }

        cout << endl;
        cout << "Coroa: " << coroa << endl;
        cout << "Cara: " << cara << endl;
    }
    return 0;
}