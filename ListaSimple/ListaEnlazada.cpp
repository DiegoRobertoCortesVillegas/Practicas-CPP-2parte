#include<iostream>
#include "ListaEnlazada.h"
using namespace std;


ListaEnlazada::ListaEnlazada(){
	Raiz = 0;
}


bool ListaEnlazada::esVacia(){
	if (Raiz == 0){
		return true;
	}
	else 
	return false;
}

void ListaEnlazada::insertarInicio(int n){
	Nodo *nuevo = new Nodo(n);
	if (esVacia() == true){
		Raiz = nuevo;
	}
	else{
		nuevo->siguiente = Raiz;
		Raiz=nuevo;
	}
	
}

void ListaEnlazada::insertarFinal(int n){
	
	Nodo *nuevo = new Nodo(n);
	
	if(esVacia() == true){
		Raiz=nuevo;
	}
	else{
		Nodo *aux;
		aux=Raiz;
		
		while(aux->siguiente != 0){
			aux = aux->siguiente;
		}
		aux->siguiente = nuevo;
		
	}
}

void ListaEnlazada::eliminarInicio(){
	if ( esVacia() == true){
		cout<<endl<<"No hay nada que eliminar";
	}
	else{
		Raiz=Raiz->siguiente;
	}
}

void ListaEnlazada::eliminarFina(){
	if(esVacia() == true){
		cout<<endl<<"No hay nada que eliminar";
		
	}
	else if(Raiz->siguiente == 0){
		Raiz=0;
	}
	else{
		Nodo *aux;
		Nodo *ant;
		aux=Raiz;
		
		while(aux->siguiente !=0){
			ant=aux;
			aux=aux->siguiente;
		}
		ant->siguiente =0;
		
	}
	
}

void ListaEnlazada::mostrar(){
	if(esVacia() == true){
		cout<<"No hay nada"<<endl;
	}
	else{
		Nodo *aux;
		aux=Raiz;
		
		while (aux!=0){
			int i;
			cout<<"Nodo[" << i <<"]"<<" = "<< aux->dato << endl;
			aux=aux->siguiente;
			i++;
			
		}
		
	}
}
