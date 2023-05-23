#include <iostream>
using namespace std;
const int capacidad=5;
class GrafoD{
	
	private:
		int numN;
		int matriz[capacidad][capacidad];
		
		public:
			GrafoD();
			void insertarArista();
		    void insertarConjuntoAristas();
		    void imprimirMatriz();
		    void obtenerGradoEntrada();
		    void obtenerGradoSalida();
		    bool verificarAdy(int n, int e);
};

GrafoD::GrafoD(){
	numN = 5;
	}

void GrafoD::insertarArista(){
	int v1,v2;
	
	cout<<"elija los vertices donde poner su arista"<<endl;
	cout<<"Vertice 1: ";cin>>v1;	
	cout<<"Vertice 2: ";cin>>v2;
	
	for(int i=0; i=v1; i++){
		for(int j=0; j<=v2; j++){
			matriz[i][j]=1;
		}
	}
		
}

void GrafoD::imprimirMatriz(){
	
	for(int i=0; i<=capacidad; i++){
		for(int j=0; j<=capacidad; j++){
			cout<<matriz[i][j]<<endl;
		}
	}
}

int main(){
	GrafoD G;
	G.insertarArista();
	G.imprimirMatriz();
	
	return 0;
}
