//BARBARA DIOGO
//2063853

#include<iostream>
#include<fstream>
using namespace std;
using std::ofstream;

int main(){
	int l1, l2, c1, c2, i, j;
	int l, x;

	cout << "Informe a quantidade de linhas da matriz 1: ";
	cin >> l1;
	
	cout << "Informe quantidade de colunas da matriz 1: ";
	cin >> c1;

	cout << "Informe a quantidade de linhas da matriz 2: ";
	cin >> l2;

	cout << "Informe a quantidade de colunas da matriz 2: ";
	cin >> c2;

	int m1[l1][c1], m2[l2][c2], mx[l1][c2];



	if(c1 == l2){

	// COLHENDO OS ELEMENTOS DAS 2 MATRIZES
	cout << "Informe os elementos da matriz 1: \n\n";
	for( i=0; i<l1; i++){
	    for( j=0; j<c1; j++){
	        cout << "Entre com o valor " << i << "X" << j << ": ";
	        cin >> x;
	        m1[i][j] = x;
	    }
	}
	
	cout << "Informe os elementos da matriz 2: \n\n";
	for(i=0; i<l2; i++){
		for(j=0; j<c2; j++){
			cout << "Entre com os valor " << i << "X" << j << ": ";
			cin >> x;
			m2[i][j] = x;
			mx[i][j] = 0;
		}
	}


	// LENDO AS MATRIZES
	cout << "\n\n Matriz 1\n\n";
	for(i=0; i<l2; i++){
		for(j=0; j<c2; j++){
			cout << " "  << m1[i][j] << " | " ;
			//cin >> x;
		}
		cout << endl;
	}

	cout << "\n\n Matriz 2 \n\n";
	for(i=0; i<l2; i++){
		for(j=0; j<c2; j++){
			cout << " " << m2[i][j] << " | ";
			//cin >> x;
		}
		cout << endl;
	}



	// LÓGICA DA MULTIPLICAÇÃO
	for(i=0; i<l1; i++){
		for(j=0; j<c2; j++){
			for(l=0; l<l2; l++){
				mx[i][j] = mx[i][j]+(m1[i][l]*m2[l][j]);
			}
		}
	}



	// RESULTADO DA MULTIPLICAÇÃO
	cout << "\n\n Resultado da Multiplicação das 2 Matrizes \n\n";
	for(i=0; i<l1; i++){
		for(j=0; j<c2; j++){
			cout << " " << mx[i][j] << " | ";
		}
		cout << endl;
	}

	}else{
		cout << "A matriz não pode ser multiplicada";
	}


	// CRIANDO O ARQUIVO COM O RESULTADO DA MULTIPLICAÇÃO
	ofstream Mult("resultado.txt", ios::app);
	for(i=0; i<l1; i++){
		for(j=0; j<c2; j++){
			Mult << " " << mx[i][j] << " | ";
		}
		cout << endl;
	}
	Mult.close();
	

}