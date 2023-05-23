#if !defined PILADINAMICA_H
#define PILADINAMICA_H

class 	PilaDinamica{
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
	
	Nodo *cima;
	
	public:
		PilaDinamica();
		bool esVacia();
		void apilar(int n);
		void desapilar();
		void mostrar();
		
	
};
#endif
