#include <iostream>
#include "PilaDinamica1.cpp"
int main(){
	PilaDinamica P1;
	
	int opc,n;
	
	do{
		cout<<"\t\t\t\t Pila Dinamica\n"<<endl;
		cout<<endl<<"1.- Apilar";
		cout<<endl<<"2.- Desapilar";
		cout<<endl<<"3.- Mostrar";
		cout<<endl<<"4.- Salir\n";
		
		cout<<"Insertar opcion: "<<endl;
		cin>>opc;
		
		switch(opc){
			
			case 1: 
			system("cls");
			cout<<"Apilar valor: "; cin>>n;
			P1.apilar(n);
			system("pause");
			system("cls");
			break;
			
				
				case 2:
					system("cls");
					P1.desapilar();
					P1.mostrar();
					system("pause");
			        system("cls");
					break;
					
					case 3:
						system("cls");
						P1.mostrar();
						system("pause");
						system("cls");
						break;
						
							case 4: 
							    break;
							    
							    default: cout<<"Opcion Incorrecta"<<endl; break;
							
							
		}
		
	}while(opc != 4);
	
	
	return 0;
}
