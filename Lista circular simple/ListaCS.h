#if !defined LISTACS_H
#define LISTACS_H

class ListaCS{
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
			ListaCS();
	        bool esVacia();
	        void insertarInicio(int e);
	        void insertarFinal(int e);
	        void eliminarInicio();
	        void eliminarFinal();
	        void mostrar();
};
#endif

