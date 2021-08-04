// Aqui deve estar todo o c�digo execut�vel

#include <iostream>
#include "Ponto.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
{
	{
		Ponto P(55), P1; // Inicia atribuindo x = 55;
		int i;
			
		cout << "O valor de x do ponto P eh: " << P.Lerx() << endl;
		cout << "O valor de x do ponto P1 eh:" << P1.Lerx() << endl;
		cout << "Entre com o valor de x: " << endl;
		cin >> i;
		P.Fixarx(i);
		cout << "A posicao x do ponto eh: " << P.Lerx() << endl;
	}
	
	system("PAUSE");
	return 0;
}
