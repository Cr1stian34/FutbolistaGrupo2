#include <iostream>
#include "Integrante.h"
#include "Entrenador.h"
#include "Masajista.h"
#include "Futbolista.h"
#include <list>

using namespace std;

int menu(){
  system("color a");
  system("cls");
  cout<<"**Menu**\n";
  cout<<" 1.-Ingresar nuevo\n";
  cout<<" 2.-Listar\n";
  cout<< "3.Eliminar"<<endl;
  cout<<"99.-Salir\n";
  cout<<"Escoja la opcion:";
  int op;
  cin>>op;
 return op;
}

void nuevo(list<Integrante *> &lista){
	int tipoIntegrante;
	cout<< "\nTipo de Integrante a ingresar (1.Futbolista,2. Entrenador,3. Masajista): ";
	cin>>tipoIntegrante;
	Integrante *integra;
	switch(tipoIntegrante){
		case 1:
			integra= new Futbolista();
			integra->leer();
			lista.push_back(integra);
			break;
		case 2:
			integra= new Entrenador();
			integra->leer();
			lista.push_back(integra);
			break;
		case 3:
			integra= new Masajista();
			integra->leer();
			lista.push_back(integra);
			break;
		default:
			cout<< "    Opcion desconocida  "<<endl;
			break;
	}
}

void imprimir(list<Integrante *> &integrantes){
	for(list<Integrante *>::iterator indice= integrantes.begin();indice!=integrantes.end();indice++){
		(*indice)->imprimir();
	}
}

Integrante* buscar(list<Integrante *> lista, int codBuscar){
	Integrante *intEncontrado=NULL;
	list<Integrante*>::iterator pos;
	pos=lista.begin();
	
	while(pos!=lista.end() && intEncontrado==NULL){
	     if((*pos)->getId()==codBuscar){
	     	intEncontrado=(*pos);
		 }	
		pos++;
	}
	
	return intEncontrado;
}


int main(){
   list<Integrante *> integrantes;
   int op=0;
   int codBuscar;
   Integrante *intBuscar=NULL;
  do{
     op=menu();
     switch(op){
       case 1:
          nuevo(integrantes);
          break;
       case 2:
          imprimir(integrantes);
         break;
	   case 3:
	   	  cout<< "Ingrese el id a eliminar: ";
	   	  cin>>codBuscar;
	   	  intBuscar=buscar(integrantes,codBuscar);
	   	  if(intBuscar!=NULL){
	   	  	integrantes.remove(intBuscar);
	   	  	cout<<"Integrante eliminado";
		  }else{
		  	cout<<"Integrante no encontrado ||"<<endl;
		  }
	   	  break;
       case 99:
          cout<<"Hasta pronto!!"<<endl;
          break; 
       default:
          cout<<"Opcion desconocida!!"<<endl;
          break; 
       }
       
       system("pause"); 
   }while(op!=99);
   
return 0;
}
