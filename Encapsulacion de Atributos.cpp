/*La accesibilidad a los miembros de una clase en C++ varía según su especificación como públicos, protegidos o privados:

    Miembros públicos: Los miembros públicos de una clase son accesibles desde cualquier parte del programa, incluyendo la función main() y otras clases. 
					   Pueden ser llamados, accedidos y modificados directamente desde cualquier parte del programa. Los miembros públicos se definen utilizando 
					   la palabra clave public.

    Miembros protegidos: Los miembros protegidos de una clase son accesibles desde la propia clase y desde las clases derivadas. Esto significa que los miembros protegidos 
						se pueden heredar y utilizar en las clases hijas, pero no se pueden acceder directamente desde fuera de la jerarquía de herencia. Los miembros protegidos 
						se definen utilizando la palabra clave protected.

    Miembros privados: Los miembros privados de una clase son accesibles únicamente desde la propia clase. No pueden ser accedidos ni modificados desde fuera de la clase, 
					   incluyendo las clases derivadas. Los miembros privados se definen utilizando la palabra clave private.*/



#include <iostream>
#include <sstream>

using namespace std;

class Clase{
	
	//miembros de la clase(atributos y metodos)
	//pueden ser privados, protegidos o publicos (nivel de encapsulamiento)
	
	public://miembros publicos
		
		//atributos publicos
		int atributo_publico1;
		string atributo_publico2;
		string atributo_publico3;
		
		/*virtual ~MiClase();*/
	
	protected://miembros protegidos
			  //Los miembros protegidos no pueden ser accedidos directamente desde cualquier parte del programa, incluyendo la función main(). 
		      //Los atributos y miembros protegidos solo son accesibles dentro de la clase en la que se definen y en las clases derivadas.
		
		//atributos protegidos
		int atributo_protegido1;
		string atributo_protegido2;
		float atributo_protegido3;
		

	private://miembros privados
		
		//atributos privados
		int atributo_privado1;
		string atributo_privado2;
		string atributo_privado3;
		
	
		
	
	
};

//mientras no se use ningun metodo de la clase en el main, se puede omitir la
//implementacion de estos



int main(){
	
	
	Clase c;//Se puede instanciar un objeto de la  clase sin necesidad de un constructor
	//Damos valores a los atributos publicos y los mostramos en pantalla
	//como son publicos podemos acceder a ellos desde el main(asignar valores y mostrarlos en pantalla)
	c.atributo_publico1=10;
	c.atributo_publico2="cadena1";
	c.atributo_publico3="cadena2";
	cout<<c.atributo_publico1<<endl;
	cout<<c.atributo_publico2<<endl;
	cout<<c.atributo_publico3<<endl;
	
	//c.atributo_protegido1=1;//error de compilacion, se trata de un atributo protegedio por ende solo puede ser accedido desde la misma clase
							 //o clases derivadas
	//c.atributo_privado1=1;		 //error de compilacion, los atributos privados son accesibles unicamente desde la propia clase 
	

	return 0;
}
