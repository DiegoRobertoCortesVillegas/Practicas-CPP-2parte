#if !definedORDENARNODO_H
#define ORDENARNODO_H
class ordenarNodo{
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
			ordenarNodo();
	        bool esVacia();
	        void darNum(int dato);
	        void ordenar(int n);
	        void mostrar();
};
#endif
