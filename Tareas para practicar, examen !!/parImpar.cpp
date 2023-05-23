#include <iostream>
#include "parImpar.h"
using namespace std;

parImpar::parImpar(){
	raiz=0;
}

bool parImpar::esVacia(){
	if (raiz == 0){
		return true;
	}
	else 
	return false;
}

void parImpar::comparar(int numero){
	cout<<"Inserta un numero: "; cin>>numero;

	if(numero%2 == 0){
		cout<<" El numero es par y se insertara al inicio"<<endl;
		insertarInicio(numero);
	}
	else{
		
		cout<<"El numero es Impar y se insertara al final"<<endl;
		insertarFinal(numero);
	}
}

void parImpar::insertarInicio(int dato){
	Nodo *nuevo = new Nodo(dato);
	if (esVacia() == true){
		raiz = nuevo;
	}
	else{
		nuevo->siguiente = raiz;
		raiz=nuevo;
	}
	
}

void parImpar::insertarFinal(int dato){
	
	Nodo *nuevo = new Nodo(dato);
	
	if(esVacia() == true){
		raiz=nuevo;
	}
	else{
		Nodo *aux;
		aux=raiz;
		
		while(aux->siguiente != 0){
			aux = aux->siguiente;
		}
		aux->siguiente = nuevo;
		
	}
}

void parImpar::eliminarInicio(){
	if ( esVacia() == true){
		cout<<endl<<"No hay nada que eliminar";
	}
	else{
		raiz=raiz->siguiente;
	}
}
void parImpar::eliminarFinal(){
	if(esVacia() == true){
		cout<<endl<<"No hay nada que eliminar";
		
	}
	else if(raiz->siguiente == 0){
		raiz=0;
	}
	else{
		Nodo *aux;
		Nodo *ant;
		aux=raiz;
		
		while(aux->siguiente !=0){
			ant=aux;
			aux=aux->siguiente;
		}
		ant->siguiente =0;
		
	}
	
}

void parImpar::mostrar(){
	if(esVacia() == true){
		cout<<"No hay nada"<<endl;
	}
	else{
		Nodo *aux;
		aux=raiz;
		int i=0;
		while (aux!=0){
			
			cout<<"Nodo[" << i <<"]"<<" = "<< aux->dato << endl;
			aux=aux->siguiente;
			i++;
			
		}
		
	}
}
