#include <iostream>
#include <conio.h>
using namespace std;
const int maximo = 100;
class GDirigido{
	
	private: 
	int numNodos;
	int matrizAdy[maximo][maximo];
	int matrizPeso[maximo][maximo];
	
	public:
		GDirigido();
		void insertarArista();
		void insertarConjuntoAristas();
		void imprimirMatriz();
		void obtenerGradoEntrada();
		void obtenerGradoSalida();
		bool verificarAdy(int n, int e);
		void numeroNodos();
		void Dijkstra();
	
	
};
GDirigido::GDirigido(){
    //numNodos = 5;
 	for(int i =1; i<=numNodos; i++){
 		for(int j=1; j<=numNodos; j++){
 			 matrizAdy[i][j]=0;
		 }
	 }
	 
	 for(int i =1; i<=numNodos; i++){
 		for(int j=1; j<=numNodos; j++){
 			 matrizPeso[i][j]=0;
		 }
	 }
}

void GDirigido::numeroNodos(){
	
	cout<<"//INSERTAR EL NUMERO DE NODOS DEL GRAFO: "; cin>>numNodos;
	
}
void GDirigido::insertarArista(){
	int v1,v2;
	int peso;
	cout<<"\t\t\t Elija los vertices a conectar "; cout<<" \t//NODOS EN EL GRAFO: "<<numNodos<<endl;
	cout<<"Vertice : ";cin>>v1;	
	cout<<"Vertice : ";cin>>v2;

		for(int i=v1; i<=v1; i++){
			for(int j=v2; j<=v2; j++){
				cout<<"Insertar peso de arista: ("<<i<<") ----> ("<<j<<") : "; cin>>peso;
				matrizPeso[i][j]= peso;
			}
		}
		
		
		for(int i=v1; i<=v1; i++){
			for(int j=v2; j<=v2; j++){
				matrizAdy[i][j]=1;
			}
		}
		
		
}

void GDirigido::insertarConjuntoAristas(){
	int aristas;
	cout<<"//EL NUMEO DE ARISTAS DEPENDE DEL NUMERO DE NODOS. "; 
	cout<<" //NODOS EN EL GRAFO: "<<numNodos<<endl;
	cout<<endl;
	cout<<"Numero de aristas a insertar: "; cin>>aristas;
	 for(int i= 0; i<aristas; i++){
	 	system("cls");
	 	insertarArista();
	 }
}

void GDirigido::imprimirMatriz(){
	
	cout<<"Matriz de ponderada: \n";
	for(int i=1; i<=numNodos; i++){
		for(int j=1; j<=numNodos; j++){
			cout<<" "<<matrizPeso[i][j];
		}
		cout<<"\n";
	}
	
	cout<<endl;
	
	cout<<"Matriz de adyacencia: \n";
	for(int i=1; i<=numNodos; i++){
		for(int j=1; j<=numNodos; j++){
			cout<<" "<<matrizAdy[i][j];
		}
		cout<<"\n";
	}
}

void GDirigido::obtenerGradoSalida(){
	int vertice,cont=0;
	
	cout<<"Inserte el Vertice para obtener el grado de salia: "; cin>>vertice;
	
	for(int i=1; i<=numNodos; i++){
		for(int j= vertice;j<=vertice; j++){
			if(matrizAdy[j][i] == 1){
				 cout << " Hay salida de  (" << vertice << ")  ---->  ("<< i << ")"<<endl;
				 
				cont++;
			}
			else if( matrizAdy[j][i] == 0){
				cout << " No hay salida de  (" << vertice << ")  ---->  ("<< i << ")"<<endl;
			}
		}
	}
	
	cout<<"El grado de salida del vertice  ("<< vertice <<")  es:  "<< cont << endl;
}

void GDirigido::obtenerGradoEntrada(){
	int vertice,cont=0;
	
	cout<<"Inserta el vertice para obtener el grado de entrada: "; cin>>vertice;
	
	for(int i=vertice; i<=vertice; i++){
		for(int j=1; j<=numNodos; j++){
			if(matrizAdy[j][i] == 1){
				
				cout << " Hay entrada de  (" << j << ")  ---->  ("<< vertice << ")"<<endl;
			   	cont++;
			}
			else if(matrizAdy[j][i] == 0){
				cout << " No hay sentrada de  (" << j << ")  ---->  ("<< vertice << ")"<<endl;
			}
		}
	}
	cout<<"El grado de entrada del vertice  ("<< vertice <<")  es:  "<< cont << endl;
}

bool GDirigido::verificarAdy(int v1, int v2){
	for(int i=v1; i<=v1; i++){
		for(int j= v2; j<=v2; j++){
			if(matrizAdy[i][j] == 1){
				return true;
			}
			 else if(matrizAdy[i][j] == 0){
				return false;
			}
		}
	}
}
	

int main(){
	GDirigido Q;
	int opc;
	Q.numeroNodos();
	
	system("pause");
	system("cls");
	do{
		cout<<"\t\t\t\t Grafo Dirigido \n"<<endl;
		cout<<endl<<"//1.-INSERTAR ARISTA";
		cout<<endl<<"//2.-INSERTAR CONJUNTO DE ARISTAS";
		cout<<endl<<"//3.-OBTENER GRADO DE SALIDA";
		cout<<endl<<"//4.-OBTENER GRADO DE ENTRADA";
		cout<<endl<<"//5.-IMPRIMIR MATRIZ";
		cout<<endl<<"//6.-SALIR\n";
		
		cout<<endl;
		cout<<"Insertar opcion: "; cin>>opc;
		
		switch(opc){
			
			case 1:
				system("cls");
				Q.insertarArista();
				Q.imprimirMatriz();
				system("pause");
	            system("cls");
	            break;
	            
	            case 2:
	            	system("cls");
	            	Q.insertarConjuntoAristas();
	            	Q.imprimirMatriz();
	            	system("pause");
	                system("cls");
	                break;
	                
	                case 3:
	                	system("cls");
	                	Q.imprimirMatriz();
	                	Q.obtenerGradoSalida();
	                	system("pause");
	                    system("cls");
	                    break;
	                    
	                    case 4:
	                    	system("cls");
	                    	Q.imprimirMatriz();
	                    	Q.obtenerGradoEntrada();
	                    	system("pause");
	                        system("cls");
	                        break;
	                        
	                        case 5:
	                        	system("cls");
	                    	    Q.imprimirMatriz();
	                         	system("pause");
	                            system("cls");
	                            break;
	                            
	                            case 6:
	                            	 break;
	                            	 
	                            	 
	                            	 
	                            	 default: cout<<"//Inexistente..."<<endl;
	                        	
	                    	
	                	
			
		}
		
		
	}while(opc!=6);
	
	
	getch();
	return 0;
}

