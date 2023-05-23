#include <iostream>
#include "ListaCS.h"
using namespace std;

ListaCS::ListaCS(){
	raiz = 0;
}

bool ListaCS::esVacia(){
	if(raiz == 0){
		return true;
	}
	else{
	 return false;
    }
}

void ListaCS::insertarInicio(int e){
	Nodo *nuevo = new Nodo(e);
	if(esVacia() == true){
		
		raiz=nuevo;
		nuevo->siguiente = raiz;
	}
	else{
		Nodo *aux;
		aux = raiz;
		
		while(aux->siguiente != raiz){
			aux = aux->siguiente;
	    }
       
	   nuevo->siguiente = raiz;
	   raiz = nuevo;
	   aux->siguiente= raiz;	
    }
}

void ListaCS::insertarFinal(int e){
	Nodo *nuevo = new Nodo(e);
	if(esVacia() == true){
		raiz = nuevo;
		nuevo->siguiente = raiz;
	}
	else{
		Nodo *aux;
		aux = raiz;
		
		while(aux->siguiente != raiz){
			aux=aux->siguiente;
		}
		aux->siguiente = nuevo;
		nuevo->siguiente = raiz;
	}
}

void ListaCS::eliminarInicio(){
	if(esVacia() == true){
		cout<<"No hay nada"<<endl;
	}
	else if(raiz->siguiente == 0){
	
			raiz = 0;
		}
		else{
			Nodo *aux;
			aux = raiz;
			
			while(aux->siguiente != raiz){
				 aux=aux->siguiente;
			}
			    aux->siguiente = raiz->siguiente;
			    raiz=raiz->siguiente;
		}
}

void ListaCS::eliminarFinal(){
	if(esVacia() == true){
		cout<<"No hay nada"<<endl;
	}
	else if(raiz->siguiente == 0){
	
			raiz = 0;
		}
		else{
			Nodo *aux, *ant;
			aux=raiz;
			
			while(aux->siguiente !=raiz){
				ant =aux;
				aux=aux->siguiente;
			}
			
			ant->siguiente=raiz;
			aux->siguiente = 0;
		}
}

void ListaCS::mostrar(){
	if(esVacia() == true){
		cout<<"No hay nada " << endl;
	}
	else{
		Nodo *aux;
		aux=raiz;
		
		while(aux->siguiente!= raiz){
			cout<<"Nodo [" << aux->dato <<"]"<<endl;
			aux=aux->siguiente;
		}
		cout<<"Nodo [" << aux->dato <<"]"<<endl;
	}
}
