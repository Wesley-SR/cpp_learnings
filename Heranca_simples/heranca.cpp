/*
Heranca simples --> Quando a classe filha herda apenas a classe mae
Heranca multiplca --> Uma classe filha pode herda de duas ou mais classes maes

--- Systax ---
class Derivada: especificadorDeHeranca Base{
...
}

O especificador define a forma como a classe filha acessa os dados da mae

class Derivada: public Base {...}
class Derivada: protected Base {...}
class Derivada: private Base {...}
*/


#include <iostream>
using namespace std;

class Mae{
	public:
		int publico;
	protected:
		int protegido;
	private:
		int privado;
};

class FilhaA: public Mae{
	public:
		FilhaA(){
			int a = protegido;
			// int b = privado; // Erro
			int c = publico;
		}
};

class FilhaB: private Mae{
	public:
		FilhaB(){
			int a = protegido;
			// int b = privado; // Erro
			int c = publico;		
		}
};

int main(){
	int x;
	FilhaA objA;
	
	//x = objA.a; // Erro
	//x = objA.b; // Erro
	x = objA.publico;
	
	FilhaB objB;
	//x = objA.a; // Erro
	//x = objA.b; // Erro
	//x = objB.publico; // Erro
	
	return 0;
}
