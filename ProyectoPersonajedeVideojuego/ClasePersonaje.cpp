#include <iostream>
#include<sstream>

using namespace std;

class Personaje{
	public:
		Personaje();//Constructor sin parametros
		Personaje(string _nombre);//Constructor con parametros
		//El constructor con parametros debe inicializar las propiedades en los siguientes valores
		//nivel:1, vida:100 y nombre igual al parametro recibido
		
		//virtual ~Personaje();
		
		string GetNombre();//Al definir un metodo dentro de la clase este finaliza con };
		void SetNombre(string val);
		int GetNivel();
		void SetNivel(int val);
		int GetVida();
		void SetVida(int val);
		
		string toString();
		
		void recibirDanio(int danho);//Debe disminuir la propiedad vida en una cantidad igual al parametro recibido
		
		
		
	private:
		string nombre;
		int nivel;
		int vida;
};//Una clase definida de esta forma finaliza con };

Personaje::Personaje(){nombre="noname"; nivel=1; vida=100;}//no lleva ;
Personaje::Personaje(string _nombre){nombre=_nombre; nivel=1; vida=100;}

string Personaje::GetNombre(){return nombre;}
void Personaje::SetNombre(string val){nombre=val;}
int Personaje::GetNivel(){return nivel;}
void Personaje::SetNivel(int val){nivel=val;}
int Personaje::GetVida(){return vida;}
void Personaje::SetVida(int val){vida=val;}

string Personaje::toString(){
	ostringstream aux;
	aux<<"Personaje de Videojuego: "<<"\nNombre: "<<nombre<<"\nNivel: "<<nivel<<"\nVida: "<<vida;
	return aux.str();
}

void Personaje::recibirDanio(int danho){
	vida=vida-danho;
	
}

int main(){
	
	Personaje p1;
	Personaje p2("Pikachu");//el constructor con parametros solo asigna valor a una propiedad
	Personaje *p3;
	p3=new Personaje("Bulbasaur");
	Personaje *p4;
	p4=new Personaje("Pidgey");
	
	cout<<"\n"<<p1.toString()<<endl;
	cout<<"\n"<<p2.toString()<<endl;
	cout<<"\n"<<p3->toString()<<endl;
	cout<<"\n"<<p4->toString()<<endl;
	
	p3->recibirDanio(10);
	
	cout<<"\n"<<p3->GetNombre()<<" ha recibido un danho "<<endl;
	
	cout<<"\n"<<p3->toString()<<endl;
	
	
	system("pause");
	return 0;
}
