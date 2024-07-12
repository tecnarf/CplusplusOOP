/*Los getters y setters son m�todos utilizados para acceder y modificar los miembros privados de una clase. 
Son una pr�ctica com�n en C++ para mantener la encapsulaci�n y el control sobre los datos de una clase.
Un getter es un m�todo que proporciona acceso a un miembro privado de una clase. Permite obtener el valor de ese miembro desde fuera de la clase. 
Por otro lado, un setter es un m�todo que permite modificar el valor de un miembro privado de la clase.*/

#include <iostream>

class MyClass {
	private:
    	int myInt;

	public://los getters y setters se declaran como miembros publicos para que puedan
		   //ser accedidos desde otra parte del programa, en este caso el main()
		   //los getters y setters tambi�n pueden tener l�gica adicional si es necesario. 
		   //Por ejemplo, puedes agregar validaciones o realizar otras acciones antes de obtener o establecer el valor de un miembro.
    	int getMyInt() const {
        	return myInt;
    	}

    	void setMyInt(int value) {
        	myInt = value;
    	}
};

int main() {
    MyClass obj;
    obj.setMyInt(42);
    std::cout << "Valor de myInt: " << obj.getMyInt() << std::endl;
    return 0;
}
