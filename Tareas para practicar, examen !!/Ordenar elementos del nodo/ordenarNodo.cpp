#include <iostream>
#include "ordenarNodo.h"
using namespace std;

ordenarNodo::ordenarNodo(){
	raiz = 0;
}


bool ordenarNodo::esVacia(){
	if(raiz == 0 ){
		return true;
	}
	else return false;
}


void ordenarNodo::darNum(int dato){
	cout<<"Insertar Numero: "; cin>>dato;
	ordenar(dato);
}

void ordenarNodo::ordenar(int dato){
		Nodo *nuevo = new Nodo(dato);
	if(esVacia() == true){
		raiz = nuevo;
	}
	else{
		Nodo *aux, *ant;
		aux=raiz;
		
		
		while(aux->dato<=dato && aux->siguiente->dato ){
			ant =aux;
			aux=aux->siguiente;
		}
		 aux->siguiente =nuevo;
		 nuevo->anterior=aux;
	}
	
}



void ordenarNodo::mostrar(){
	if(esVacia() == true){
		cout<<"No hay nada"<<endl;
	}
	else{
		Nodo *aux;
		aux=raiz;
		
		while (aux!=0){
			cout<<"Nodo[" << aux->dato <<"]"<<endl;
			aux=aux->siguiente;
			
		}
		
	}
}
