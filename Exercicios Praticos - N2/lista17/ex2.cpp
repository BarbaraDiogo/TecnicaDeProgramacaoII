//Barbara Diogo 2063853
//Ex.2
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
using std::ifstream;

void Alunos(int numero, const string nome, const string email){
   cout << numero << ' ' << nome << ' ' << email << endl; 
}

int main(){
    //abrir o arquivo existente
    ifstream LerArquivo("Alunos_CC", ios::in);
    
    int numero;
    char nome[30];
    char email[50];
    
    cout << "N° de matricula " << " Nome " << " E-mail  " << endl;
    
    while(LerArquivo >> numero >> nome >> email){
        Alunos(numero, nome, email);
    }
}