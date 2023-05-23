#include <iostream>
#include "PilaDinamica.h"
using namespace std;

PilaDinamica::PilaDinamica(){
	cima = 0;
}

bool PilaDinamica::esVacia(){
	if (cima == 0){
		return true;
	}
	else 
	return false;
}

void PilaDinamica::apilar(int n){
	Nodo *nuevo = new Nodo(n);
	if (esVacia() == true){
		cima = nuevo;
	}
	else{
		nuevo->siguiente = cima;
		cima=nuevo;
	}
	
}

void PilaDinamica::desapilar(){
	if ( esVacia() == true){
		cout<<endl<<"No hay nada que eliminar";
	}
	else{
		cima=cima->siguiente;
	}
}

void PilaDinamica::mostrar(){
	if(esVacia() == true){
		cout<<"No hay nada"<<endl;
	}
	else{
		Nodo *aux;
		aux=cima;
		int i=0;
		while (aux!=0){
			
			cout<<"Nodo[" << i <<"]"<<" = "<< aux->dato << endl;
			aux=aux->siguiente;
			i++;
			
		}
		
	}
}

