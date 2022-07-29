//BARBARA DIOGO
#include<iostream>
using namespace std

int soma(int **ptr, int l, int c){
	int soma = 0;
	for(int i=0; i<c; i++){
		for(int j=0; j<l; j++){
		soma += ptr[i][j];
		}
	}
	return soma;
}

int main(){
	int l, c;
	cout << "Informe o numero de linhas da matriz: ";
	cin >> l;
	cout << endl << "Informe o numero de colunas da matriz: ";
	cin >> c;
	cout << endl;

	int **ptr = new int *[l];

	for (int i=0; i<l; i++){
		ptr[i] = new int[l];
	}

	for(int i=0; i<l; i++){
		for(int j=0; j<c; j++){
			cin >> ptr[i][j];
		}
	}

	int soma = soma(ptr, c, l);
	cout << soma << endl;

	for(i=0; i<l; i++)
		delete[] ptr[i];

	return 0;
}