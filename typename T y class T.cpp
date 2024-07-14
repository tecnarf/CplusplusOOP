/*La elección entre class y typename para declarar plantillas es principalmente una cuestión de estilo y preferencia personal. Tradicionalmente,
se ha utilizado class para declarar tipos genéricos en plantillas, pero a partir del estándar C++11, se introdujo la palabra clave typename 
como una alternativa válida y más general.*/

/*En la práctica, no hay ninguna diferencia técnica entre usar class o typename en el contexto de plantillas. 
Ambas palabras clave se utilizan para declarar un tipo genérico que puede representar cualquier tipo de dato válido en C++, 
ya sea una clase, un tipo primitivo o un tipo definido por el usuario.*/

/*En declaracion de funcion generica o plantilla de funcion, al escribir template <typename T> interpretamos definiremos  una funcion  
que trabaja con datos genericos T o datos cuyo tipo se conocera posteriormente, es decir, 
el tipo de argumento no esta predefinido como en otras funciones). Se la llama plantilla de funcion por que dependiendo del tipo de dato
que se le pase se tendra una funcion en particular para ese dato pero que realiza las mismas operaciones para cualquier otro tipo de dato
Se cumple la misma idea para las clases genericas o plantilla de clases*/

#include <iostream>

template <class T>//La clase declarada abajo usara un tipo de dato generico T
				  //Tendremos entonces una clase generica  o plantilla  de clase
class MiClase {
	public:
    	T dato;//dato representa cualquier variable(o clase) valida en C++, int, float, char, string o alguna clase 
			   //definida por el programador por que en esencia una clase es un tipo de dato personalizado
};

template <typename T>//la funcion declarada abajo sera generica
void imprimir(T valor) {//valor es un tipo de dato generico (podria ser cualquier tipo de dato valido en c++)
    std::cout << valor << std::endl;
}

int main() {
	
    MiClase<int> objeto;//Al ser MiClase de tipo generico (tiene al menos un miembro de tipo generico) en la creacion de un objeto de la clase
    					//se debera especificar el tipo de dato que sera T de la forma mostrada
    objeto.dato = 10;

    imprimir(objeto.dato);

    return 0;
}

/*En este ejemplo, tanto template <class T> como template <typename T> se utilizan para declarar un tipo de dato genérico T. 
En MiClase<T>, T puede ser cualquier tipo de dato, ya sea una clase definida por el usuario o un tipo primitivo. En imprimir(T valor), 
T puede ser cualquier tipo válido en C++, incluyendo tipos definidos por el usuario o tipos primitivos.*/
