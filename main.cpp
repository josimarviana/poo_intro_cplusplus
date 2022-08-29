#include <iostream>
using namespace std;
#include "carro.h"
#include "pessoa.h"

int main(){
    Pessoa pessoa("Camila", 20);
    pessoa.passear();
    Carro carro("fuscão");
    pessoa.setCarro(&carro);
    pessoa.setHabilitada(true);
    pessoa.passear();
    return 0; // indica terminação bem-sucedida
}