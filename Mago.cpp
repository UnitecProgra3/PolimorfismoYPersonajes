#include "Mago.h"

Mago::Mago(int ataque, int vida)
{
    this->ataque = ataque;
    this->vida = vida;
    tipo="Mago";
}

Mago::~Mago()
{
    //dtor
}

void Mago::poderEspecial()
{
    cout<<"Pirrrin"<<endl;
}
