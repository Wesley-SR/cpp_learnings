#include <iostream>
using namespace std;

class Retangulo
{
	private:
		int base, altura;
	public:
		void inic(int b, int h){
			base = b; altura = h;
			
		}
		
		// Métodos "inline" tem seu corpo dentro da propia classe
		void imprimeMeuRetangulo(){
			cout<< "\nBase = " <<base<< "\nAltura = "<<altura;
			
		}
		
		// Metodos com definição externa
		void imprimeArea(); // Coloco apenas o protótipo
};

int main(){
	Retangulo x, y; // Nome _classe Lista_Objetos;
	x.inic(5, 3);
	y.inic(10, 60);
	x.imprimeMeuRetangulo();
	y.imprimeMeuRetangulo();
	x.imprimeArea();
	y.imprimeArea();
	
	return 0;
}


void Retangulo :: imprimeArea() // Definição externa do método
{
	cout<< "\nArea = " <<(base*altura);
}
