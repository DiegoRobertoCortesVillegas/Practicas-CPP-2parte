#include "SumaLeatoria.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;


SumaLeatoria::SumaLeatoria(){
	fin = 0;
	frente = 0;
	acierto = 0;
	respuesta = 0;
}

bool SumaLeatoria::sinSuma(){
	if(fin == 0){
		return true;
	}
	else return false;
}

void SumaLeatoria::realizarSuma(){
	    int dato1=2, dato2 =2;
      	 /*rand(time(NULL)); //numero aleatorio
	        dato1 = 1 + rand()%(101-1);
	        dato2 = 1+ rand()%(101-1);*/
	        
	        cout<<"Resuelve: \n"<<endl;
	        cout<< dato1<<"+"<< dato2;
	        resultado = dato1 + dato2;
	        cout<<"Respuesta = "; cin>>respuesta;
	        
	        if(respuesta == resultado){
	        	acierto ++;
	        	cout<< "Correcto! \n"<<endl;
	        	cout<<"Numero de aciertos: "<< acierto << endl;
			}
			else{
				cout<<"Incorrecto"<<endl;
				encolar(dato1,dato2);
			}
	  
	  	
}


void SumaLeatoria::encolar(int dato1, int dato2){
	Nodo *nuevo = new Nodo(dato1,dato2);
if(sinSuma() == true){
	fin = nuevo;
	nuevo->siguiente = fin;
}
else {
	Nodo *aux;
	aux = fin;
	
	while(aux->siguiente != fin){
		aux=aux->siguiente;
	}
	aux->siguiente = nuevo;
	nuevo->siguiente = fin;
}

}


void SumaLeatoria::mostrarp(){
	int dato1,dato2;
	cout<<"Numero de operaciones a resolver: "; cin>>numProblemas;
	for(int i = 1; i<= numProblemas; i++){
		realizarSuma();
	}
}
void SumaLeatoria::mostrar(){
	if(sinSuma() == true){
		cout<<"No hay problemas acolados"<<endl;
	}
	else{
		Nodo *aux;
		aux;
		
		while(aux!= fin){
		cout<< aux->dato1 << "+" << aux->dato2 << endl;
		aux = aux->siguiente; 
		}
		
	}
}

