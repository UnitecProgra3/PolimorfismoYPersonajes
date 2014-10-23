#include <iostream>
#include <list>
#include "Guerrero.h"
#include "Mago.h"
#include "Arquero.h"
using namespace std;

int main()
{
    list<Personaje*> personajes;
    personajes.push_back(new Mago(8,100));
    personajes.push_back(new Guerrero(15,120));
    personajes.push_back(new Mago(7,110));
    personajes.push_back(new Arquero(7,110));

    for(list<Personaje*>::iterator i = personajes.begin();
            i!=personajes.end();
            i++)
    {
        (*i)->imprimir();
        (*i)->poderEspecial();
//        if((*i)->tipo=="Mago")
//        {
//            ((Mago*)(*i))->poderEspecial();
//        }
//        if((*i)->tipo=="Guerrero")
//        {
//            ((Guerrero*)(*i))->poderEspecial();
//        }
    }

    return 0;
}
