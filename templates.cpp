/*Las plantillas o templates en ingles, en C++ son una característica poderosa que permite escribir código genérico, 
lo que significa que puedes escribir funciones o clases que sean independientes del tipo de dato con el que se van a utilizar. 
Esto te permite reutilizar código y escribir algoritmos o estructuras de datos que funcionen con diferentes tipos de datos.
*/

/*Para ilustrar el concepto, veamos un ejemplo de una función de intercambio 
que intercambia el valor de dos variables. 
Sin usar plantillas, tendríamos que escribir una función separada para cada tipo de dato.*/

#include <iostream>

//vamos a definir funciones con argumentos pasados por referencia para poder intercambiar de manera directa los 
//valores de las variables, ademas el codigo a escribir es mas breve que si utilizaramos el paso por valor

void swapInt(int &a_referencia, int &b_referencia){//swap significa intercambiar 
							 //Al escribir esto, decimos que el tipo de argumentos que va recibir la funcion son referencias a enteros
							 //y a_referencia y b_referencia  seran alias de las variables  que se pasan por argumento que son a_principal y b_principal
							 //Si vamos a pasar valores por referencia siempre debemos escribir como se muestra 
							
	int temp = a_referencia;
	a_referencia = b_referencia;
	b_referencia = temp;
	
}

void swapFloat(float &m, float &n){//las variables alias que son las referencia de m y n pueden tener el mismo nombre que las variables en el main
	float temp = m;//se puede declarar una variable del mismo nombre al usado en la funcion anterior como temp por que es una variable local y su ambito queda
					//definido solo dentro de la funcion o limitado a la funcion y que solo está disponible dentro de la función en la que se declara.
	m = n;
	n =	temp;		
}
	
void swapChar(char &p, char &q){
	char temp = p;
	p = q;
	q = temp;	
}//estas funciones definidas de esta forma por medio del paso por referencia se ejecutan sin problemas
 //es decir no necesitamos declarar previamente las variables a y b, al igual que ocurre en el paso por valor

/*Como puedes ver, esto puede volverse tedioso y repetitivo. 
En lugar de eso, podemos usar una plantilla para escribir una función de intercambio genérica 
que funcione con cualquier tipo de dato*/

template <typename T>
void swap(T &a, T&b){//La función swap está definida como una plantilla utilizando -> template <typename T>
	T temp = a;      //T hace de tipo de variable generica
	a = b;
	b = temp;
	
}

int main(){
	
	//INTECAMBIO DE VALORES ENTRE VARIABLES ENTERAS
	int a_principal,b_principal;
	a_principal=0;
	b_principal=1;
	std::cout<<"Valores iniciales: "<<std::endl;
	std::cout<<"a = "<<a_principal<<" "<<"b = "<<b_principal<<std::endl;
	swapInt(a_principal, b_principal);
	std::cout<<"Valores finales: "<<std::endl;
	std::cout<<"a = "<<a_principal<<" "<<"b = "<<b_principal<<std::endl;
	std::cout<<"***************************************"<<std::endl;
	
	//INTECAMBIO DE VALORES ENTRE VARIABLES FLOTANTES
	float m,n;
	m=2.72;//(e) base de los logaritmos neperianos
	n=3.14;//(pi) relacion entre la circunferencia y el diamettro de un circulo (pi=circuferencia/diametro)
	std::cout<<"Valores iniciales: "<<std::endl;
	std::cout<<"m = "<<m<<" "<<"n = "<<n<<std::endl;
	swapFloat(m, n);
	std::cout<<"Valores finales: "<<std::endl;
	std::cout<<"m = "<<m<<" "<<"n = "<<n<<std::endl;
	std::cout<<"***************************************"<<std::endl;
	
	//INTECAMBIO DE VALORES ENTRE VARIABLES CARACTER
	char p,q;
	p='&';
	q='$';
	std::cout<<"Valores iniciales: "<<std::endl;
	std::cout<<"p = "<<p<<" "<<"q = "<<q<<std::endl;
	swapChar(p, q);
	std::cout<<"Valores finales: "<<std::endl;
	std::cout<<"p = "<<p<<" "<<"q = "<<q<<std::endl;
	std::cout<<"***************************************"<<std::endl;
	
	//UTILIZANDO PLANTILLA
	swap(a_principal, b_principal);
	swap(m,n);
	swap(p,q);
	std::cout<<"Valores finales utilizando plantilla: "<<std::endl;
	std::cout<<"a = "<<a_principal<<" "<<"b = "<<b_principal<<std::endl;
	std::cout<<"m = "<<m<<" "<<"n = "<<n<<std::endl;
	std::cout<<"p = "<<p<<" "<<"q = "<<q<<std::endl;
	
	
	
	return 0;
}
