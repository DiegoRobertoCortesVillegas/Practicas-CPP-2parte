#include <iostream>
#include "ColaDinamica.cpp"

using namespace std;

int main(){
	ColaDinamica C1;
	int opc,n;
	
	do{
		cout<<"\t\t\t Cola Dinamica\n"<<endl;
		cout<<endl<<"1.- Encolar";
		cout<<endl<<"2.- Desencolar";
		cout<<endl<<"3.- Mostrar";
		cout<<endl<<"4.- Salir\n";
		
		cin>>opc;
		
		switch(opc){
			
			case 1: 
			system("cls");
			cout<<"Ingrese valor: "; cin>>n;
			C1.encolar(n);
			system("pause");
			system("cls");
			break;
				
				case 2:
					system("cls");
					C1.desencolar();
					C1.mostrarCola();
					system("pause");
			        system("cls");
					break;
					
						
						case 3:
							system("cls");
							C1.mostrarCola();
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
