/*/*OPERADOR DE  RESOLUCION DE ALCANCE ::/*
El Operador de Resolución de Alcance ::  se usa para dar a un elemento como una clase o función un nombre único y totalmente calificado 
en todo el programa.
Imagine que define dos clases A y B y ambas tienen una función que toma cero parámetros y se llama go(). 
Ambas clases tienen implementaciones diferentes de go() pero ambas son útiles. Sin resolución de alcance, cuando escribe definiciones 
de las funciones go(), el compilador las verá a ambas y no sabría cuál está asociada con la clase A y cuál está asociada con la clase B.

Otros casos de uso de la resolución de alcance son cuando las clases, enumeraciones, constantes, etc. aparecen dentro 
de un espacio de nombres. Los espacios de nombres se usan con frecuencia en las bibliotecas 
porque es posible que los usuarios de las bibliotecas tengan un código existente con el mismo nombre que la biblioteca. 
El compilador no sabrá la diferencia entre ellos, por lo que todas las construcciones de la biblioteca se definen en un espacio de nombres.

Para utilizar un tipo o entidad en un espacio de nombres, los usuarios pueden referirse a ese tipo utilizando 
el operador de resolución de alcance y espacio de nombres.

    std::cout << “Hello World!!”; 

O pueden definir que cualquier referencia de funciones u objetos debe estar en el siguiente espacio de nombres y, 
por lo tanto, no necesitará anteponer el espacio de nombres cada vez que lo usen.

    using namespace std; 
    cout << “Hello World!!”; */

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
para especificar que queremos acceder a la variable de la clase MiClase.*/

