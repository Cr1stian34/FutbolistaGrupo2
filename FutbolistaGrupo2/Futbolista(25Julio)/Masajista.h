using namespace std;

class Masajista: public Integrante{
	string titulacion;
	string aniosExperiencia;
	
	public:
		Masajista(){
		}
		
		Masajista(string titulacion, string aniosExperiencia, int id, string nombre, string apellido, int edad):Integrante(id, nombre, apellido, edad){
			this->titulacion=titulacion;
			this->aniosExperiencia=aniosExperiencia;
		}
		
		string getTitulacion(){return titulacion;}
		string getAniosExperiencia(){return aniosExperiencia;}

		void setTitulacion(string titulacion){this->titulacion=titulacion;}
		void setAniosExperiencia(string aniosExperiencia){this->aniosExperiencia=aniosExperiencia;}
		
		void leer(){
			cout << "\n ----- Ingresar datos de Masajista ----------";
			cout << "\nTitulacion : "; cin >> titulacion;
			cout << "\nAniosExperiencia : "; cin >> aniosExperiencia;
			
			int lid;
			string lnombre, lapellido;
			int ledad;
			
			cout << "\nId : "; cin>> lid;
			cout << "\nNombre : "; cin >>lnombre;
			cout << "\nApellido : "; cin >>lapellido;
			cout << "\nEdad : "; cin >>ledad;
			
			this->setId(lid);
			this->setNombre(lnombre);
			this->setApellido(lapellido);
			this->setEdad(ledad);
		}
		
		void imprimir(){
			cout << "\n -------- Impresion datos del Masajista ----------";
			cout << "\nTitulacion : " << titulacion;
			cout << "\nAniosExperiencia : " << aniosExperiencia;
			
			cout << "\nId : " << this->getId();
			cout << "\nNombre : "<< this->getNombre();
			cout << "\nApellido : "<< this->getApellido();
			cout << "\nEdad : "<< this-> getEdad();
		}
			
};
