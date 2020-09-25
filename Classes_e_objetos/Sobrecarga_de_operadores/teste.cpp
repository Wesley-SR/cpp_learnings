#include <iostream>
#include <stdlib.h>
using namespace std;

class ponto
{
	private:
		int x, y;
	
	public:
		ponto(int x1 = 0, int y1 = 0)
		{
			x = x1;
			y = y1;
		}// Construtor
		
	void operator ++(){ // "operator" eh uma palavra reservada
		++x;
		++y;
	}// Funcao operadora pre-fixada
	
	
	void printpt(){
		cout<<"("<< x << "," << y << ")";
	}// Imprime ponto
}; // Final da classe

int main (){
	ponto p1, p2(2, 3), p3;
	cout << "\n p1 = "; p1.printpt();
	cout << "\n p2 = "; p2.printpt();
	++p1; // p1.operator++();
	++p2;
	cout << "\n++p1 = "; p1.printpt();
	p3 = p1;
	cout << "\np3 = "; p3.printpt();
	return 0;
}
