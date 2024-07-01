#include<iostream>
// Definición de la clase Persona
class Persona {
	public:
    	// Constructor
    	Persona(std::string n, int e) {//Constructor con parametros
        	nombre = n;
        	edad = e;
    }
	 // Métodos
    void presentarse() {
        std::cout << "Hola, mi nombre es " << nombre << " y tengo " << edad << " años." << std::endl;
    }

    void cumplirAnios() {
        edad++;
    }	
	private:
    	std::string nombre;
    	int edad;
};

int main() {
    // Crear un objeto de la clase Persona
    Persona persona1("Juan", 30);

    // Llamar a los métodos del objeto
    persona1.presentarse();
    persona1.cumplirAnios();
    persona1.presentarse();

    return 0;
}
