#ifndef PERSONAJE_H
#define PERSONAJE_H

#include<iostream>
#include<sstream>

using namespace std;

class Personaje
{
    public:
        Personaje();
        Personaje(string _nombre);
        virtual ~Personaje();

        string Getnombre() { return nombre; }
        void Setnombre(string val) { nombre = val; }
        int Getnivel() { return nivel; }
        void Setnivel(int val) { nivel = val; }
        int Getvida() { return vida; }
        void Setvida(int val) { vida = val; }

        string toString();

        void recibirDanio(int danho);

    protected:

    private:
        string nombre;
        int nivel;
        int vida;
};

#endif // PERSONAJE_H
