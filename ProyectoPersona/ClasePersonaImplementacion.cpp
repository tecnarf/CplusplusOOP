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
//Esta forma de implementar métodos fuera de la clase permite mantener 
//una mejor organización y modularidad en el código.
//Esto puede ser útil cuando se trabaja con clases grandes o en proyectos más complejos, 
//donde quieres mantener la declaración de los métodos en un lugar y la implementación en otro, 
//por cuestiones de legibilidad y mantenibilidad del código.
//Implementamos los métodos utilizando 
//el operador de resolución de ámbito (::) 
//para indicar a qué clase pertenece el método. 
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
