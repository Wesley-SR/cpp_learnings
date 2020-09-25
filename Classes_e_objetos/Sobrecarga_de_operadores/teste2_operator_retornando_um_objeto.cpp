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
/*		
	ponto operator ++(){ // "operator" eh uma palavra reservada
		++x; ++y;
		ponto temporario;
		temporario.x = x;
		temporario.y = y;
		
		return temporario;
	}// Funcao operadora pre-fixada, incrementa para depois atribuir
*/
	ponto operator ++(){
		++x; ++y;
		return *this;
	}	
	ponto operator ++(int){ // "operator" eh uma palavra reservada

		ponto temporario;
		temporario.x = x;
		temporario.y = y;
		
		++x; ++y;
		return temporario;
	}// Funcao operadora pos-fixada, atribui para depois incrementar
	
	void printpt(){
		cout<<"("<< x << "," << y << ")";
	}// Imprime ponto
}; // Final da classe

int main (){
	ponto p1, p2(2, 3), p3, p4;
	
	cout << "\n p1 = "; p1.printpt();
	cout << "\n p2 = "; p2.printpt();
	
	cout << "\n ++p1 = "; (++p1).printpt();
	cout << "\n p2++ = "; (p2++).printpt();
	cout << "\n p2 = " ; p2.printpt();
	
	p3 = p1++;
	
	cout << "\n p3 = "; p3.printpt();	
	cout << "\n p1 = "; p1.printpt();

	p4 = ++p1;
	
	cout << "\n p4 = "; p4.printpt();	
	cout << "\n p1 = "; p1.printpt();


	return 0;
}
