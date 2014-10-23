#include "Personaje.h"

Personaje::Personaje()
{
}

Personaje::Personaje(int ataque, int vida)
{
    this->ataque = ataque;
    this->vida = vida;
}

Personaje::~Personaje()
{
    //dtor
}

void Personaje::imprimir()
{
    cout<<"Vida: "<<vida<<"\t";
    cout<<"Ataque: "<<ataque<<endl;
}

void Personaje::poderEspecial()
{
    cout<<"Esto deberia ser abstracto."<<endl;
}
