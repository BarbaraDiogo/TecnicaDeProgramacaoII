// BARBARA DIOGO 2063853
// EX2
#include<iostream>
#include<fstream>
using namespace std;
using std::ofstream;
using std::ifstream;

int main(){

    ifstream LerArquivo("ALUNOS.DAT", ios::in);

    int l_numero, igual = 0;
    char l_nome[30];
    char l_curso[40];
    float l_nota1;
    float l_nota2;

    //cout << "Informe os registros que deseja inserir no arquivo: "<< endl;

    int numero;
    char nome[30];
    char curso[40];
    float nota1;
    float nota2;
    //cin >> numero >> nome >> curso >> nota1 >> nota2;

    while(LerArquivo >> l_numero >> l_nome >> l_curso >> l_nota1 >> l_nota2){
        if(l_numero == numero){
            igual = 1;
        }
    }
    
    LerArquivo.close();


//significa que a condição foi satisfeita
    if(igual == 0){
        //adicionando registros novos sem alterar os existentes
        // ios::app adiociona na ultima linha o novo registro
        ofstream NovoAluno("ALUNOS.DAT", ios::app);
        NovoAluno << numero << ' ' << nome << ' ' << curso << ' ' << nota1 << ' ' << nota2 << endl;
        NovoAluno.close();
    }
    return 0;
}