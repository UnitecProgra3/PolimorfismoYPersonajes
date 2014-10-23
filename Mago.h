#ifndef MAGO_H
#define MAGO_H

#include "Personaje.h"

class Mago : public Personaje
{
    public:
        Mago(int ataque, int vida);
        virtual ~Mago();
        void poderEspecial();
    protected:
    private:
};

#endif // MAGO_H
