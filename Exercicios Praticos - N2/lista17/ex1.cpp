//Barbara Diogo 2063853
//Ex.1

#include<iostream>
#include<fstream>
using std::ofstream;
using namespace std;

int main(){
    //criar um novo arquivo
    ofstream Matricula("Alunos_CC", ios::out);
    
    cout << "Aluno, informe seu numero de matrícula, nome e email:" << endl;
    
    int numero;
    char nome[30];
    char email[50];
    
    while(cin >> numero >> nome >> email){
        Matricula << numero << ' ' << nome << ' ' << email << endl;
    }
}