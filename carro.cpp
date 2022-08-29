#include <iostream>
using namespace std;
#include "carro.h"

Carro::Carro(string modelo){
    setModelo(modelo);
    cout << "Carro " <<  getModelo() <<  " criado com sucesso!\n";
}
string Carro::getModelo(){
    return modelo;
}
bool Carro::getEstado(){
    return ligado;
}
void Carro::setModelo(string _modelo){
    modelo = _modelo;
}
void Carro::acelerar(){
    if(!ligado){
        cout << "Ligue o carro antes\n";
        return;
    }
    if(velocidade>=100){
        cout << "Velocidade máxima atingida\n";
        return;
    }
    velocidade+=20;
    mostraVelocidade();
}
void Carro::frear(){
    if(velocidade<=0){
        cout << "O carro está parado\n";
        return;
    }
    velocidade-=20;
    mostraVelocidade();
}
void Carro::mostraVelocidade(){
    cout << "Velocidade: " << velocidade << endl;
}
void Carro::ligar(){
    if(ligado){
        cout << "Carro já está ligado\n";
        return;
    }
    cout << "Carro ligado\n";
    ligado = true;
}
void Carro::desligar(){
    if(!ligado){
        cout << "O carro já está desligado\n";
        return;
    }
    cout << "Carro desligado\n";
    ligado = false;
}

