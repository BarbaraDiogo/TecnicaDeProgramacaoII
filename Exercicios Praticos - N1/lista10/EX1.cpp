/* BARBARA DIOGO
Escreva uma função recursiva que converta um número da sua forma decimal para a
forma binária.
*/
#include <iostream>
using namespace std;

void conversao(int decimal);

int main() {
    conversao(12);
    return 0;
}
void conversao(int decimal){
    if (decimal / 2 != 0) {
        conversao(decimal / 2);
    }
    cout << decimal % 2;
}