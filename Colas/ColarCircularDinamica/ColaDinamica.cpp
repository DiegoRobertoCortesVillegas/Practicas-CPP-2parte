#include <iostream>
#include "ColaDinamica.h"
using namespace std;

ColaDinamica::ColaDinamica(){
	fin=0;
	frente = 0;
}

bool ColaDinamica::esVacia(){
	if(fin == 0){
		return true;
	}
	else return 0;
}

void ColaDinamica::encolar(int n){
	Nodo *nuevo =new Nodo(n);
	if(esVacia() == true){
		fin=nuevo;
		nuevo->siguiente =fin;
	}
	
	else{
		Nodo *aux;
		aux=fin;
		while(aux->siguiente!=fin){
			aux=aux->siguiente;
		}
		aux->siguiente = nuevo;
		nuevo->siguiente =fin;
	}
	
}

void ColaDinamica::desencolar(){
	if(esVacia() == true){
		cout<<"No hay nada"<<endl;
	}
	else if(fin->siguiente == fin){
	
			fin = 0;
		}
		else{
			Nodo *aux;
			aux = fin;
			
			while(aux->siguiente != fin){
				 aux=aux->siguiente;
			}
			    aux->siguiente = fin->siguiente;
			    fin =fin->siguiente;
		}
}
void ColaDinamica::mostrarCola(){
	if(esVacia() == true){
		cout<<"No hay nada " << endl;
	}
	else{
		Nodo *aux;
		aux=fin;
		
		while(aux->siguiente!= fin){
			cout<<"Nodo [" << aux->dato <<"]"<<endl;
			aux=aux->siguiente;
		}
		cout<<"Nodo [" << aux->dato <<"]"<<endl;
	}
}
