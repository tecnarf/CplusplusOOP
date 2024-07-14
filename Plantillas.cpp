/*Las plantillas en C++ son una caracter�stica del lenguaje que permite crear funciones y clases gen�ricas, 
es decir, que pueden trabajar con diferentes tipos de datos sin necesidad de escribir c�digo espec�fico para cada uno.*/

/*Algunas caracter�sticas clave de las plantillas en C++ son:

    Gen�rico: Una plantilla define una estructura o funci�n que puede trabajar con diferentes tipos de datos 
	sin necesidad de escribir c�digo espec�fico para cada tipo.

    Tipo Param�trico: Las plantillas utilizan par�metros de tipo para especificar los tipos con los que puede trabajar la funci�n o clase.

    Instanciaci�n: Cuando se utiliza una plantilla, el compilador genera autom�ticamente una versi�n espec�fica de la funci�n o clase 
	para los tipos de datos proporcionados.*/

/*Aqu� hay un ejemplo sencillo de una funci�n plantilla en C++ que intercambia los valores de dos variables:
cpp*/

#include <iostream>

template <typename T>//En este ejemplo, T es el par�metro de tipo, que puede ser reemplazado por cualquier tipo de dato v�lido en C++ 
					//incluso clases. Cuando se llama a esta funci�n, el compilador genera autom�ticamente 
					//una versi�n espec�fica de la funci�n swap() para los tipos de datos utilizados.
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

/*Cuando se llama a esta funci�n, el compilador genera autom�ticamente una versi�n espec�fica de la funci�n swap() 
para los tipos de datos utilizados.*/

int main(){
	int x = 5, y = 10;
	std::cout<<"Antes x =  "<<x<<" y = "<<y<<std::endl;
	swap(x, y); // Genera una versi�n de swap() para enteros
	std::cout<<"Despues x =  "<<x<<" y = "<<y<<std::endl;

	double a = 3.14, b = 2.71;
	std::cout<<"Antes a =  "<<a<<" b = "<<b<<std::endl;
	swap(a, b); // Genera una versi�n de swap() para n�meros de punto flotante
	std::cout<<"Despues a =  "<<a<<" b = "<<b<<std::endl;
	
	return 0;	
}

