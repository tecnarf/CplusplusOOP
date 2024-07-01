#include <iostream>
#include <sstream>

using namespace std;

class Persona{
	public:
		
		//METODOS ESPECIALES DE LA CLASE
		Persona(){
			cedula = 0;
			nombre = "noname";
			apellido = "noname";
		}
		Persona(int _cedula, string _nombre, string _apellido){
			cedula = _cedula;
			nombre = _nombre;
			apellido = _apellido;
		}
		
		//Destructor  virtual ~Persona(); 
		
		//DEFINICION DE METODOS DE LA CLASE
		//Getters y Setters
		int GetCedula();
		void SetCedula(int val);
		string GetNombre();
		void SetNombre(string val);
		string GetApellido();
		void SetApellido(string val);
		
		string ToString();
		
	
	private:
		int cedula;
		string nombre;
		string apellido;
		
};

//IMPLEMENTACION DE METODOS FUERA DE LA CLASE
//Esta forma de implementar m�todos fuera de la clase permite mantener 
//una mejor organizaci�n y modularidad en el c�digo.
//Esto puede ser �til cuando se trabaja con clases grandes o en proyectos m�s complejos, 
//donde quieres mantener la declaraci�n de los m�todos en un lugar y la implementaci�n en otro, 
//por cuestiones de legibilidad y mantenibilidad del c�digo.
//Implementamos los m�todos utilizando 
//el operador de resoluci�n de �mbito (::) 
//para indicar a qu� clase pertenece el m�todo. 
int Persona::GetCedula(){
	return cedula;
}
void Persona::SetCedula(int val){
	cedula = val;
}
string Persona::GetNombre(){
	return nombre;
}
void Persona::SetNombre(string val){
	nombre = val;
}
string Persona::GetApellido(){
	return apellido;
}
void Persona::SetApellido(string val){
	apellido =  val;
}

string Persona::ToString(){
	ostringstream aux;
	aux<<"Cedula de identidad: "<<cedula<<"\nNombre: "<<nombre<<"\nApellido: "<<apellido;
	return aux.str();
	}



int main(){
	
	Persona p1;//se nos creara un objeto p1 con atributos inicializados por el constructor pr defecto
	Persona p2(1234567, "Alan","Turing");//se nos crea  un objeto con los  atributos que le  adjudicamos
	
	//VISUALIZACION COMPLETA DE ATRIBUTOS DE LOS OBJETOS CREADOS
	cout<<"\nDatos personales: "<<"\n"<<p1.ToString()<<"\n"<<endl;//p1(con valores  por defecto)
	cout<<"\nDatos personales: "<<"\n"<<p2.ToString()<<"\n"<<endl;//p2
	
	system("pause");
	return 0;
}
