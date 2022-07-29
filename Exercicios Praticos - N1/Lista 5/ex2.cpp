/*  BARBARA DIOGO
2)Crie um programa que calcula o comprimento de uma string (não use a função strlen)*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    char str1[100], str2[200];
    cout << "Entre com uma string: " << endl;
    gets(str1);
    strcpy(str2, str1);
    cout << str2;
}