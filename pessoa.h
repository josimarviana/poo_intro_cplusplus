#ifndef PESSOA_H
#define PESSOA_H
#include <string>
using std::string;
#include "carro.h"

class Pessoa{
    private:
        string nome;
        int idade;
        bool habilitada;
        Carro *carro;
    public:
        Pessoa(string);
        Pessoa(string, int);
        Pessoa(string, Carro*);
        void setNome(string);
        string getNome();
        void mostraMensagem();
        void setIdade(int);
        int getIdade();
        void caminhar();
        void setHabilitada(bool);
        Carro getCarro();
        void setCarro(Carro*);
        void falar(string); 
        void passear();
};
#endif