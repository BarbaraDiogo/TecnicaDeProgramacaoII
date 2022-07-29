#include<iostream>
#include<fstream>
#include<string>
#include<locale.h>
using std::ofstream;
using std::ifstream;
using namespace std;

struct Funcionarios{
    int cod_emp;
    string nome;
    int ano_admitido;
    int ano_demitido;
    float salario;
};

int main(){
    setlocale(LC_ALL, "Portuguese");
    //abrir arquivo
    ofstream OpenFile("funcionarios.dat", ios::binary);

    Funcionarios trab[5];

    trab[0].cod_emp = 12548;
    trab[0].nome = "Matias";
    trab[0].ano_admitido = 2011;
    trab[0].ano_demitido = 2015;
    trab[0].salario = 2500.04;
    trab[1].cod_emp = 12551;
    trab[1].nome = "Bruna";
    trab[1].ano_admitido = 2002;
    trab[1].ano_demitido = 2020;
    trab[1].salario = 12000.50;
    trab[2].cod_emp = 12563;
    trab[2].nome = "Pedro";
    trab[2].ano_admitido = 2012;
    trab[2].ano_demitido = 2022;
    trab[2].salario = 6300.00;
    trab[3].cod_emp = 12589;
    trab[3].nome = "Ana";
    trab[3].ano_admitido = 2020;
    trab[3].ano_demitido = 2021;
    trab[3].salario = 1500.00;
    trab[4].cod_emp = 12540.00;
    trab[4].nome = "Lucas";
    trab[4].ano_admitido = 2021;
    trab[4].ano_demitido = 2022;
    trab[4].salario = 2000.00;

    for(int i=0; i<5; i++){
        OpenFile.write((char *) &trab[i], sizeof(Funcionarios));
    }
    OpenFile.close();

    //ler arquivo 
    ifstream ReadFile("funcionarios.dat", ios::binary);

    for(int i=0; i<5; i++){
        ReadFile.read((char *) &trab[i], sizeof(Funcionarios));
    }
    ReadFile.close();

    cout << "Informações sobre os funcionarios" << endl;

    for(int i=0; i<5; i++){
        cout << "Código do empregado: " << trab[i].cod_emp << endl;
        cout << "Nome: " << trab[i].nome << endl;
        cout << "Ano em que foi admitido: " << trab[i].ano_admitido << endl;
        cout << "Ano em que foi demitido: " << trab[i].ano_demitido << endl;
        cout << "Salário: " << trab[i].salario << endl << endl;
    }

}