#include <iostream>
using namespace std;
#include "pessoa.h"
#include "carro.h"

Pessoa::Pessoa(string nome){
    setNome(nome);
    cout << "Pessoa " + getNome() + " criada com sucesso!\n";
}
Pessoa::Pessoa(string nome, int idade){
    setNome(nome);
    setIdade(idade);
    cout << "Pessoa " + getNome() + " criada com sucesso!\n";
}
Pessoa::Pessoa(string nome, Carro* _carro){
    setNome(nome);
    setIdade(idade);
    carro = _carro;
    cout << "Pessoa " + getNome() + " criada com sucesso!\n";
}
void Pessoa::setNome(string pessoa){
    nome = pessoa;
}
string Pessoa::getNome(){
    return nome;
}
void Pessoa::setIdade(int _idade){
    idade = _idade;
}
void Pessoa::setHabilitada(bool _habilitada) {
    if (idade < 18) {
        habilitada = false;
        cout << nome << " não tem idade suficiente para ter habilitação" << endl;
        return;
    }
    habilitada = _habilitada;
}

Carro Pessoa::getCarro() {
    return *carro;
}

void Pessoa::setCarro(Carro* _carro) {
    carro = _carro;
    cout << "Pessoa " << nome << " ganhou um carro " << carro->getModelo() + "!" << endl;
}

int Pessoa::getIdade() {
    return idade;
}

void Pessoa::falar(string palavras) {
    cout<< nome << " falando: " << palavras << endl;
}

void Pessoa::caminhar() {
    cout << nome << " caminhando" << endl;
}

void Pessoa::passear() {
    cout << nome <<  " vai passear" << endl;
    if (!carro) { // ou (carro == nullptr)
        cout<< nome << " não tem carro" << endl;
        caminhar();
    } else if (!habilitada) {
        cout << nome << " tem carro mas não tem habilitação" << endl;
        caminhar();
    } else {
        /*
        carro->ligar();
        carro->acelerar();
        carro->acelerar();
        carro->frear();
        carro->frear();
        carro->desligar();
        */
    }
}
