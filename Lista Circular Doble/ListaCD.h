#if !defined LISTACD_H
#define LISTACD_H

class ListaCD{
	private: 
	
	class Nodo{
		  public: 
		  
		  int dato;
		  Nodo *siguiente;
		  Nodo *anterior;
		  
		  public:
		  	
		  	Nodo(int dato){
		  		this->dato = dato;
		  		siguiente = 0;
		  		anterior = 0;
			  }
			  	
	};
	
	Nodo *raiz;
			  
			  public:
			  	ListaCD();
			  	bool esVacia();
			  	void insertarInicio(int n);
			  	void insertarFinal(int n);
			  	void eliminarInicio();
			  	void eliminarFinal();
			  	void buscar(int e);
			  	void mostrar();
};

#endif
