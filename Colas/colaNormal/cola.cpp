#include <iostream>
using namespace std;
const int capacidad = 5;
class Cola{
	private: 
	    int cola[capacidad];
		int fin;
		public:
			
			Cola();
			bool esVacia();
			bool esLlena();
			void encolar(int dato);
			void desencolar();
			void obtenerFrente();
			void mostrar();
};

Cola::Cola(){
	fin = -1;	
}

bool Cola::esVacia(){
	if(fin == -1){
		return true;
	}
	else return false;
}

bool Cola::esLlena(){
	if(capacidad-1 == fin){
		return true;
	}
	else return false;
}

void Cola::encolar(int dato){
	if(esLlena() == true){
		cout<<"Cola Llena"<<endl;
	}
	else{
		 fin++;
		 cola[fin]=dato;
	}
}

void Cola::desencolar(){
	if(esVacia() == true){
		cout<<"No hay nada en la cola"<<endl;
	}
	else{
		
		for(int i=0; i<=fin ;i++){
			cola[i] = cola[i+1];
			
		}
		fin--;
	}
}

void Cola::obtenerFrente(){
	cout<<"El valor del frente es : \n";
	cout<<"cola[0] = "<< cola[0] << endl;
}

void Cola::mostrar(){
	if(esVacia() == true){
		cout<<"No hay nada en la cola"<<endl;
		
	}
	else{
		cout<<"Valores en Cola: \n"<<endl;
		for(int i = 0; i<=fin; i++){
			cout <<"Cola["<< i << "]"<<" = "<< cola[i] << endl;
		}
	}
}

int main(){
	
	Cola C1;
	
	C1.encolar(1);
	C1.encolar(2);
	C1.encolar(3);
	C1.encolar(4);
	C1.encolar(5);
	C1.mostrar();
	C1.obtenerFrente();
	
	cout<<endl;
	cout<<endl;
	
	C1.desencolar();
	C1.mostrar();
	C1.obtenerFrente();
	
	
	return 0;
}
