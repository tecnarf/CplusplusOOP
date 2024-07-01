#include <iostream>

using namespace std;

class Personaje{
	public:
		Personaje();//Constructor sin parametros
		Personaje(string _nombre, int nivel, int vida);//Constructor con parametros
		
		//virtual ~Personaje();
		
		string GetNombre();
		void SetNombre(string val);
		int GetNivel();
		void SetNivel(int val);
		int GetVida();
		void SetVida(int val);
		
		
	private:
		string nombre;
		int nivel;
		int vida;
};

Personaje::Personaje(){nombre="noname"; nivel=0; vida=0;}
Personaje::Personaje(string _nombre, int _nivel, int _vida){nombre=_nombre; nivel=_nivel; vida=_vida;}
string Personaje::GetNombre(){return nombre;}
void Personaje::SetNombre(string val){nombre=val;}
int Personaje::GetNivel(){return nivel;}
void Personaje::SetNivel(int val){nivel=val;}
int Personaje::GetVida(){return vida;}
void Personaje::SetVida(int val){vida=val;}

int main(){
	
	cout<<"Hola mundo!"<<endl;
	
	system("pause");
	return 0;
}
