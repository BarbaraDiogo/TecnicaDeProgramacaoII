//BARBARA DIOGO
//2063853

#include<iostream>
#include<fstream>
using namespace std;
using std::ifstream;
//a) consultar numero, nome e a media. Exibir nome e media


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
        
        cout << l_nome << ' ' << media(l_nota1, l_nota2) << endl;
    }


}