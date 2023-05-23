#include <iostream>
#include <conio.h>
using namespace std;
const int maximo = 100;
class GDirigido{
	
	private: 
	int numNodos;
	int matrizAdy[maximo][maximo];
	int matrizPeso[maximo][maximo];
	int DistMin[maximo];
	int v1,v2;
	
	public:
		GDirigido();
		void insertarArista();
		void insertarConjuntoAristas();
		void imprimirMatriz();
		void obtenerGradoEntrada();
		void obtenerGradoSalida();
		bool verificarAdy(int n, int e);
		void numeroNodos();
		int minimo(int Valor1, int Valor2);
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
int Minimo(int Val1, int Val2){ // Función auxiliar que obtiene el valor más pequeño de dos dados como parámetros. La utiliza el método de Dijkstra.
	
	int Min= Val1;
    if (Val2 < Min)
       Min=Val2;
    return Min;

}
void GDirigido::Dijkstra() /* Método que encuentra la distancia mínima entre un vértice dado y los demás vértices de un grafo dirigida. En el arreglo 
                              DistMin se almacenan las distancias mínimas desde el vértice origen a cada uno de los otros nodos. Es decir DistMin[i] 
                            almacena la menor distancia entre el vértice origen y el vértice i. */
{
	int Aux[maximo], VertInc[maximo], Ver1, Ver2, Ind1, Ind2, Menor, Band, Origen; //El arreglo VertInc se utiliza para guardar los vértices elegidos por ser los de la distancia mínima. El arreglo Aux 
	                                                                                // es un arreglo lógico que indica si el nodo de la posición i ya fue incluido en VertInc y de esta manera evitar ciclos.
	for (Ind1= 0; Ind1 < numNodos; Ind1++)
    {
        Aux[Ind1]=0;
        VertInc[Ind1]=0;
    }
	cout << "\n\n Ingresa el vertice origen: ";
    cin >> Origen;
    Aux[Origen-1]=1;  /* El arreglo donde se guardan las distancias mínimas del Origen a los demás vértices se inicializa con los valores  
	                     de la matriz de peso. */
    
    for (Ind1= 0; Ind1 < numNodos; Ind1++)
        DistMin[Ind1]=matrizPeso[Origen][Ind1];
    for (Ind1=0; Ind1<numNodos; Ind1++)
    {
    	 Menor= 99;//indica que no hay conexion.
        for (Ind2= 1; Ind2 < numNodos; Ind2++)
            if (DistMin[Ind2] < Menor && !Aux[Ind2]) /* Se busca el vértice Ver1 tal que DistMin[Ver1] sea el mínimo valor. Se usa el 99 como 
		                                                 valor inicial ya que es el elegido para indicar que no existe camino entre dos vértices. */
            {
                Ver1=Ind2;
                Menor=DistMin[Ind2];
            }
            // Se incluye Ver1 a VertInc y se actualiza el arreglo Aux.
            VertInc[Ind1]=Ver1;
            Aux[Ver1]=1; 
            Ver2=1;
        while (Ver2 < numNodos)
        {
            Band=0;
            Ind2= 1;
            while (Ind2 < numNodos && !Band)
                if (VertInc[Ind2] == Ver2)
                    Band= 1;
                else
                    Ind2++;
                if (!Band)
                    DistMin[Ver2]=Minimo(DistMin[Ver2],DistMin[Ver1] + matrizPeso[Ver1][Ver2]);
                Ver2++;
        }
    }
    	
    	for(int i = 0; i <numNodos; i++){
    		cout<<DistMin[i];
		} 
    
}


void GDirigido::numeroNodos(){
	
	cout<<"//INSERTAR EL NUMERO DE NODOS DEL GRAFO: "; cin>>numNodos;
	
}



void GDirigido::insertarArista(){
	
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
		cout<<endl<<"//7.-Dijkstra";
		
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
	                            	 
	                            	 case 7:
	                            	 	system("cls");
	                            	 	
	                            	 	Q.Dijkstra();
	                            	 	
	                            	 	system("pause");
	                                    system("cls");
	                            	 
	                            	 
	                            	 default: cout<<"//Inexistente..."<<endl;
	                        	
	                    	
	                	
			
		}
		
		
	}while(opc!=6);
	
	
	getch();
	return 0;
}

