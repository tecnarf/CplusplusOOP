/*Visibilidad de miembros de una clase derivada que hereda de manera publica de una clase base*/


/*Cuando una clase derivada hereda de manera pública de una clase base, los miembros públicos de la clase base se mantienen como miembros 
públicos en la clase derivada. Los miembros protegidos de la clase base se convierten en miembros protegidos en la clase derivada.
Esto significa que los miembros públicos de la clase base son accesibles tanto desde la clase derivada como desde cualquier parte del programa que tenga acceso a la clase derivada. Los miembros protegidos de la clase base son accesibles desde la clase derivada y desde cualquier clase derivada adicional.
en tanto que los atibutos protegidos son accesibles unicamente desde la clase Base y la clase derivada, entanto que los miembros privados
no son accesibles
Aquí tienes un ejemplo que muestra cómo se heredan y se mantienen los niveles de visibilidad en una herencia pública:*/

class Base {
	public:
    	int publicMember;
	protected:
    	int protectedMember;
	private:
    	int privateMember;
};

class Derived : public Base {
	public:
    	void accessBaseMembers() {
        	publicMember = 10;          // Acceso a miembro público heredado
        	protectedMember = 20;       // Acceso a miembro protegido heredado(solo desde la clase derivada)
        	//privateMember = 30;      // Error: Miembro privado no accesible en Derived
    }
};

int main() {
    Derived obj;
    obj.publicMember = 10;          // Acceso a miembro público heredado
    // obj.protectedMember = 20;   // Error: Miembro protegido no accesible en main() solo desde la clase derivada
    // obj.privateMember = 30;     // Error: Miembro privado no accesible en main() ni el lac clase derivada

    return 0;
}

/*En este ejemplo, la clase Base tiene un miembro público, un miembro protegido y un miembro privado. La clase Derived hereda públicamente 
de Base. Dentro de Derived, podemos acceder y modificar tanto el miembro público como el miembro protegido heredado. 
Sin embargo, el miembro privado de Base no es accesible directamente en Derived.

En main(), podemos acceder y modificar el miembro público heredado a través de un objeto Derived. Sin embargo, 
los miembros protegidos y privados de Base no son accesibles directamente fuera de la jerarquía de herencia.

Recuerda que la herencia pública mantiene la visibilidad de los miembros públicos y protegidos de la clase base en la clase derivada, 
pero no afecta la visibilidad de los miembros privados.*/

