#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <iostream>
using namespace std;

class Personaje
{
    public:
        string tipo;
        int ataque;
        int vida;
        Personaje();
        Personaje(int ataque, int vida);
        void imprimir();
        virtual void poderEspecial();
        virtual ~Personaje();
    protected:
    private:
};

#endif // PERSONAJE_H
