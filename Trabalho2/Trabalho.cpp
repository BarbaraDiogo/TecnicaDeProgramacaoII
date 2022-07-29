/*
Nome: Barbara Diogo;
Matrícula: 2063853;
Nome: Felipe de Araujo Teixeira;
Matrícula: 2046950
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#define LIMIT 1001
#define ANOS 78
#define RATING 13
using std::ofstream;
using std::ifstream;
using std::getline;
using namespace std;

struct Netflix{

    string title;
    string rating;
    string ratingLevel;
    string ratingDescription;
    int releaseyear;
    int userratingscore;
    int userratingsize;
    

};

typedef Netflix netflix;

int main(){

    int i,j;
    ifstream dados("netflix_all.csv", ios::in);
    string convert;

    netflix filmes[LIMIT];
    netflix filmessemrepeticao[LIMIT];
    string nomes[LIMIT];
    bool semrepet;

    //Exercicio1- Leitura dos dados do arquivo
    for(i=0; i<LIMIT;i++){

        getline(dados, filmes[i].title, ';');
        getline(dados, filmes[i].rating, ';');
        getline(dados, filmes[i].ratingLevel, ';');
        getline(dados, filmes[i].ratingDescription, ';');
        getline(dados, convert, ';');
        stringstream conv;
        conv << convert;
        conv >> filmes[i].releaseyear;
        getline(dados, convert, ';');
        stringstream conv2;
        conv2 << convert;
        conv2 >> filmes[i].userratingscore;
        getline(dados, convert, ';');
        stringstream conv3;
        conv3 << convert;
        conv3 >> filmes[i].userratingsize;


    
    }
    //separacao dos dados do arquivos retirando as repeticoes
    int x=0;
    for(i=0; i<LIMIT;i++){

        semrepet = find(begin(nomes), end(nomes), filmes[i].title) != end(nomes);

        if(semrepet){
            continue;
        }
        else{

            nomes[x] = filmes[i].title;
            filmessemrepeticao[x].title = filmes[i].title;
            filmessemrepeticao[x].rating = filmes[i].rating;
            filmessemrepeticao[x].ratingLevel = filmes[i].ratingLevel;
            filmessemrepeticao[x].ratingDescription = filmes[i].ratingDescription;
            filmessemrepeticao[x].releaseyear = filmes[i].releaseyear;
            filmessemrepeticao[x].userratingscore = filmes[i].userratingscore;
            filmessemrepeticao[x].userratingsize = filmes[i].userratingsize;
            x++;
        }
    }
    
    
    //Quantidade de filmes lançados por rating em cada ano
    string rating[13] = {"G","NR","PG","PG-13","R","TV-14","TV-G","TV-MA","TV-PG","TV-Y","TV-Y7","TV-Y7-FV","UR"};
    cout << "                                                        *************" << endl;
    cout << "                                                        *EXERCICIO 2*" << endl;
    cout << "                                                        *************" << endl;
    int ano=1940;
    int vet[ANOS], anos[ANOS][14];

    for (i = 0; i < ANOS; i++)
    {
        if (ano < 2018)
        {
            vet[i] = ano;
            ano++;
        }
    }

    for (i = 0; i < ANOS; i++)
    {
        anos[i][0] = vet[i];
    }
   
    int contadorG;
    int contadorNR;

    for(i=0;i<14;i++){
        for(j=0;j<ANOS;j++){
            contadorG=0;
            contadorNR=0;
            for(int p=0;p<LIMIT;p++){                
                if(filmessemrepeticao[p].releaseyear == vet[j]){
                if(filmessemrepeticao[p].rating == "G"){                   
                    contadorG++;
                    anos[j][1] = contadorG;    
                }
                if(filmessemrepeticao[p].rating == "NR"){
                    contadorNR++;
                    anos[j][2]=contadorNR;
                }          
         }         
        }
    }
    }
    int contadorPG;
    int contadorPG13;
    for(i=0;i<14;i++){
        for(j=0;j<ANOS;j++){
            contadorPG=0;
            contadorPG13=0;
            for(int p=0;p<LIMIT;p++){                
                if(filmessemrepeticao[p].releaseyear == vet[j]){
                if(filmessemrepeticao[p].rating == "PG"){                   
                    contadorPG++;
                    anos[j][3] = contadorPG;    
                }
                if(filmessemrepeticao[p].rating == "PG-13"){
                    contadorPG13++;
                    anos[j][4]=contadorPG13;
                }          
         }
        }
    }
    }
    int contadorR;
    int contadorTV14;
    for(i=0;i<14;i++){
        for(j=0;j<ANOS;j++){
            contadorR=0;
            contadorTV14=0;
            for(int p=0;p<LIMIT;p++){                
                if(filmessemrepeticao[p].releaseyear == vet[j]){
                if(filmessemrepeticao[p].rating == "R"){                   
                    contadorR++;
                    anos[j][5] = contadorR;    
                }
                if(filmessemrepeticao[p].rating == "TV-14"){
                    contadorTV14++;
                    anos[j][6]=contadorTV14;
                }          
         }
        }
    }
    }
    int contadorTVG;
    int contadorTVMA;
    for(i=0;i<14;i++){
        for(j=0;j<ANOS;j++){
            contadorTVG=0;
            contadorTVMA=0;
            for(int p=0;p<LIMIT;p++){                
                if(filmessemrepeticao[p].releaseyear == vet[j]){
                if(filmessemrepeticao[p].rating == "TV-G"){                   
                    contadorTVG++;
                    anos[j][7] = contadorTVG;    
                }
                if(filmessemrepeticao[p].rating == "TV-MA"){
                    contadorTVMA++;
                    anos[j][8]=contadorTVMA;
                }          
         }
        }
    }
    }
    int contadorTVPG;
    int contadorTVY;
    for(i=0;i<14;i++){
        for(j=0;j<ANOS;j++){
            contadorTVPG=0;
            contadorTVY=0;
            for(int p=0;p<LIMIT;p++){                
                if(filmessemrepeticao[p].releaseyear == vet[j]){
                if(filmessemrepeticao[p].rating == "TV-PG"){                   
                    contadorTVPG++;
                    anos[j][9] = contadorTVPG;    
                }
                if(filmessemrepeticao[p].rating == "TV-Y"){
                    contadorTVY++;
                    anos[j][10]=contadorTVY;
                }          
         }
        }
    }
    }
    int contadorTVY7;
    int contadorTVY7FV;
    for(i=0;i<14;i++){
        for(j=0;j<ANOS;j++){
            contadorTVY7=0;
            contadorTVY7FV=0;
            for(int p=0;p<LIMIT;p++){                
                if(filmessemrepeticao[p].releaseyear == vet[j]){
                if(filmessemrepeticao[p].rating == "TV-Y7"){                   
                    contadorTVY7++;
                    anos[j][11] = contadorTVY7;    
                }
                if(filmessemrepeticao[p].rating == "TV-Y7-FV"){
                    contadorTVY7FV++;
                    anos[j][12]=contadorTVY7FV;
                }          
         }
        }
    }
    }
    int contadorUR;
    for(i=0;i<14;i++){
        for(j=0;j<ANOS;j++){
            contadorUR=0;
            for(int p=0;p<LIMIT;p++){                
                if(filmessemrepeticao[p].releaseyear == vet[j]){
                if(filmessemrepeticao[p].rating == "UR"){                   
                    contadorUR++;
                    anos[j][13] = contadorUR;    
                }        
         }
        }
    }
    }
cout << "_________________________________________________________________________________________________________________________"<< endl;   
cout <<"| ANO"<<"\t"<<"G"<<"\t"<<"NR"<<"\t"<<"PG "<<"\t"<<"PG-13 "<<"\t"<<"R " <<"\t"<<"TV-14 "<<"\t"<<"TV-G "<<"\t"<<"TV-MA "<<"\t"<<"TV-PG " <<"\t"<<"TV-Y "<<"\t"<<"TV-Y7"<<"\t"<<"TV-Y7-FV"<<"\t" <<"UR "<< endl;

for(i=0;i<ANOS;i++){
    cout << "|_______________________________________________________________________________________________________________________|"<< endl;
    cout <<"| " << anos[i][0] << "\t" << anos[i][1] << "\t" << anos[i][2] << "\t" << anos[i][3] << "\t" << anos[i][4] << "\t" << anos[i][5] << "\t" << anos[i][6] << "\t" << anos[i][7] << "\t" << anos[i][8] << "\t" << anos[i][9] << "\t" << anos[i][10] << "\t" << anos[i][11] << "\t" << anos[i][12] << "\t \t" << anos[i][13]  << endl;
    
}
//Quantidade de filmes lancados em cada ano
cout << endl << endl;
cout << "    *************" << endl;
cout << "    *EXERCICIO 3*" << endl;
cout << "    *************" << endl;
int ano2=1940,cont;
cout << endl;
cout << " ____________________"<< endl;
cout <<" |ANO     " << setw(3) << "Quantidade|" << endl;
cout << " ____________________"<< endl;
for(ano2=1940;ano2<2018;ano2++){
    cont=0;
    for(i=0;i<LIMIT;i++){
        if(filmessemrepeticao[i].releaseyear == ano2){
            cont++;
        }
    }
    if(cont != 0){
    cout << " |"<<ano2 << setw(5) <<"         "<<cont<<"    |"<< endl; 
    cout << " ____________________"<< endl;
    }
}
//Arquivo de texto criado com o ranking de 10 melhores avalicaoes em cada ano
cout << endl;
cout << "        *************" << endl;
cout << "        *EXERCICIO 4*" << endl;
cout << "        *************" << endl;

ofstream top10filmes("top_10.txt",ios::out);

int top[ANOS][10] = {0};
int p,l,c, aux;
string aux2;
string topfilmes[ANOS][10];

for(int i=0;i<LIMIT;i++){
    for(int j=0;j<ANOS;j++){
        if(filmessemrepeticao[i].releaseyear == vet[j]){
            for(p=0;p<10;p++){
                if(top[j][p]<filmessemrepeticao[i].userratingscore){
                    top[j][p] = filmessemrepeticao[i].userratingscore;
                    topfilmes[j][p] = filmessemrepeticao[i].title;
                    for(l=0;l<10;l++){
                        for(c=0;c<10;c++){
                            if(top[j][l]<top[j][c]){
                                aux = top[j][l];
                                aux2 = topfilmes[j][l];
                                top[j][l] = top[j][c];
                                topfilmes[j][l] = topfilmes[j][c];
                                top[j][c] = aux;
                                topfilmes[j][c] = aux2;
                            }
                        }
                    }
                    break;
                }
            }
        }
    }
}

for(int i=0;i<ANOS;i++){

    
    top10filmes << vet[i]<< " " <<endl;
    for(int j=0;j<10;j++){
        top10filmes <<"    "<< topfilmes[i][j]<< "   " << top[i][j]<<endl;
    }
}
cout << " ARQUIVO CRIADO,CONFIRA NA PASTA " << endl;

//Porcentagemd da quantidade de filmes com classificacao de violencia e conteudo sexual
cout << endl;
cout << "        *************" << endl;
cout << "        *EXERCICIO 5*" << endl;
cout << "        *************" << endl;
int cont1=0,sexualc=0;

for(i=0;i<LIMIT;i++){

    size_t teste=filmessemrepeticao[i].ratingLevel.find("violence");
    size_t sexualcontent=filmessemrepeticao[i].ratingLevel.find("sexual content");

    if(teste != string::npos){
        cont1++;
        
    }
    if(sexualcontent != string::npos){
        sexualc++;
    }

}
float porcentV,porcentS;

porcentV = ((float) cont1*100)/497;
porcentS = ((float) sexualc*100)/497;

cout << "A porcentagem de filmes violentos foi de: " << porcentV  << endl;
cout << "A porcentagem de filmes com conteudo sexual foi de: " << porcentS << endl;

//Busca de filme escolhida pelo usuario
cout << "        *************" << endl;
cout << "        *EXERCICIO 6*" << endl;
cout << "        *************" << endl;

string filme;

cout << "Procure pelo filme que deseja encontrar"<<endl;
cout << "Digite o nome do filme: " << endl;
getline(cin,filme);
cout << "Filmes com esse nome: " << endl << endl;
for(i=0;i<LIMIT;i++){
    size_t encontrar= filmessemrepeticao[i].title.find(filme);

    if(encontrar != string::npos){

        cout << filmessemrepeticao[i].title << " " << filmessemrepeticao[i].rating << " " << filmessemrepeticao[i].ratingDescription << endl;
    }
    
}

}
 
