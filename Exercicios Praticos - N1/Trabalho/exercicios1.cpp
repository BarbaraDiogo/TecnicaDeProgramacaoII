/*
Nome: Barbara Diogo;
Matrícula: 2063853;
Nome: Felipe de Araujo Teixeira;
Matrícula: 2046950
*/

#include<iostream>
#include<cmath>
#include <locale>
#include <windows.h>
using namespace std;

double fatorial(int n){
    double fat = 1; 
    for(int i=1; i<=n; i++){
        fat = fat * i;
    }
    return fat;
}

//Seno para 3 termos
double Seno1(double rad, int n=3){
    double somaS = 0;
    for(int i=0; i<n; i++){
        somaS += pow(-1,i) * (pow(rad, 2*i+1)/fatorial(2*i+1));
    }
    return somaS;
}

//Seno para 40 termos 
double Seno2(double rad, int n=40){
    double somaS = 0;
    for(int i=0; i<n; i++){
        somaS += pow(-1,i) * (pow(rad, 2*i+1)/(double) fatorial(2*i+1));
    }
    return somaS;
}

//Cosseno para 3 termos
double Cosseno1(double rad, int n=3){
    double somaC = 0;
    for(int i=0; i<n; i++){
        somaC += pow(-1,i) * (pow(rad, 2*i)/(double) fatorial(2*i));
    }
    return somaC;
}

//Cosseno para 40 termos
double Cosseno2(double rad, int n=40){
    double somaC = 0;
    for(int i=0; i<n; i++){
        somaC += pow(-1,i) * (pow(rad, 2*i)/(double) fatorial(2*i));
    }
    return somaC;
}

int main(){

    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);

    int op;
    double x;
    double valorabsoluto, valorabsoluto2, valorabsoluto3, valorabsoluto4, erroSeno1, erroCos1;
    double erroSeno2, erroCos2;
    double conversao; // graus p radiano.
    double pi = M_PI; //biblioteca define várias constantes matemáticas.

    cout << "************"<< endl;
    cout << "    Calculadora Seno e Cosseno      "<< endl;
    cout << "************"<< endl;
    cout << "Digite o valor do angulo(em graus): ";
    cin >> x;
    cout << endl << "Deseja que o calculo seja feito para: "<< endl;
    cout << "1: 3 termos" << endl;
    cout << "2: 40 termos"<< endl;
    cout << "Opção 1 ou 2: ";
    cin >> op;
    cout << endl;

    conversao = ((x*pi)/180);

    //valor absoluto
    valorabsoluto = Seno1(conversao) - sin(conversao);
    valorabsoluto2 = Cosseno1(conversao) - cos(conversao);
    valorabsoluto3 = Seno2(conversao) - sin(conversao);
    valorabsoluto4 = cos(conversao) - Cosseno2(conversao);
    
    //erro percentual = [valor experimental - valor teórico] / valor teórico x 100%
    erroSeno1 = (Seno1(conversao) - sin(conversao)) / (sin(conversao)*100);
    erroCos1 =  (Cosseno1(conversao) - cos(conversao)) / (cos(conversao)*100);
    
    erroSeno2 = (Seno2(conversao) - sin(conversao)) / (sin(conversao)*100);
    erroCos2= (cos(conversao) - Cosseno2(conversao)) / (Cosseno2(conversao)*100);

    if(op == 1){
        cout << "A conversao é:" <<conversao << endl;
        cout << "Seno " << x << "° = " << sin(conversao) << "             (COM a função sin())" << endl; 
        cout << "Seno " << x << "° = " << Seno1(conversao)  << "       (SEM a função sin())" << endl;
        cout << "Valor Absoluto: " << valorabsoluto << endl;
        cout << "Com erro percentual de " << erroSeno1 << "%" << endl << endl;
        cout << "Cosseno " << x << "° = " << cos(conversao) << "       (COM a função cos())" << endl;
        cout << "Cosseno " << x << "° = " << Cosseno1(conversao) << "          (SEM a função cos())" << endl;
        cout << "Valor Absoluto: " << valorabsoluto2 << endl;
        cout << "Com erro percentual de " << erroCos1 << "%" << endl;
    }else if(op == 2){
        cout << "Seno " << x << "° = " << sin(conversao) << "       (COM a função sin())" << endl; 
        cout << "Seno " << x << "° = " << Seno2(conversao)  << "       (SEM a função sin())" << endl; 
        cout << "Valor Absoluto: " << valorabsoluto3 << endl;
        cout << "Com erro percentual de " << erroSeno2 << "%" << endl << endl;
        cout << "Cosseno " << x << "° = " << cos(conversao) << "     (COM a função cos())" << endl;
        cout << "Cosseno " << x << "° = " << Cosseno2(conversao) << "     (SEM a função cos())" << endl;
        cout << "Valor Absoluto: " << valorabsoluto4 << endl;
        cout << "Com erro percentual de " << erroCos2 << "%" << endl << endl;
    }else{
        cout << "Opção inválida";
    }
}