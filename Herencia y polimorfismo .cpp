#include<iostream>//incluimos la libreria o biblioteca input/output stream que habilita el flujo de entrada y salida de datos por teclado
#include<sstream>//para poder usar ostringstream en el metodo toString()

using namespace std;//para no tener que anteponer std:: a cout, cin, endl, etc, por ejemplo (std::cout)
					//pero igualmente podemos programar sin usar el namespace ofrecido por C++ aplicando lo anteriormente mencionado
					
namespace Administracion{

	class Empleado{//Clase abstracta pues posee al menos un metodo abstracto
				  //No se podra instanciar directamente
		
		public: //sera posible acceder a estos miembros mediante el operador "."
		
			const static unsigned int SALARIO_MIN = 3000000;//constante(tipo especial de miembro(atributo o metodo)o variable 
														    //constante de tipo estatica)
			
			Empleado(){//Constructor sin parametros o constructor por defecto
				ci=0;
				nombre = "noname";
				apellido = "noname";
				salariobruto=0;
			}
			Empleado(int _ci, string _nombre, string _apellido, int _salariobruto){
				ci = _ci;
				nombre = _nombre;
				apellido = _apellido;
				salariobruto = _salariobruto;
				}
			
			/*virtual ~Empleado(){}//Destructor(es un metodo virtual, por tanto puede ser polimorfico)*/
			
			int Getci(){return ci;}//los metodos/funciones dentro de la clase no llevan un punto y coma al cerrar la llave
			void Setci(int val){ci = val;}
			string Getnombre(){return nombre;}
			void Setnombre(string val){nombre = val;}
			string Getapellido(){return apellido;}//un return siempre finaliza con un ";"
			voidSetApellido(string val){apellido = val;}
			unsigned int Getsalariobruto(){return salariobruto;}
			void Setsalariobruto(unsigned int val){salariobruto = val;}
			
			virtual int calcularSalario()=0;//Al tener virtual previo a la firma del metodo sabemos que puede ser polimorfico
			void cobrarSalario(){cout<<"Extraccion existosa!"<<endl;}//metodo virtual puro o metodo abstracto(puede ser polimorfico tambien)
			
			virtual string toString(){//puede ser polimorfico porque lleva la palabra reservada virtual
				ostringstream aux; //se define una variable aux de tipo ostringstream(output string stream/flujo de salida tipo string)
				aux<<"CI: "<<ci<<" - "<<"Nombre: "<<nombre<<" - "<<"Apellido: "<<apellido<<" - "<<"Salario bruto: "<<salariobruto;
				return aux.str();//se usa el metodo str() de la variable/aux que hemos definido
			}
			
		protected://un grado de encapsulacion intermedio
			unsigned int salariobruto;
		
		private: //mayor grado de encapsulacion
				 //no sera posible acceder a ellos mediante el operador "."(punto) en comparacion con las estructuras de datos convencional
			int ci;
			string nombre;
			string apellido;		
	};
	
	class Gerente : public Empleado{//La clase Gerente deriva de la clase Empleado. Es una subclase de la superclase Empleado
									//La herencia se declara como public, entonces la accesibilidad de los miembros de la clase base 
									//se mantiene de la siguiente manera:
										//Miembros públicos de Empleado: Siguen siendo públicos en Gerente.
										//Miembros privados de Empleado: Siguen siendo privados en Gerente.
										//Miembros protegidos de Empleado: Siguen siendo protegidos en Gerente.
									//Es decir, la palabra clave public en la herencia no afecta la encapsulación de los miembros 
									//de la clase base Empleado. 
									//Todos los niveles de acceso se mantienen tal como estaban definidos originalmente en la clase base.
		public:
			
			Gerente(){}//Constructor por defecto de la clase Gerente
			Gerente(int _salariobruto){salariobruto = _salariobruto;}//Constructor de la subclase Gerente
																	//Esto quiere decir que cuando creemos una instancia de 
																	//gerente este debera ser de esta forma Gerente g(5000000)
																	//y 5000000 se asignara al atributo salariobruto
			
			/*virtual ~Gerente(){}*/
			
			int calcularSalario(){return salariobruto*0.91;}//Sobreescribe el metodo virtual de la clase base Empleado
									        				  //que calcula el salario neto del Empleado que es Gerente
			
			
			string toString(){//sobreescribe el metodo     
			ostringstream aux;
			aux<<Empleado::toString();
			return aux.str();
			}          
	};
}

using namespace Administracion;

int main(){
	
	Empleado *e;//Usamos la clase empleado del espacio de nombres(contenedor de nombres) Administracion 
			    //Sin using namespace Administracion debeeriamos escribir Administracion::Empleado *e
			    //Es un puntero de tipo Empleado o puntero a Empleado (es una variable que guarda direcciones de memoria 
			    //de objetos de la clase base Empleado o sus objetos de sus clases derivadas )
							
	Gerente g(5000000);//LLamado al constructor con parametros de Gerente que inicializa uno solo de los atributos de Gerente
					   //que es salariobruto(heredado de Empleado)
	e = &g;///En e se puede guardar un objeto de la clase Gerente por que un gerente es un empleado por la relacion de herencia 
	
	cout<<"Datos del Empleado: "<<e->toString()<<endl;
	cout<<"Salario a neto a cobrar: "<<e->calcularSalario()<<endl;
	e->cobrarSalario();
	
	
	system("pause");
	return 0;
	}
