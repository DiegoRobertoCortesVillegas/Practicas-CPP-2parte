#include <iostream>
#include "ListaDoble.h"
using namespace std;

ListaDoble::ListaDoble(){
	raiz = 0;
}

bool ListaDoble::esVacia(){
	if(raiz == 0 ){
		return true;
	}
	else return false;
}

void ListaDoble::insertarInicio(int n){
	Nodo *nuevo = new Nodo(n);
	if(esVacia() == true){
		raiz = nuevo;
	}
	else{
		nuevo->siguiente =raiz;
		raiz->anterior = nuevo;
		raiz = nuevo;
	}
}

void ListaDoble::insertarFinal(int n){
	Nodo *nuevo = new Nodo(n);
	if(esVacia() == true){
		raiz = nuevo;
	}
	else{
		Nodo *aux;
		aux=raiz;
		
		while(aux->siguiente != 0){
			aux=aux->siguiente;
		}
		 aux->siguiente =nuevo;
		 nuevo->anterior=aux;
	}
}

void ListaDoble::eliminarInicio(){
	if(esVacia() == true){
		cout<<"No hay nada, amigo." << endl;
	}
	else  if(raiz->siguiente == 0){
	
			raiz = 0;
		}
		else{
		raiz=raiz->siguiente;
		raiz->anterior=0;
	}	
}

void ListaDoble::eliminarFinal(){
	if(esVacia() == true){
		cout<<"No hay nada"<<endl;
	}
	else if(raiz->siguiente == 0){
	
			raiz = 0;
		}
		else{
		Nodo *aux;
		Nodo *ant;
		aux=raiz;
		
		while(aux->siguiente != 0){
			ant=aux;
			aux=aux->siguiente;
		}
		
		ant->siguiente=0;
		aux->anterior =0;
	}
}

void ListaDoble::mostrar(){
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

