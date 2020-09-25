#include <iostream>
#include <stdlib.h>
using namespace std;

class ponto
{
	private:
		int x, y;
	public:
		
		ponto (int x1 = 0, int y1 = 0)
		{
			x = x1; y = y1;
		}// Construtor
	
		ponto operator +(ponto p_entrada) // Recebe um objeto
		{
			ponto temporario;
			temporario.x = x + p_entrada.x;
			temporario.y = x + p_entrada.x;
			
			return temporario;
		}// Soma dois objetos
		
		ponto operator +(int n) // Recebe um numero
		{
			ponto temporario;
			temporario.x = x + n;
			temporario.y = y + n;
			
			return temporario; 
		}// Soma um numero a um objeto
		
		void printpt()
		{
			cout << "(" << x << "," << y << ")";
		}// Imprime ponto

};

int main(){
	
	ponto p1(5,1), p2(2,3), p3;
	
	cout << "\n p1 = "; p1.printpt();
	cout << "\n p2 = "; p2.printpt();
	
	p3 = p1 + p2;
	cout << "\n p3 ="; p3.printpt();
	
	p3 = p1 + 5;
	cout << "\n p3 ="; p3.printpt();
	
	return 0;
}

