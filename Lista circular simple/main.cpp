#include <iostream>
#include "ListaCS.cpp"

using namespace std;

int main(){
	ListaCS C1;
	int opc,n;
	
	do{
		cout<<"\t\t\t Lista Circular Simple\n"<<endl;
		cout<<endl<<"1.- Insertar Inicio";
		cout<<endl<<"2.- Insertar Final";
		cout<<endl<<"3.- Eliminar Inicio";
		cout<<endl<<"4.- Eliminar Final";
		cout<<endl<<"5.- Mostrar";
		cout<<endl<<"6.- Salir\n";
		
		cin>>opc;
		
		switch(opc){
			
			case 1: 
			system("cls");
			cout<<"Ingrese valor: "; cin>>n;
			C1.insertarInicio(n);
			system("pause");
			system("cls");
			break;
			
			case 2:
				system("cls");
				cout<<"Ingrese Valor: "; cin>>n;
				C1.insertarFinal(n);
				system("pause");
			    system("cls");
				break;
				
				case 3:
					system("cls");
					C1.eliminarInicio();
					C1.mostrar();
					system("pause");
			        system("cls");
					break;
					
					case 4:
						system("cls");
						C1.eliminarFinal();
						C1.mostrar();
						break;
						
						case 5:
							system("cls");
							C1.mostrar();
							system("pause");
			                system("cls");
							break;
							
							case 6: 
							    break;
							    
							    default: cout<<"Opcion Incorrecta"<<endl; break;
							
							
		}
		
	}while(opc != 6);
	
	
	
	return 0;
}
