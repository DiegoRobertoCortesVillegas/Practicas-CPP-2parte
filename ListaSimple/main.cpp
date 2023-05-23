#include <iostream>
#include "ListaEnlazada.cpp"

using namespace std;

int main(){
	ListaEnlazada L1;
	
	L1.insertarInicio(6);
	L1.insertarInicio(1);
	L1.insertarFinal(2);
	L1.insertarFinal(3);
	L1.mostrar();
	cout<<endl;
	L1.eliminarInicio();
	L1.eliminarFina();
	L1.mostrar();
	
	
	return 0;
}
