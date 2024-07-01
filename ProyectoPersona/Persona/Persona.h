#ifndef PERSONA_H//Estas dos lineas de codigo son parte de un mecanismo
#define PERSONA_H //conocido como "inclusion de guardas" (include guards en ingles
                  //Se utilizan para evitar problemas de inclusion multiple en
                  //archivos de encabezados (header files)


#include <iostream>
#include <sstream>

using namespace std;

class Persona
{
    public://Modificador de acceso publico: Todos los atributos y metodos
           //definidos bajo "public:" seran de acceso libre
        Persona();//Constructor sin parametros
        Persona(int _cedula, string _nombre, string _apellido);//Constructor con parametros

        virtual ~Persona();//Destructor

        //Getters y Setters (implementados dentro de la clase)
        int Getcedula() { return cedula; }
        void Setcedula(int val) { cedula = val; }
        string Getnombre() { return nombre; }
        void Setnombre(string val) { nombre = val; }
        string Getapellido() { return apellido; }
        void Setapellido(string val) { apellido = val; }

        //Metodo toStrting
         string toString();

        //Metodos especificos de la clase

       void comer(string refrigerio, int cantidad);


    protected://Modificador de acceso protegido: Los atributos y metodos
              //definidos bajo "protected: " seran de acceso exclusivo
              //o o de uso parcialmente restringidos

    private://Modificador de acceso privado: Atributos y metodos bajo la palabra
            //resevarda (o palabra clave) "private:" seran inaccesibles, es decir
            //estaran encapsulados
        int cedula;
        string nombre;
        string apellido;
};//una clase siempre finaliza con ;

#endif // PERSONA_H
