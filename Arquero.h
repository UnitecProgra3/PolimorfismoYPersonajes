#ifndef ARQUERO_H
#define ARQUERO_H

#include "Personaje.h"

class Arquero : public Personaje
{
    public:
        Arquero(int ataque, int vida);
        virtual ~Arquero();
        //void poderEspecial();
    protected:
    private:
};

#endif // ARQUERO_H
