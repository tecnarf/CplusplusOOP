#include<iostream>
#include<sstream>

#include "Personaje.h"

using namespace std;

Personaje::Personaje()
{
    nombre="noname";
    nivel=1;
    vida=100;
}
Personaje::Personaje(string _nombre)
{
    nombre=_nombre;
    nivel=1;
    vida=100;
}

Personaje::~Personaje()
{
    //dtor
}

string Personaje::toString(){
    ostringstream aux;
    aux<<"\nPersonaje de Videojuego: "<<"\nNombre: "<<nombre<<"\nNivel: "<<nivel<<"\nVida: "<<vida;
    return aux.str();
}

void Personaje::recibirDanio(int danho){
    vida=vida-danho;
}
