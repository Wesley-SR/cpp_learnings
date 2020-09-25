#include <iostream>
#include <fstream> // ofstream e ifstream
#include <cstdlib>
using namespace std;

int main(){

	fstream arquivo;


	char opc = 's';
	string nome;

	arquivo.open("cfbcursos.txt", ios::out); // Abre ou cria

	while(opc == 's' or opc == 'S'){
		
		cout << "Digite um nome: ";
		cin >> nome;
		arquivo << nome;
		cout << "\nDigitar um novo nome? [s/n]";
		cin >> opc;
		system("CLS");
	}
	
	arquivo.close();
	return 0;
}
