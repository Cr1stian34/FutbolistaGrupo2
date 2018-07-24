using namespace std;

class Futbolista: public Integrante{
	int dorsal;
	string demarcacion;
	
	public:
		Futbolista(int dorsal, string demarcacion, string id, string nombre, string apellido, int edad){
			this->dorsal=dorsal;
			this->demarcacion=demarcacion;
		}
		
		int getDorsal(){return dorsal;}
		string getdemarcacion(){return demarcacion;}

		void setDorsal(int dorsal){this->dorsal=dorsal;}
		void setDemarcacion(string demarcacion){this->demarcacion=demarcacion;}
		
		void leer(){
			cout << "\nIngresar datos del Futbolista";
			cout << "\nDorsal : "; cin >> dorsal;
			cout << "\nDemarcacion : "; cin >> demarcacion;
			
			string lid, lnombre, lapellido;
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
			cout << "\nIngresar datos del Futbolista";
			cout << "\nDorsal : " << dorsal;
			cout << "\nDemarcacion : " << demarcacion;
			
			cout << "\nId : " << this->getId();
			cout << "\nNombre : "<< this->getNombre();
			cout << "\nApellido : "<< this->getApellido();
			cout << "\nEdad : "<< this-> getEdad();
		}
			
};
