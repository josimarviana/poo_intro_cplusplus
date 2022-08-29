#ifndef CARRO_H
#define CARRO_H
#include <string>
using std::string;
class Carro {
  private:
    int velocidade;
    bool ligado;
    string modelo;
    
  public:
    Carro(string);
    void acelerar();
    void frear();
    void mostraVelocidade();
    void ligar();
    void desligar();
    void mostraMensagem();
    string getModelo();
    bool getEstado();
    void setModelo(string);
};
#endif