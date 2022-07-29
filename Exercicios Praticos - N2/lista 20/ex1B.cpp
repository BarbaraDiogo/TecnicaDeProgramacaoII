//BARBARA DIOGO
//2063853

#include<iostream>
#include<fstream>
using namespace std;
using std::ifstream;
//b) exibir nome, numero e media dos aprovados

float media(double n1, double n2){
	float resultado = (n1 + n2)/2;
	return resultado;
}

int main(){

	ifstream LerArquivo("ALUNOS.DAT", ios::in);

    int l_numero;
    char l_nome[30];
    char l_curso[40];
    float l_nota1;
    float l_nota2;

    while(LerArquivo >> l_numero >> l_nome >> l_curso >> l_nota1 >> l_nota2){
        if(media(l_nota1, l_nota2) >= 7)
        cout << l_numero << ' ' << l_nome << ' ' << media(l_nota1, l_nota2) << endl;
        
    }

}