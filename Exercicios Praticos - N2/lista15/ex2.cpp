//BARBARA DIOGO
#include <iostream>
using namespace std;

typedef struct {
    int integer;
    void *next;
} No;

void imprimirInfos (No *p, No *primeiro) {
    while (true) {
        cout << "=========" << endl;
        cout << "Endereco: " << p << endl;
        cout << "Valor: " << p->integer << endl;
        cout << "Endereco armazenado para o proximo: " << p->next << endl;
        cout << "=========" << endl;
        p = (No*)p->next;
        if (p == primeiro) {
            break;
        }
    }
}

int main () {
    No no1;
    No no2;
    No no3;

    no1.integer = 1;
    no2.integer = 2;
    no3.integer = 3;

    No *p;

    p = &no1;
    no1.next = &no2;
    no2.next = &no3;
    no3.next = &no1;
    
    cout << "Impressao original da estrutura : " << endl;
    imprimirInfos(p, &no1);

    No no4;
    no3.next = &no4;
    no4.integer = 4;
    no4.next = &no1;

    cout << "Impressao da estrutura apos acrescido quarto elemento: " << endl;
    imprimirInfos(p, &no1);

    p = &no2;
    no4.next = &no2;

    cout << "Impressao da estrutura apos removido primeiro elemento: " << endl;
    imprimirInfos(p, &no2);


    return 0;
}