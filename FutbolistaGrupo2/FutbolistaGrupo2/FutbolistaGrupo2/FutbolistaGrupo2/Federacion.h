using namespace std;

class Federacion{
	int idf;
	string nombref;
	
	public:
		Federacion(){}
		Federacion(int idf, string nombref){
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
	cout<<"Id de la federacion: "; cin>>idf;
	cout<<"Nombre de la federeacion: "; cin>>nombref;
}

void Federacion::imprimir(){
	cout<<"***DATOS DE LA FEDERACION***\n";
	cout<<"Id de la federacion: "; cin>>idf;
	cout<<"Nombre de la federeacion: "; cin>>nombref;
}
