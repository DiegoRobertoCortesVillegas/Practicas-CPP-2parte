#if !defined LISTAENLAZADA_H
#define LISTAENLAZADA_H
class ListaEnlazada{
	// Elemto de la lista
	private: 
	class Nodo{
		 //atributos
		public: 
		int dato;
		Nodo *siguiente; //siguiente elemento
		
		//metodos
		public:
			Nodo(int dato){
				this->dato = dato;
				siguiente = 0; //constructor
			}
	};
	
	Nodo *Raiz;
	
	public:
		ListaEnlazada();
		bool esVacia();
		void insertarInicio(int n);
		void insertarFinal(int n);
		void eliminarInicio();
		void eliminarFina();
		void mostrar();
		
	
};
#endif

