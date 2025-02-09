#include <iostream>
#include "Personaje.h"

using namespace std;

int main()
{
    Personaje p1("Pikachu");
    Personaje *p2;//se crea una variable tipo puntero que puede almacenar la direccion de memoria
                  //de un objeto(variable) de la clase(tipo) Personaje
    p2=new Personaje("Rattata");//le pasamos(cargamos) al puntero *p2 la direccion de memoria  del nuevo objeto
                      //del tipo Personaje que se crea

    cout<<p1.toString()<<endl;
    cout<<p2->toString()<<endl;

    cout<<"\n"<<p2->Getnombre()<<" uso mordisco"<<endl;
    p1.recibirDanio(10);
    cout<<p1.toString()<<endl;

    return 0;
}
