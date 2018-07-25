using namespace std;

class Federacion:public Integrante{
	int idf;
	string nombref;
	
	public:
		Federacion(){}
		Federacion(int id, string nombre, string apellido, int edad,
		int idf, string nombref):Integrante(id,nombre,apellido,edad){
			this->idf=idf;
			this->nombref=nombref;
		}
		
		//metodos de acceso
		int getIdf(){
			return idf;
		}
		string getNombref(){
			return nombref;
		}
		
		void setIdf(int idf){
			this->idf=idf;
		}
		void setNombref(string nombre){
			this->nombref=nombref;
		}
		
		void leer();
		void imprimir();
};

void Federacion::leer(){
	cout<<"***INGRESAR LOS DATOS DE LA FEDERACION***\n";
	int id, edad;
	string nombre, apellido;
	cout<<"Id del integrante: "; cin>>id;
	cout<<"Nombre del integrante: "; cin>>nombre;
	cout<<"Apellido del integrante: "; cin>>apellido;
	cout<<"Edad del integrante: "; cin>>edad;
	cout<<"Id de la federacion: "; cin>>idf;
	cout<<"Nombre de la federeacion: "; cin>>nombref;
	
	this->setId(id);
	this->setNombre(nombre);
	this->setApellido(apellido);
	this->setEdad(edad);
}

void Federacion::imprimir(){
	cout<<"***DATOS DE LA FEDERACION***\n";
	cout<<"Id del integrante: "<<this->getId();
	cout<<"Nombre del integrante: "<<this->getNombre();
	cout<<"Apellido del integrante: "<<this->getApellido();
	cout<<"Edad del integrante: "<<this->getEdad();
	cout<<"Id de la federacion: "; cin>>idf;
	cout<<"Nombre de la federeacion: "; cin>>nombref;
}
