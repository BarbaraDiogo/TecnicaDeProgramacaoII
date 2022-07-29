/*
Nome: Barbara Diogo;
Matrícula: 2063853;
Nome: Felipe de Araujo Teixeira;
Matrícula: 2046950

2- Elabore um programa que verifique se uma matriz 4x4, com números
informados pelo usuário ou gerados randomicamente (faça um menu
que suporte tal situação), forma o chamado quadrado mágico. Um
quadrado mágico é formado quando a soma dos elementos de cada
linha é igual à soma dos elementos de cada coluna dessa linha, é igual à
soma dos elementos da diagonal principal e, também, é igual à soma dos
elementos da diagonal secundária. Após a verificação, o resultado e a
matriz deverão ser impressos no console.
*/
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <locale>
#include <windows.h>
using namespace std;

//função na qual o usuário irá escolher se deseja inserir os números da matriz ou a matriz será sorteada aleatoriamente.
void escolha(int opcao, int matriz[4][4]){
    int n = 4;
    
        
    cout << "Digite a opção escolhida:" << endl;
    cout << "1- Matriz pronta" << endl;
    cout << "2- Digitar a matriz 4x4" << endl;
    cin >> opcao;

    if(opcao == 1){
        int i, j;
        
        
        srand(time(NULL));

        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                matriz[i][j] = rand() %100;
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout << "|" << matriz[i][j] << "|";
            }
            cout << endl;
        }
    }else{
        
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout << "Digite os numeros da matriz: ";
                cin >> matriz[i][j];
                
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                
                cout << "|" << matriz[i][j] << "|";
                
            }
            cout << endl;
        }
    
    }
}

//função para o calculo da soma dos elementos das linhas da matriz.
int somaLinha(int matriz[4][4], int v[4]){
    int n = 4;
    int i, j;
    

    for(i=0; i<n; i++){
        v[i] = 0;
        for(j=0; j<n; j++){
            v[i] += matriz[i][j];
        }
    }

    for(i=0; i<n; i++){
        cout << "Soma da linha " << i << " : " << v[i] << endl;
    }
    
    return v[i];
}

//função para o calculo da soma dos elementos das colunas da matriz.
int somacoluna(int matriz[4][4], int v[4]){
    int n = 4;
    int i, j;
    

    for(j=0; j<n; j++){
        v[j] = 0;
        for(i=0; i<n; i++){
            v[j] += matriz[i][j];
        }
    }
    for(j=0; j<n; j++){
        cout << "Soma da coluna " << j << " : " << v[j] << endl;
    }
    return v[j];
}

//função para calculo da soma dos elementos da diagonal principal da matriz.
int somaDiagPrincipal(int x, int matriz[4][4]){
    int n = 4;
    int i, soma=0;

    for(i=0; i<n; i++){
        soma = soma + matriz[i][i];
    }
    return soma;
}

//função para calculo da soma dos elementos das diagonal secundária da matriz.
int somaDiagSecundaria(int x,int matriz[4][4]){
    int n = 4;
    int i, soma=0;
    for(i=0; i<n; i++){
        soma = soma + matriz[i][n-i-1];
        
    }
    return soma;
}

//função na qual verifica se a soma das linhas, colunas e diagonais apresentam o mesmo resultado;
int quadradomagico(int x, int v[4]){
    int n = 4;
    int i;
    for(i=1; i<n; i++){
        if(v[i] != v[i-1]){
            return 0;
        }
    }
    return 1;
}


int main(){

    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);

    int x = 4;
    int opcao;
    int mat[4][4];
    int vL[4], vC[4], testeL, testeC;
    int Principal=0, Secundaria=0;

    escolha(opcao, mat); 
        
    Principal = somaDiagPrincipal(x, mat);
    Secundaria = somaDiagSecundaria(x, mat);

    somaLinha(mat, vL);

    somacoluna(mat, vC);

    cout << "Soma da diagonal principal: " << Principal;
    cout << endl;
    cout << "Soma da diagonal secundaria: " << Secundaria;
    cout << endl;

    testeL = quadradomagico(x, vL);
    testeC = quadradomagico(x, vC);

    if (testeL && testeC && Principal == Secundaria && Principal == vL[0]){
        cout << "A matriz é considerada Quadrado Magico";
    }else{
        cout << "A matriz não é considerada Quadrado Magico";
    }
    return 0;
}