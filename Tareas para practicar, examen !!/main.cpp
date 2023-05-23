#include <iostream>
#include "parImpar.cpp"
using namespace std;

int main(){
	int num,opc;
	parImpar P;
	
	do{
		cout<<"//Comparar //Numero //Par o Impar "<<endl;
		cout<<"------------------------------------------------\n"<<endl;
		cout<<endl;
		cout<<"001 (1)  //Comparar Numero"<<endl;
		cout<<"002 (2) // Mostrar"<<endl;
		cout<<"003 (3) //Salir\n"<<endl;
		cout<<endl;
		cout<<"Insertar Opcion: "; cin>>opc; 
		
		switch (opc){
			case 1:
				system("cls");
				cout<<"//Ejecutando //Opcion //001\n"<<endl;
				P.comparar(num);
				P.mostrar();
				system("pause");
				system("cls");
				break;
				
				case 2:
					system("cls");
					cout<<"// Ejecutando. . ."<<endl;
					system("pause");
					system("cls");
					P.mostrar();
					system("pause");
			    	system("cls");
					break;
					
					case 3:
						system("cls");
						cout<<"\t\t\t\tContinuar?"<<endl;
						break;
		}
	}while(opc != 3);
	
	
	return 0;
}
