#include <iostream>
#include "ListaCD.cpp"

using namespace std;

int main (){
	ListaCD C;
	int opc ,n;
	do{
		cout<<"\t\t\t\t Lista Circular Doblemente Elazada\n "<<endl;
		cout<<endl<<"1.- InsertarInicio";
		cout<<endl<<"2.- Insertar Final";
		cout<<endl<<"3.- Eliminar Inicio";
		cout<<endl<<"4.- Eliminar Final";
		cout<<endl<<"5.- Mostrar";
		cout<<endl<<"6.- Salir\n";
		cout<<endl;
		cout<<"Inserte la opcion: "; cin>>opc;
		
		switch(opc){
			case 1:
				system("cls");
				cout<<"Inserta el valor: "; cin>>n;
				C.insertarInicio(n);
				system("pause");
				system("cls");
				break;
				
				case 2:
					system("cls");
			    	cout<<"Inserta el valor: "; cin>>n;
				    C.insertarFinal(n);
				    system("pause");
				    system("cls");
				    break;
				    
					case 3:
						system("cls");
						C.eliminarInicio();
						C.mostrar();
						system("pause");
				        system("cls");
				        break;
						
						case 4:
							system("cls");
						    C.eliminarFinal();
					        C.mostrar();
						    system("pause");
				            system("cls");
				            break;
							
							case 5:
								system("cls");
								C.mostrar();
						        system("pause");
				                system("cls");
								
								case 6: break;
								
								default: cout<<"Opcion Incorrecta"<<endl; break;
		}
		
	}while(opc != 6);
	 
	
	
	
	
	return 0;
}
