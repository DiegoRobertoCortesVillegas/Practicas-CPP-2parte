#include <iostream>
using namespace std;
const int capacidad = 5;
class ColaCircular{
	private: 
	    int cola[capacidad];
	    int miFrente;
		int miFinal;
		public:
			
			ColaCircular();
			bool esVacia();
			bool esLlena();
			void encolar(int dato);
			void desencolar();
			void obtenerFrente();
			void mostrar();
};

ColaCircular::ColaCircular(){
	miFinal = 0;
	miFrente = 0;	
}

bool ColaCircular::esVacia(){
	if(miFinal == 0 && miFrente == 0){
		return true;
	}
	else return false;
}

bool ColaCircular::esLlena(){
	if(miFinal == capacidad -1){
		return true;
	}
	else return false;
}

void ColaCircular::encolar(int dato){
	int nFin = (miFinal + 1)%capacidad;
	if(nFin == miFrente){
		cout<<"Cola Llena"<<endl;
	}
	else{
			cola[miFinal]=dato;
			miFinal = nFin;
		}	
}


void ColaCircular::desencolar(){
	if(miFinal == 0&& miFrente ==0){
		cout<<"No hay nada en la cola"<<endl;
	}
	else{
		miFrente = (miFrente+1)%capacidad;
		
		}	
}


void ColaCircular::obtenerFrente(){
	cout<<"El valor del frente es : "<< cola[miFrente] << endl;
}

void ColaCircular::mostrar(){
	if(esVacia() == true){
		cout<<"// NO HAY NADA"<<endl;
		
	}
	else{
		cout<<"//Valores //EN //LA //COLA: \n";
	for(int i=miFrente; i != miFinal;i = (i+1)%capacidad){
		cout<< cola[i] <<endl;
	}
	
}
}

int main(){
	int opc,dato;
	ColaCircular C1;
	
	do{
		cout << "\t\t\t\t //Ejecutando //Cola //Circular\n"<<endl;
		cout<<endl<<"1.- Encolar";
		cout<<endl<<"2.- Desencolar";
		cout<<endl<<"3.- Mostrar";
		cout<<endl<<"4.- MostrarFrente\n";
		cout<<endl;
		cout<<endl<<"Inserta Opcion: ";cin>>opc;
		
		switch(opc){
			case 1:
				system("cls");
				cout<<"Inserta Dato: "; cin>>dato;
				cout<<endl;
				C1.encolar(dato);
				system("pause");
				system("cls");
				break;
				
				case 2:
					system("cls");
					C1.desencolar();
					C1.mostrar();
					system("pause");
				    system("cls");
				    break;
				    
				    case 3:
				    	
			    	    system("cls");
				    	C1.mostrar();
				    	system("pause");
				        system("cls");
				        break;
				        
				        case 4:
				
				            system("cls");
				        	C1.obtenerFrente();
				        	system("pause");
				            system("cls");
				            break;
				            
				            case 5:
				            	cout << " Continuar ? " << endl;
				            	break;
				            	
				            	default:
				            		cout<<" //OPCION //INEXISTENTE "<<endl;
		}
		
	}while(opc != 5);

	
	
	
	return 0;
}
