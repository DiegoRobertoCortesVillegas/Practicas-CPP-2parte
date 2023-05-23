#if !defined PARIMPAR_H
#define PARIMPAR_H
 class parImpar{
 	
 	private:
 		
 		class Nodo{
 			 public: 
 			 
 			 int dato;
 			 Nodo *siguiente;
 			 
 			 public:
 			 	Nodo(int dato){
 			 	    
					  this->dato = dato;
					  siguiente = 0;	
				  }
				  
				  };
		 Nodo *raiz;
		  public:
		  	parImpar();
		  	void comparar(int numero);
		  	void insertarInicio(int dato);
		  	void insertarFinal(int dato);
		  	void eliminarInicio();
		  	void eliminarFinal();
		  	void mostrar();
		  	bool esVacia();
 };

#endif
