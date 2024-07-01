#include <iostream>
#include "Persona.h"//las clases que creamos van entre comillas

using namespace std;

int main()
{
    ///CREACION DE OBJETOS
    Persona p1;//Instancia de la clase Persona mediante el uso del
               //constructor sin  parametros o por defecto
               //Los valores asignados a los atributos  son  dados por  defect
    Persona p2(4571890, "Fiorella", "Gomez");//Objeto de la clase Persona instanciado usando el constructor
                //con parametros
    ///CREACION DE OBJETOS POR PUNTEROS
    Persona *p3;//puntero tipo Persona(almacena la direccion de memoria una variable tipo Persona)
    Persona *p4;
    p3=new Persona();//escrito asi le pasamos la direccion de  memoria de la variable tipo persona creada con el constructor sin parametros
    p4=new Persona(5440092, "Zulema", "Gomez");//Quedando de esta forma instaciado un objeto de la clase persona por medio de punteros

    ///VISUALIZACION DE LOS ATRIBUTOS DE p1
    ///(instanciado por constructor sin parametros)
    cout<<"Datos Personales: Persona [1]"<<endl;
    cout<<"Cedula: "<<p1.Getcedula()<<endl;//cedula=0;
    cout<<"Nombre: "<<p1.Getnombre()<<endl;
    cout<<"Apellido: "<<p1.Getapellido()<<endl;
    cout<<"\nDatos Personales: Persona [1] (Usando toString)"<<"\n"<<p1.toString()<<endl;//Ahorramos lineas de
                                                            //codigo con toString
    ///MODIFICACION DE LOS ATRIBUTOS DE p1
    p1.Setcedula(5440091);
    p1.Setnombre("Francisco");
    p1.Setapellido("Gomez");
    cout<<"\nDatos Personales:Persona [1] (Actualizados)"<<"\n"<<p1.toString()<<endl;

    ///VISUALIZACION DE LOS ATRIBUTOS DE p2
     cout<<"\nDatos Personales: Persona [2]"<<"\n"<<p2.toString()<<endl;
     p2.comer("Empanadas", 3);

     ///VISUALIZACION DE LOS ATRIBUTOS DE p3(instanciado por puntero)
     cout<<"\nDatos Personales: Persona [3] (por puntero) "<<"\n"<<p3->toString()<<endl;
     ///MODIFICACION DE LOS ATRIBUTOS DE p1
     p1.Setcedula(6243501);
     p1.Setnombre("Gina");
     p1.Setapellido("Gomez");
    cout<<"\nDatos Personales:Persona [3] (Actualizados)"<<"\n"<<p1.toString()<<endl;

     ///VISUALIZACION DE LOS ATRIBUTOS DE p4(instanciado por puntero)
     cout<<"\nDatos Personales: Persona [4] (por puntero) "<<"\n"<<p4->toString()<<endl;
     p4->comer("chipas", 2);

    return 0;
}
