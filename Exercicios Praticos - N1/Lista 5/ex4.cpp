/*  BARBARA DIOGO
4. Faça um programa que leia um nome e imprima as 4 primeiras letras do nome
*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    char nome[20]; 
    int B; 
    printf ("informe seu nome:"); 
    gets(nome); 
    for(B=0;B<=3;B++) 
    cout << nome[B]; 
    cout << "\n\n"; 
    system("PAUSE"); 
    return (0); 
}