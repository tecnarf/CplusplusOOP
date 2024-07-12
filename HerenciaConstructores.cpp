/*en C++ los constructores también se heredan! Cuando una clase deriva de otra clase, hereda todos los miembros de la clase base, 
incluyendo los constructores. Esto significa que puedes utilizar los constructores de la clase base para inicializar los miembros heredados en la clase derivada.
Cuando se crea un objeto de una clase derivada, se llamará automáticamente al constructor de la clase base correspondiente. 
Esto asegura que los miembros heredados sean inicializados correctamente.
*/

#include <iostream>

class Base {
	public:
    	Base(int x) {//Constructor de la clase Base
        	std::cout << "Constructor de Base llamado... x = " << x << std::endl;
    	}
};

class Derived : public Base {
	public:
    	Derived(int y) : Base(y) {
        	std::cout << "Constructor de Derived llamado... y = " << y << std::endl;
    	}
};

int main() {
    Derived d(10);//se crea un objeto pero de la clase derivada Derived
    return 0;
}

/*En este ejemplo, la clase Derived hereda de la clase Base. Cuando se crea un objeto de tipo Derived, se llama al constructor de Base primero
y luego al constructor de Derived. Esto se debe a que Derived necesita inicializar los miembros heredados de Base. 
En la salida del programa, verás que se imprime "Constructor de Base llamado" seguido de "Constructor de Derived llamado".
Es importante tener en cuenta que si la clase base no tiene un constructor predeterminado (sin argumentos), 
entonces debes asegurarte de llamar explícitamente a un constructor de la clase base en la lista de inicialización del constructor de la clase derivada. 
De lo contrario, se generará un error de compilación.
Esto demuestra que el constructor de la clase base se llamó correctamente desde el constructor de la clase derivada. 
Recuerda que esto solo funciona si la clase base tiene un constructor accesible que pueda tomar los parámetros adecuados.*/

