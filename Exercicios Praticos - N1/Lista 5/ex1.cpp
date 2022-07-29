/*  BARBARA DIOGO
1)Faça um programa que leia uma string e a imprima
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
	string fruta1("Banana");
	string fruta2("Abacaxi");
	string fruta3, fruta4;

	cout << "As duas primeiras frutas são: " << fruta1 << " e " << fruta2 << endl;
	fruta3 = "Manga";
	fruta4 = fruta3;
	cout << "As duas ultimas frutas foram: " << fruta3 << " e " << fruta4 << endl;
}