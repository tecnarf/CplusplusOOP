/*El operador de resolución de ámbito (::) es utilizado en C++ para acceder a miembros de una clase o variables globales 
que están fuera del ámbito actual.
Cuando se utiliza el operador de resolución de ámbito, se especifica el nombre de la clase o el espacio de nombres 
seguido por el operador de resolución de ámbito y el nombre del miembro al que se quiere acceder. 
Esto permite diferenciar entre miembros con el mismo nombre en diferentes ámbitos.
Aquí tienes un ejemplo para ilustrar su uso:*/

#include <iostream>

// Creamos una clase llamada MiClase
class MiClase {
	public:
    	static int miVariable;
};

// Definimos la variable miVariable fuera de la clase con el operador de resolucion de ambito ::
int MiClase::miVariable = 10;

int main() {
	
    // Accedemos a la variable miVariable utilizando el operador de resolución de ámbito
    std::cout << MiClase::miVariable << std::endl;//si fuera protegido o privado daria error de compilacion

    return 0;
}
/*En este ejemplo, creamos una clase llamada MiClase con una variable estática miVariable. Luego, fuera de la clase, definimos e inicializamos
la variable miVariable con el valor 10. Dentro de la función main(), utilizamos el operador de resolución de ámbito para acceder a la variable
 miVariable de la clase MiClase y la imprimimos en la salida estándar.

El resultado de este programa será "10", ya que estamos accediendo a la variable miVariable utilizando el operador de resolución de ámbito 
para especificar que queremos acceder a la variable de la clase MiClase.

