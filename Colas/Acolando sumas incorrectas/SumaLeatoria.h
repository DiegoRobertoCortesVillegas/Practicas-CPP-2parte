#if !defined SUMALEATORIA_H
#define SUMALEATORIA_H

class SumaLeatoria{
	private: 
	class Nodo{
		public:
			 int dato1,dato2;
			 Nodo *siguiente;
			 Nodo *anterior;
			 
			 public:
			 	Nodo(int dato1, int dato2){
			 		this->dato1 =dato1;
			 		this->dato2 = dato2;
			 		siguiente = 0;
			 		anterior = 0;
			 		
				 }
			
	};
	
	Nodo *fin;
	Nodo *frente;
	int acierto;//contador de aciertos.
	int numProblemas=0;
	int respuesta, resultado;
	
	public:
		SumaLeatoria();//constructor
		bool sinSuma(); // verifica si mi cola tiene operaciones a realizar 
		void realizarSuma();// genera los numeros y realkza la suma;
		void encolar(int dato1, int dato2);
		void mostrar();
		void mostrarp();
	
		
	
	
	
};
#endif

