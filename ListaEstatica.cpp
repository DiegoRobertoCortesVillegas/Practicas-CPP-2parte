#include <iostream>
using namespace std;
const int capacidad =50;

class ListaEstatica{
	
	private:
		int vector[capacidad];
		int fin;
		
		
		public:
			
			ListaEstatica();
			bool esVacia();
			bool esLlena();
			void insertarInicio(int elemento);
			void insertarFinal(int elemento);
			void eliminarInicio();
			void eliminarFinal();
			void mostrar();
			
};

ListaEstatica::ListaEstatica(){
	fin= -1;
}

bool ListaEstatica::esVacia(){
	if(fin == -1){
		return true;
	}
	else return false;
}

bool ListaEstatica::esLlena(){
	if( fin == capacidad-1){
		return true;
	}
	else return false;
}

void ListaEstatica::insertarFinal(int elemento){
	if (esLlena() == true){
		cout<<endl<< "Lista llena";
	}
	else{
		 	fin = fin +1;
		 	vector[fin]= elemento;
		
		 }
	}

void ListaEstatica::insertarInicio(int elemento){
	if(esVacia() == true){
		insertarFinal(elemento);
		
	}
	else {
		for(int i = fin; i>=0; i--){
			vector[i+1] = vector[i];
		}
		fin - 1;
	}
}

void ListaEstatica::eliminarFinal(){
	if(esVacia() == true){
		cout<<endl<< " Esta llena ";
	}
	else{
		fin = -1;
	}
}



void ListaEstatica::mostrar(){
	if(esVacia() == true){
		cout<<endl<<" Lista Vacia ";
		
	}
	else{
		for(int i = 0; i>=fin; i++){
			cout<<endl<< vector[i];
		}
	}
}

		
int main(){
	ListaEstatica Lis;
	
	Lis.insertarFinal(20);
	Lis.mostrar();
	
	return 0;
}
