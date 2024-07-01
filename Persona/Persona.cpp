#include "Persona.h"
#include <sstream>
#include<iostream>

using namespace std;

Persona::Persona(){
    cedula=0;
    nombre="noname";
    apellido="noname";
}

Persona::Persona(int _cedula, string _nombre, string _apellido){
    cedula=_cedula;
    nombre=_nombre;
    apellido=_apellido;
}

Persona::~Persona()
{
    //dtor
}

//Los Getters y Setters ya fueron implementados dentro de la clase

string Persona::toString(){
    ostringstream aux;
    aux<<"Cedula de identidad: "<<cedula<<"\n"<<"Nombre: "<<nombre<<"\n"<<"Apellido: "<<apellido;
    return aux.str();
}

//Implementacion de los metodos especificos de la clase
void Persona::comer(string _refrigerio, int _cantidad){//si es void no hay return
    string refrigerio=_refrigerio;
    int cantidad=_cantidad;
    cout<<nombre<<" come "<<cantidad<<" "<<refrigerio<<endl;

}
