//Alternativa a
#include<iostream>
using namespace std;

struct no{
	int n = 5;
	struct ini *ptr;
};

int main(){
	struct no N1;

	cout << N1.n<< endl; //valor
	cout << N1.ptr<<endl;
	
}