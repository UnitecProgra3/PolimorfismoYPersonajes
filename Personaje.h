#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <iostream>
using namespace std;

class Personaje
{
    public:
        int ataque;
        int vida;
        Personaje(int ataque, int vida);
        void imprimir();
        virtual ~Personaje();
    protected:
    private:
};

#endif // PERSONAJE_H
