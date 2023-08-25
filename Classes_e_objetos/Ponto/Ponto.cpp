# include "Ponto.h"
# include <iostream>
using namespace std;

// Sobrecarga de construtores
// Permite declaracao de um mesmo objeto de diferentes formas

// Destrutores
// Nao pode ter valor de retorno
// Nao podem ser chamados
// Nao podem ser sobrecarregados

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
