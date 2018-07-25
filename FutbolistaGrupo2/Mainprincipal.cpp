#include <iostream>
#include "Integrante.h"
#include "Futbolista.h"
#include "Masajista.h"
#include "Federacion.h"
#include <list>


using namespace std;

int menu(){
	system("cls");
    cout<<"**Menu**\n";
    cout<<"1.-Ingresar nuevo\n";
    cout<<"2.-Imprimir\n";
    cout<<"3.-Eliminar\n";
    cout<<"99.-Salir\n";
    cout<<"Escoja la opcion:";
int op;
cin>>op;
return op;
}

void nuevo(list<Integrante *> &lista){
	Integrante *objInt= new Integrante();
	objInt->leer();
	lista.push_back(objInt);
}

void imprimir(list<Integrante *> &integrantes){
	for(list<Intgrante *>::iterator indice= integrantes.begin();indice!=integrantes.end();indice++){
		(*indice)->imprimir();
	}
}

Integrante* buscar(list<Integrante *> lista, int codBuscar){
	Integrante *IntEncontrado=NULL;
	list<Integrante*>::iterator pos;
	pos=lista.begin();
	
	while(pos!=lista.end() && IntEncontrado==NULL){
	     if((*pos)->getId()==codBuscar){
	     	IntEncontrado=(*pos);
		 }	
		pos++;
	}
	
	return IntEncontrado;
}

int main(){
   list<Integrante *> integrantes;
   int op=0;
   int codBuscar;
   Integrante *IntBuscar=NULL;
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
	   	  cout<< "Ingrese el codigo a eliminar: ";
	   	  cin>>codBuscar;
	   	  IntBuscar=buscar(integrantes,codBuscar);
	   	  if(IntBuscar!=NULL){
	   	  	integrantes.remove(Buscar);
	   	  	cout<<"Departamento eliminado";
		  }else{
		  	cout<<"Departamento no encontrado ||"<<endl;
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
