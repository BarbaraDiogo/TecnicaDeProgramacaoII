/*  BARBARA DIOGO
3) Entre com um nome e imprima o nome somente se a primeira letra do nome for ‘a’ maiúscula
ou minúscula).
*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    char nome[30];
    cout << "\nInforme um nome qualquer: ";
    gets(nome);

    if(nome[0]=='A'||nome[0]=='a')
    cout << nome;
    cout << "\n\n";

    system("pause");
    return(0);
}