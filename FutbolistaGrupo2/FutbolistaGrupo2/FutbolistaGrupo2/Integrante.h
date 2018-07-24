using namespace std;
class Integrante{
	int id;
	string nombre;
	string apellido;
	int edad;
	public:
		//Constructores
		Integrante(){
		}
		Integrante(int id,string nombre, string apellido, int edad){
			this->id=id;
			this->nombre=nombre;
			this->apellido=apellido;
			this->edad=edad;
		}
		//Metodos Acceso
		int getId(){
			return id;
		}
		string getNombre(){
			return nombre;
		}
		string getApellido(){
			return apellido;
		}
		int getEdad(){
			return edad;
		}
		//Metodos Modificacion
		void setId(int id){
			this->id=id;
		}
		void setNombre(string nombre){
			this->nombre=nombre;
		}
		void setApellido(string apellido){
			this->apellido=apellido;
		}
		void setEdad(int edad){
			this->edad=edad;
		}
		//Metodos Abstractos
		virtual void leer()=0;
		virtual void imprimir()=0;
};
