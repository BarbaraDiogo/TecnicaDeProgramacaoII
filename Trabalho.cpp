#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <sstream>
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
    string rating[13] = {"G","NR","PG","PG-13","R","TV-14","TV-G","TV-MA","TV-PG","TV-Y","TV-Y7","TV-Y7-FV","UR"};
    cout << "EXERCICIO 2: " << endl;
    int ano=1940;
    int vet[ANOS], anos[ANOS][14];

    for(i=0;i<ANOS;i++){
        if(ano<2018){
            vet[i]=ano;
            ano++;
        }
    }
    
    for(i=0;i<ANOS;i++){
        anos[i][0] = vet[i];
    }
    int contadorG;

    for(i=0;i<14;i++){
        for(j=0;j<ANOS;j++){
            contadorG=0;
            for(int p=0;p<LIMIT;p++){                
                if(filmes[p].releaseyear == j+1940){
                if(filmes[p].rating == "G"){                   
                    contadorG++;
                    anos[j][1] = contadorG;    
                }
                if(filmes[p].rating == "NR"){
                    contadorG++;
                    anos[j][2]=contadorG;
                }          
         }         
        }
    }
    }
    int contador2;
    for(i=0;i<14;i++){
        for(j=0;j<ANOS;j++){
            contador2=0;
            for(int p=0;p<LIMIT;p++){                
                if(filmes[p].releaseyear == j+1940){
                if(filmes[p].rating == "PG"){                   
                    contador2++;
                    anos[j][3] = contador2;    
                }
                if(filmes[p].rating == "PG-13"){
                    contadorG++;
                    anos[j][4]=contador2;
                }          
         }
        }
    }
    }
    int contador3;
    for(i=0;i<14;i++){
        for(j=0;j<ANOS;j++){
            contador3=0;
            for(int p=0;p<LIMIT;p++){                
                if(filmes[p].releaseyear == j+1940){
                if(filmes[p].rating == "R"){                   
                    contador3++;
                    anos[j][5] = contador3;    
                }
                if(filmes[p].rating == "TV-14"){
                    contador3++;
                    anos[j][6]=contador3;
                }          
         }
        }
    }
    }
    int contador4;
    for(i=0;i<14;i++){
        for(j=0;j<ANOS;j++){
            contador4=0;
            for(int p=0;p<LIMIT;p++){                
                if(filmes[p].releaseyear == j+1940){
                if(filmes[p].rating == "TV-G"){                   
                    contador4++;
                    anos[j][7] = contador4;    
                }
                if(filmes[p].rating == "TV-MA"){
                    contador4++;
                    anos[j][8]=contador4;
                }          
         }
        }
    }
    }
    int contador5;
    for(i=0;i<14;i++){
        for(j=0;j<ANOS;j++){
            contador5=0;
            for(int p=0;p<LIMIT;p++){                
                if(filmes[p].releaseyear == j+1940){
                if(filmes[p].rating == "TV-PG"){                   
                    contador5++;
                    anos[j][9] = contador5;    
                }
                if(filmes[p].rating == "TV-Y"){
                    contador5++;
                    anos[j][10]=contador5;
                }          
         }
        }
    }
    }
    int contador6;
    for(i=0;i<14;i++){
        for(j=0;j<ANOS;j++){
            contador6=0;
            for(int p=0;p<LIMIT;p++){                
                if(filmes[p].releaseyear == j+1940){
                if(filmes[p].rating == "TV-Y7"){                   
                    contador6++;
                    anos[j][11] = contador6;    
                }
                if(filmes[p].rating == "TV-Y7-FV"){
                    contador6++;
                    anos[j][12]=contador6;
                }          
         }
        }
    }
    }
    int contador7;
    for(i=0;i<14;i++){
        for(j=0;j<ANOS;j++){
            contador7=0;
            for(int p=0;p<LIMIT;p++){                
                if(filmes[p].releaseyear == j+1940){
                if(filmes[p].rating == "UR"){                   
                    contador7++;
                    anos[j][13] = contador7;    
                }        
         }
        }
    }
    }
    
cout <<" ANO"<<"\t"<<"G"<<"\t"<<"NR"<<"\t"<<"PG "<<"\t"<<"PG-13 "<<"\t"<<"R " <<"\t"<<"TV-14 "<<"\t"<<"TV-G "<<"\t"<<"TV-MA "<<"\t"<<"TV-PG " <<"\t"<<"TV-Y "<<"\t"<<"TV-Y7"<<"\t"<<"TV-Y7-FV"<<"\t" <<"UR"<< endl;

for(i=0;i<ANOS;i++){
    cout << anos[i][0] << "\t" << anos[i][1] << "\t" << anos[i][2] << "\t" << anos[i][3] << "\t" << anos[i][4] << "\t" << anos[i][5] << "\t" << anos[i][6] << "\t" << anos[i][7] << "\t" << anos[i][8] << "\t" << anos[i][9] << "\t" << anos[i][10] << "\t" << anos[i][11] << "\t" << anos[i][12] << "\t \t" << anos[i][13] << endl;

}
cout << endl;
cout << "EXERCICIO 3: ";
int ano2=1940,cont;
cout << endl;
cout << " ____________________"<< endl;
cout <<" |ANO     " << setw(3) << "Quantidade|" << endl;
cout << " ____________________"<< endl;
for(ano2=1940;ano2<2018;ano2++){
    cont=0;
    for(i=0;i<LIMIT;i++){
        if(filmes[i].releaseyear == ano2){
            cont++;
        }
    }
    cout << " |"<<ano2 << setw(5) <<"         "<<cont<<"    |"<< endl; 
    cout << " ____________________"<< endl;
}
cout << endl;
cout << "EXERCICIO 4: " << endl;




cout << "EXERCICIO 5: " << endl;
int cont1,sexualc;
int porcentV,porcentS;
for(i=0;i<LIMIT;i++){

    size_t teste=filmes[i].ratingLevel.find("violence");
    size_t sexualcontent=filmes[i].ratingLevel.find("sexual content");

    if(teste != string::npos){
        cont1++;
        
    }
    if(sexualcontent != string::npos){
        sexualc++;
    }
porcentV = (cont1*100)/1000;
porcentS = (sexualc*100)/1000;
    
}

cout << cont1 << endl;
cout << sexualc << endl;
cout << "A porcentagem de filmes violentos foi de: " << porcentV << endl;
cout << "A porcentagem de filmes com conteudo sexual foi de: " << porcentS << endl;

cout << "EXERCICIO 6: " << endl;

string filme;

cout << "Procure pelo filme que deseja encontrar"<<endl;
cout << "Digite o nome do filme: " << endl;
getline(cin,filme);
cout << "Filmes com esse nome: " << endl << endl;
for(i=0;i<LIMIT;i++){
    size_t encontrar= filmes[i].title.find(filme);

    if(encontrar != string::npos){

        cout << filmes[i].title << " " << filmes[i].rating << " " << filmes[i].ratingDescription << endl;
    }
    
}



}
 
