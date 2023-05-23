#include <iostream>
#include "ListaCD.h"

using namespace std;

ListaCD::ListaCD(){
	raiz = 0;
}

bool ListaCD::esVacia(){
	if(raiz == 0){
		return true;
	}
	else return false;
}

void ListaCD::insertarInicio(int n){
	Nodo *nuevo = new Nodo(n);
	
	if(esVacia() == true){
		
		raiz= nuevo;
		nuevo->siguiente = raiz;
		nuevo->anterior = raiz;
	}
	else{
		nuevo->siguiente= raiz;
		raiz->anterior->siguiente =nuevo;
		raiz->anterior= nuevo;
		raiz = nuevo;
	}
}

void ListaCD::insertarFinal(int n){
	Nodo *nuevo = new Nodo(n);
	if(esVacia() == true){
		raiz=nuevo;
		raiz->siguiente = raiz;
		raiz->anterior = raiz;
	}
	else{
		Nodo *aux;
		aux = raiz;
		
		while(aux->siguiente != raiz){
			aux =aux->siguiente;
		}
		aux->siguiente = nuevo;
		nuevo->siguiente = raiz;
		raiz->anterior = nuevo;
		nuevo->anterior = aux; 
	}
	
}

void ListaCD::eliminarInicio(){
	if(esVacia() == true){
		cout<<"No hay Naranjas!"<<endl;
	}
	else if(raiz->siguiente == raiz){
		raiz=0;
	}
	else{
		raiz->anterior->siguiente =raiz->siguiente;
		raiz->siguiente->anterior = raiz->anterior;
		raiz->anterior=0;
		raiz =raiz->siguiente;
	}
	
	
}

void ListaCD::eliminarFinal(){
	if(esVacia() == true){
		cout<<"No hay Naranjas!"<<endl;
	}
	else if(raiz->siguiente == raiz){
		raiz = 0;
	}
	else{
		Nodo *aux;
		Nodo *ant;
		
		aux=raiz;
		
		while (aux->siguiente != raiz){
			ant=aux;
			aux = aux->siguiente;
		}
		
		ant->siguiente = raiz;
		raiz->anterior = ant;
		aux=0;
	}
}
	
void ListaCD::mostrar(){
	      if(esVacia() == true){
	      	cout<<"No hay nada"<<endl;
		  }
		  else{
		  	Nodo *aux;
		  	aux=raiz;
		  	
		  	while(aux->siguiente != raiz){
		  		cout<<"Nodo [" << aux->dato <<"]"<<endl;
		  		aux=aux->siguiente;
			  }
			  cout<<"Nodo [" << aux->dato <<"]"<<endl;
			  
		  }
}


