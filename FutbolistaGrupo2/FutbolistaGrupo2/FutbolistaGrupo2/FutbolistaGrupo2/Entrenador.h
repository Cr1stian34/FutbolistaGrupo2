#include "Federacion.h"
using namespace std;

class Entrenador:public Integrante{
	private:
		Federacion federacion;
		
	public:
		Entrenador(){}
		Entrenador(int id, string nombre,string apellido, int edad,
		Federacion federacion):Integrante(id,nombre,apellido,edad){
			this->federacion=federacion;
		}
		
		Federacion getFederacion(){
			return federacion;
		}
		void setFederacion(federacion){
			this->federacion=federacion;
		}
		void leer();
		void imprimir();	
};

void Entrenador::leer(){
	int id_int, edad_int;
	string nombre_int, apellido_int; 
	cout<<"INGRESAR DATOS DEL INTEGRANTE";
	cout<<"Id: "; cin>>id_int;
	cout<<"Nombre: "; cin>>nombre_int;
	cout<<"Apellido: "; cin>>apellido_int;
	cout<<"Edad: "; cin>>edad_int;
	Federacion::leer();
	
	this->setId(id_int);
	this->setNombre(nombre_int);
	this->setApellido(apellido_int);
	this->setEdad(edad_int);	
	
}

void Entrenador::imprimir(){
	out<<"DATOS DEL INTEGRANTE";
	cout<<"Id: "<<this->getId();
	cout<<"Nombre: "<<this->getNombre();
	cout<<"Apellido: "<<this->getApellido();
	cout<<"Edad: "<<this->getEdad();
	Federacion::mostrar();
}

