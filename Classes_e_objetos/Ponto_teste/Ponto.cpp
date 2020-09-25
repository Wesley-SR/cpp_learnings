# include "Ponto.h"
# include <iostream>
using namespace std;

// Sobrecarga de construtores
// Permite declaração de um mesmoobjeto de diferentes formas

// Destrutores
// Não pode ter valor de retorno
// Não podem ser chamados
// Não podem ser sobrecarregados

Ponto::Ponto(){
	x = 10;
	y = 0;
}
Ponto::Ponto(int i){
	x = i;
}

Ponto::~Ponto(){
	cout << "Objeto destruido! \n";
}

int Ponto::Lerx(){
	return x;
};
void Ponto::Fixarx(int i){
	x = i;
};
