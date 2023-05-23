#if !defined LISTADOBLE_H
#define LISTADOBLE_H

class ListaDoble{
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
			ListaDoble();
	        bool esVacia();
	        void insertarInicio(int n);
	        void insertarFinal(int n);
	        void eliminarInicio();
	        void eliminarFinal();
	        void mostrar();
};
#endif

