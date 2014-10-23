#include "Guerrero.h"

Guerrero::Guerrero(int ataque, int vida)
{
    this->ataque = ataque;
    this->vida = vida;
    tipo="Guerrero";
}

Guerrero::~Guerrero()
{
    //dtor
}

void Guerrero::poderEspecial()
{
    cout<<"RWWAAARR"<<endl;
}
