#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;
using std::ofstream;
using std::ifstream;

struct aluno{
    int id;
    char nome[30];
};

void ApagarAluno(int id, aluno novo, alunoVazio = {1, ""}){
    novo.seekg((id-1) * sizeof(aluno));
    novo.read((char *) (&novo), sixzof(aluno);

    if(novo.id !=0 && novo.id<10){
        novo.seekp((id-1) * sizeof(aluno));
        novo.write((const char *) (&alunoVazio), sizeof(aluno));
        cout << "id: " << id << "apagado" << end;
    }
    cout << "Este id já foi deletado" << endl;
}

int main(){
    aluno alunoVazio = {1, ""};
    aluno novo;
    int opcao;

    ofstream OpenFile("alunos.dat", ios::binary);

    for(int t=0; i<10; i++){
    OpenFile.write((const char *) (&alunoVazio), sizeof(aluno));
    }

    ofstream InserirAluno("alunos.dat", ios::ate | ios::binary);
    
    while(novo.id>1 && novo.id<=10){
        cout << "Informe o nome do aluno: ";
        cin >> novo.aluno;
    }

    InserirAluno.seekp((novo.id - 1) * sizeof(aluno));
    //inserindo dados
    InserirAluno.write((const char *) (&novo), sizeof(aluno));

    ifstream LerAluno("alunos.dat", ios::binary);
    cout << "Informe o id desejado: ";
    cin >> novo.id;
    

    LerAluno.read((char *) (&novo.id), sizeof(aluno));
    if(novo.id !=0 && novo.id<10){
        cout << "id: "<< novo.id << " nome:  " << novo.nome << endl;
    }

    cout << endl << "Deseja apagar algum id?" << endl;
    cout << "1-Sim ou 2-Não" << endl;
    cin >> opcao;
    if(opcao == 1){
        cout << "Informe o id que deseja apagar: ";
        cin >> novo.id;
        ApagarAluno(novo.id, );
    }else{
        break;
    }
}