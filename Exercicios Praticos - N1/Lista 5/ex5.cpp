/*  BARBARA DIOGO
5.Crie um programa que compara duas strings (não use a função strcmp)
*/

#include<iostream>
#include<string>
using namespace std;

int main (){
  char str1 = "melancia";
  char str2 = "laranja";
  int ret;

  ret = strncmp(str1, str2, 6);

  if(ret > 0){
    cout << "str1 é maior";
  }else if(ret < 0){
    cout << "str2 é maior";
  }else{
    cout << "As duas palavras são iguais";
  }

  return(0);
}