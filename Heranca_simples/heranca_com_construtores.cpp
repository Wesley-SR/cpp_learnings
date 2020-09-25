#include <cstdlib>
#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

class MaeA{
	protected:
		char nome[80];
		char numag[4];

		
	public:
		MaeA(){
			nome[0] = '\0';
			numag[0] = '\0';
		}
		MaeA(char n[], char ng[]){
			if(strlen(n)<80){
				strcpy(nome, n);
			}
			if(strlen(n)<80){
				strcpy(numag, ng);
			}
		}
	
	void print(){
		cout << "\nDados do agente:";
		cout << "\n---------------";
		cout << "\nNome: " << nome;
		cout << "\nNumero: " << numag;
		
	}
};

class FilhaA: public MaeA{
	protected:
		float altura;
		int idade;
	public:
		FilhaA():MaeA(){
			altura = 0;
			idade = 0;
		}
		
		FilhaA(char n[], char ng[], float a,
		int i): MaeA(n, ng){
			altura = a;
			idade = i;
		}

		void print(){
			MaeA::print();
			cout << "\nAltura: " << altura;
			cout << "\nIdade:  " << idade;
		}
};

int main()
{

	FilhaA jessica("Jessica Loren", "007", 1.71, 21);
	
	jessica.print();
	
	getchar();
	return EXIT_SUCCESS;
}
