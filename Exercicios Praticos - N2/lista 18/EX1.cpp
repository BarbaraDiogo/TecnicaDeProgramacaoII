//BARBARA DIOGO 2063853
//EX1
#include<iostream>
#include<fstream>
using std::ofstream;
using std::ios;
using namespace std;

int main(){
	ofstream matricula("ALUNOS.DAT", ios::out);

	cout << "Informe seu numero de matricula, nome, curso, nota 1 e nota 2: " << endl;

	int numero;
	char nome[30];
	char curso[40];
	float nota1;
	float nota2;

	while(cin >> numero >> nome >> curso >> nota1 >>nota2){
		//armazenei registros dentro do arquivo
		matricula << numero << ' ' << nome << ' ' << curso << ' ' << nota1 << ' ' << nota2 << endl;
	}

	return 0;
}