#include<iostream>
#include<fstream>
#include<string>
using namespace std;
using std::ofstream;

struct vendedor{
    int cod_vendedor;
    string nome_vendedor;
    float valor_venda;
    int mes;
};

struct vendedor2{
    int cod_vendedor2;
    string nome_vendedor2;
    float valor_venda2;
    int mes2;
};


int main(){
    int ok = 0, opcao;

    ofstream OpenArq("VENDAS.dat", ios::binary | ios::out);

    vendedor colaborador[5];

    colaborador[0].cod_vendedor = 147523;
    colaborador[0].nome_vendedor = "Julio";
    colaborador[0].valor_venda = 5251.23;
    colaborador[0].mes = 5;
    colaborador[1].cod_vendedor = 147555;
    colaborador[1].nome_vendedor = "Ana";
    colaborador[1].valor_venda = 1520.04;
    colaborador[1].mes = 11;
    colaborador[2].cod_vendedor = 147597;
    colaborador[2].nome_vendedor = "Flavio";
    colaborador[2].valor_venda = 8149.60;
    colaborador[2].mes = 4;
    colaborador[3].cod_vendedor = 147520;
    colaborador[3].nome_vendedor = "Janaina";
    colaborador[3].valor_venda = 3145.78;
    colaborador[3].mes = 6;
    colaborador[4].cod_vendedor = 147514;
    colaborador[4].nome_vendedor = "Conrado";
    colaborador[4].valor_venda = 1958.35;
    colaborador[4].mes = 7;

    //escrevendo no arquivo
    for(int i=0; i<5; i++){
        OpenArq.write((char *) &colaborador[i], sizeof(vendedor));
    }

    //ler o arquivo
    ifstream ReadArq("VENDAS.dat", ios::binary | ios::in);
    vendedor2 colaborador2[5];

    for(int i=0; i<5; i++){
    ReadArq.read((char *) &colaborador2[i], sizeof(vendedor2));
    }
    //Inserir um novo vendedor
    if(ok == 0){
        cout << endl << "Deseja inserir um novo vendedor?" << endl;
        cout << "1-Sim, 2-Nao" << endl;
        cin >> opcao;

            if(opcao == 1){
                ofstream NewVend("VENDAS.dat", ios::binary | ios::app);

                for(int i=0; i<1; i++){
                cout << endl << "Codigo do vendedor: " << endl;
                cin >> colaborador2[i].cod_vendedor2;
                cout << "Nome do vendedor: " << endl;
                cin >> colaborador2[i].nome_vendedor2;
                cout << "Valor das vendas: " << endl;
                cin >> colaborador2[i].valor_venda2;
                cout << "Mes que foram feitas as vendas: " << endl;
                cin >> colaborador2[i].mes2;

                NewVend << colaborador2[i].cod_vendedor2 << colaborador2[i].nome_vendedor2 << colaborador2[i].valor_venda2 << colaborador2[i].mes2 << endl;
                }
        }
    }
    OpenArq.close();
    ReadArq.close();

    //verificando repetição
    for(int i=0; i<5; i++){
        cout << endl << "Codigo do vendedor: " << colaborador[i].cod_vendedor << endl;
        cout << "Nome do vendedor: " << colaborador[i].nome_vendedor << endl;
        cout << "Valor das vendas: " << colaborador[i].valor_venda << endl;
        cout << "Mes que foram feitas as vendas: " << colaborador[i].mes << endl;
            while (ReadArq >> colaborador[i].cod_vendedor >> colaborador[i].nome_vendedor >> colaborador[i].valor_venda
            >> colaborador[i].mes){
                if(colaborador2[i].cod_vendedor2 == colaborador[i].cod_vendedor && colaborador2[i].mes2 == colaborador[i].mes){
                    ok = 1;
                }
            }
    }

    return 0;
    
}