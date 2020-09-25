/*
--> Polimorfismo é a capacidade de assumir varias formas

--> Uma unica instrução pode chamar diferences funções e assumir formas distintas

*/

#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

class Cliente {
	private:
		char Nome[30];
		char Endereco[50];
		
	public:
		Cliente();
		Cliente(char [], char []);
		void Alterar(char []);
		void Alterar(char [], char []);
		void imprimir();
};


Cliente::Cliente(){
	
	strcpy(Nome, "None");
	strcpy(Endereco, "None");
};


Cliente::Cliente(char nome[], char end[]){
	strcpy(Nome, nome);
	strcpy(Endereco, end);
};


void Cliente::Alterar(char nome[]){
	strcpy(Nome, nome);
}

void Cliente::Alterar(char nome[], char end[]){
	strcpy(Nome, nome);
	strcpy(Endereco, end);
}

void Cliente::imprimir(){
	cout << "\nNome: " << Nome << endl;
	cout << "Endereco: " << Endereco << endl;
}

int main(int arg, char *argv[]){
	Cliente obj, obj2("Joao", "Av. Brasilia, 10");
	
	obj.imprimir();
	obj2.imprimir();

	obj.Alterar("Julia", "Rua Batel, 200");
	obj.imprimir();
	
	obj2.Alterar("Maria");
	obj2.imprimir();
	
	system("PAUSE");
	return EXIT_SUCCESS;
}

