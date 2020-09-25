/*
PERMITE QYE A INSTRUCAO SEJA ASSOCIADA A UMA FUNÇÃO NO MOMENTO DA EXECUÇÃO

*/


#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

// CLASSE ABSTRATAS

// Podemos criar uma FUNCAO VIRTUAL PURA
//class Base{
//	public:
//		virtual void print() = 0; // Função virtual pura
//};
// NÃO É PERMITIDO CRIAR OBJETO DA QUASE BASE QUANDO TEMOS FUNCAO VIRTUAL PURA


class Base{
	public:
		virtual void print(){
			cout << "\n" << "Base";
		}
};

class Deriv0: public Base{
	public:
		void print(){
			cout << "\n" << "Deriv0";
		}
};

class Deriv1: public Base{
	public:
		void print(){
			cout << "\n" << "Deriv1";
		}
};

class Deriv2: public Base{
	public:
		void print(){
			cout << "\n" << "Deriv2";
		}
};

int main(int arg, char *argv[]){
	
	Base *p[3]; // Vetor de ponteiros
	
	Deriv0 dv0;
	Deriv1 dv1;
	Deriv2 dv2;
	
	p[0] = &dv0; // Soh da certo pq eh um herdeiro
	p[1] = &dv1;
	p[2] = &dv2;
	
	for(int i=0; i<3; i++){
		p[i]->print(); // Chama print()
	}
	
	cout << endl << endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}

