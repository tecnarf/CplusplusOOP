#include <iostream>
#include <sstream>

using namespace std;

class Persona{
	public:
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
		
		//virtual ~Persona(); //Por ahora omitiremos al destructor 
		//si escribieramos lo de arriba se producira un error 
		//donde el compilador no puede encontrar la definición del destructor de la clase Persona.
		//si vamos a usar el destructor tal como esta debemos agregar la definición del destructor fuera de la clase
		
		int GetCedula(){
			return cedula;
		}
		void SetCedula(int val){
			cedula = val;
		}
		string GetNombre(){
			return nombre;
		}
		void SetNombre(string val){
			nombre = val;
		}
		string GetApellido(){
			return apellido;
		}
		void SetApellido(string val){
			apellido = val;
			
		}
		
		string ToString(){
			ostringstream aux;
			aux<<"Cedula de identidad: "<<cedula<<"\n"<<"Nombre: "<<nombre<<"\n"<<"Apellido: "<<apellido;
			return aux.str();
		}
	
	private:
		int cedula;
		string nombre;
		string apellido;
};

/*virtual Persona::~Persona() {
    // Implement the destructor here
}*///no implementaemos al destructor en este codigo

int main(){
	
	Persona p1;//creamos una instancia(objeto) de la clase 
			   //creado de esta forma sus atributos estan fijados por defecto (se hace uso del constructor 
			   //por defecto o sin parametros)
			   
	Persona p2(1010101,"Steve", "Jobs");//Instanciamos la clase usando el constructor con parametros
			   
	//ACCESO A ATRIBUTOS DEL OBJETO	p1	   
	/*cout<<p1.cedula<<endl; diferencia de las estructuras(struct) no podemos acceder ningun atributo de esta forma
							por que fue definido como privado, lo mismo ocurre con los metodos*/							
	/*cout<<p1.GetCedula()<<endl;//podemos acceder de esta manera a los atributos encapsulados como privados
	cout<<p1.GetNombre()<<endl;//mediante los metodos Get(obtener) que son publicos
	cout<<p1.GetApellido()<<endl;*/
	
	cout<<"\nDatos personales: "<<"\n"<<p1.ToString()<<"\n"<<endl;//VISUALIZACION COMPLETA DE ATRIBUTOS DE p1
	
	//MODIFICACION DE ATRIBUTOS DEL OBJETO p1
	p1.SetCedula(1000000);
	p1.SetNombre("Bill");
	p1.SetApellido("Gates");
	
	cout<<"\nDatos personales: "<<"\n"<<p1.ToString()<<"\n"<<endl;
	
	cout<<"\nDatos personales: "<<"\n"<<p2.ToString()<<"\n"<<endl;//VISUALIZACION COMPLETA DE ATRIBUTOS DE p2
	
	
	
	system("pause");
	return 0;
}
