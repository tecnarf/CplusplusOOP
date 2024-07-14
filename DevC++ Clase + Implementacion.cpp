#include <iostream>
#include<sstream>//para el toString()

using namespace std;

class MiClase{
	
	public:
		
		MiClase();//constructor sin  parametros
		MiClase(int _atributo_1, string _atributo_2);//constructor con parametros
		
		//virtual ~MiClase //Destructor 
							//Obs:Si se va a definir el destructor 
							//En DevC++ es necesario implementarlo 
							//En CodeBlocks se define pero puede quedar sin implementacion 
		
		int Getatributo_1();//La definicion de los metodos finaliza con ;  
		void Setatributo_1(int val);
		string Getatributo_2();
		void Setatributo_2(string val);
		
		string toString();
		
		int mi_metodo_1();//retorna algun valor y que ya tiene su variable de almacenamiento
		void mi_metodo_2();//procedimiento
		
	protected:
		
	private:
		int atributo_1;
		string atributo_2;
	
};//La llave que cierra la clase finaliza con ;

//Constructores
MiClase::MiClase(){
	atributo_1=0;
	atributo_2="cadena_por_defecto";
}//En la implementacion de  los metodos no se finaliza con ;
MiClase::MiClase(int _atributo_1,  string _atributo_2){
	atributo_1=_atributo_1;
	atributo_2=_atributo_2;
}

//Getters y Setters
int MiClase::Getatributo_1(){return atributo_1;}
void MiClase::Setatributo_1(int val){atributo_1=val;}
string MiClase::Getatributo_2(){return atributo_2;}
void MiClase::Setatributo_2(string val){atributo_2=val;}

//toString()
string MiClase::toString(){
	ostringstream aux;
	aux<<"Atributos: "<<"\nAtributo_1: "<<atributo_1<<"\nAtributo_2: "<<atributo_2;
	return aux.str();
}

//Metodos especificos de la clase
int MiClase::mi_metodo_1(){
	//implementacion
	//return
}
void MiClase::mi_metodo_2(){
	//procedimiento
}

int main(){
	
	///CREACION DE OBJETOS SIMPLE 
	MiClase c1;//instanciado por el constructor sin parametros
	MiClase c2(1001, "cadena");//instanciado por el constructor con parametros
	cout<<c1.toString()<<endl;//se usa  cout por toString no imprime, simplemente retorna 
	cout<<c2.toString()<<endl;
	cout<<c1.mi_metodo_1()<<endl;//se imprime lo que  retorna mi_metodo_1
	c2.mi_metodo_2();//se realiza lo que indica el procedimiento mi_metodo_2
	
	///CREACION DE OBJETOS POR PUNTEROS
	MiClase *c3;
	MiClase *c4;
	c3=new MiClase();//instanciado por puntero y con el constructor sin parametros con new
	c4=new MiClase(1111, "otra_cadena");//instanciado por puntero y con el constructor con parametros con new
	cout<<c3->toString()<<endl;//para usar un  metodo de un objeto instanciado por puntero se debe usar ->
	cout<<c4->toString()<<end;
	cout<<c3->mi_metodo_1()<<endl;//el metodo retorna algo
	c4->mi_metodo_2();//es un procedimiento (void)

	system("pause");
	return 0;
}
