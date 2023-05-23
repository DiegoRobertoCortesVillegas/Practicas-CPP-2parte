#include <iostream>
using namespace std;

class ListaEnlazada{
	// Elemto de la lista
	private: 
	class Nodo{
		 //atributos
		public: 
		int dato;
		Nodo *siguiente; //siguiente elemento
		
		//metodos
		public:
			Nodo(){
				siguiente = 0; //constructor
			}
			~Nodo();
		
	};
	
	Nodo *Raiz;
	
	public:
		ListaEnlazada();
		
		~ListaEnlazada();
		
		bool esVacia();
		void insertarInicio(int dato);
		void insertarFinal(int dato );
		void eliminarInicio();
		void eliminarFina();
		void mostrar();
		
	
};
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

void ListaEnlazada::insertarInicio(int dato){
	Nodo *nuevo = new Nodo(dato);
	if (esVcaia() == true){
	w	Raiz = nuevo;
	}
	else{
		nuevo->siguiente = raiz;
		Raiz=nuevo;
	}
	
}

void ListaEnlazada::insertarFinal(int dato){
	
	Nodo *nuevo = new Nodo(dato);
	
	if(esVacia() == true){
		Raiz=nuevo
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
		Raiz = 0;
	}
}

void ListaEnlazada::eliminarFinal(){
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

void mostrar(){
	if(esVacia() == true){
		cout<<"No hay nada"<<endl;
	}
	else{
		Nodo *aux;
		aux=Raiz;
		
		while (aux->siguiente != 0){
			int i = 0;
			cout<<"Nodo[" << i <<"]"<<" = "<< aux->dato;
			aux=aux->siguiente;
			i++;
		}
		
	}
}

int main(){
	ListaEnlazada L1;
	cout<<"\t\t\t Inicio \n"<<endl;
	L1.insertarInicio(1);
	L1.insertarInicio(0);
	cout<<endl;
	L1.insertarFinal(2);
	L1.insertarFinal(3);
	system("pause");
	system("cls");
	L1.mostrar();
	
	
	
	
	return 0;
}
