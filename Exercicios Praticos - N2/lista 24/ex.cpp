#include<iostream>
#include<string>
using namespace std;

class Veiculos {
    public:

    void setmarca(string marca2){
        marca = marca2;
    }

    string getmarca(){
        return marca;
    }

    void setmodelo(string modelo2){
        modelo = modelo2;
    }

    string getmodelo(){
        return modelo;
    }

    void setvelocidade(float velocidade2){
        velocidade = velocidade2;
    }

    float getvelocidade(){
        return velocidade;
    }

    void setano(int ano2){
        ano = ano2;
    }

    int getano(){
        return ano;
    }

    void setrenavam(long int renavam2){
        renavam = renavam2;
    }

    long int getrenavam(){
        return renavam;
    }
    void setcombustivel(float combustivel2){
        combustivel = combustivel2;
    }
    int getcombustivel(){
        return combustivel;
    }

    private:
        string marca;
        string modelo;
        float combustivel;
        int velocidade;
        int ano;
        long int renavam; 
};

int main(){
    Veiculos meuveiculo;

    meuveiculo.setano(1954);
    meuveiculo.setmarca("Hyundai");
    meuveiculo.setmodelo("Tucson");
    meuveiculo.setrenavam(1569852485);
    meuveiculo.setvelocidade(200);
    meuveiculo.setcombustivel(100);

    cout << "Marca do carro: " << meuveiculo.getmarca() << endl;
    cout << "Modelo do carro: " << meuveiculo.getmodelo() << endl;
    cout << "Ano do carro: " << meuveiculo.getano() << endl;
    cout << "Renavam do carro: " << meuveiculo.getrenavam() << endl;
    cout << "Capacidade de Combustivel do carro: " << meuveiculo.getcombustivel() << endl;
    cout << "Indicador de Velocidade do carro: " << meuveiculo.getvelocidade() << endl;

    

}