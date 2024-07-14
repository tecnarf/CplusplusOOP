/*Las plantillas en C++ son una característica del lenguaje que permite crear funciones y clases genéricas, 
es decir, que pueden trabajar con diferentes tipos de datos sin necesidad de escribir código específico para cada uno.*/

/*Algunas características clave de las plantillas en C++ son:

    Genérico: Una plantilla define una estructura o función que puede trabajar con diferentes tipos de datos 
	sin necesidad de escribir código específico para cada tipo.

    Tipo Paramétrico: Las plantillas utilizan parámetros de tipo para especificar los tipos con los que puede trabajar la función o clase.

    Instanciación: Cuando se utiliza una plantilla, el compilador genera automáticamente una versión específica de la función o clase 
	para los tipos de datos proporcionados.*/

/*Aquí hay un ejemplo sencillo de una función plantilla en C++ que intercambia los valores de dos variables:
cpp*/

#include <iostream>

template <typename T>//En este ejemplo, T es el parámetro de tipo, que puede ser reemplazado por cualquier tipo de dato válido en C++ 
					//incluso clases. Cuando se llama a esta función, el compilador genera automáticamente 
					//una versión específica de la función swap() para los tipos de datos utilizados.
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

/*Cuando se llama a esta función, el compilador genera automáticamente una versión específica de la función swap() 
para los tipos de datos utilizados.*/

int main(){
	int x = 5, y = 10;
	std::cout<<"Antes x =  "<<x<<" y = "<<y<<std::endl;
	swap(x, y); // Genera una versión de swap() para enteros
	std::cout<<"Despues x =  "<<x<<" y = "<<y<<std::endl;

	double a = 3.14, b = 2.71;
	std::cout<<"Antes a =  "<<a<<" b = "<<b<<std::endl;
	swap(a, b); // Genera una versión de swap() para números de punto flotante
	std::cout<<"Despues a =  "<<a<<" b = "<<b<<std::endl;
	
	return 0;	
}

