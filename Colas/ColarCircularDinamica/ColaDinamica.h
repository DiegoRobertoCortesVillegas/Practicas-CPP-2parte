#if !defined LISTACD_H
#define LISTACD_H

class ColaDinamica{
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
		
		Nodo *fin;
		Nodo *frente;
		
		public:
			ColaDinamica();
			bool esVacia();
			void encolar(int n);
			void desencolar();
			void mostrarCola();
};

#endif
