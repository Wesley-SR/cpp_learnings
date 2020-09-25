#include<iostream>
#include<math.h>
#define PI 3.14159265
using namespace std;

class ComplexNumber{
	private:
		float x, y, mod, theta;
		int alternative;
		
		print_entry(){
			cout << "Seja bem vinda(o)\n\n" << endl;
			cout << "Digite 1 para entrar com o numero na forma retangular" << endl;
			cout << "                          ou" << endl;
			cout << "Digite 2 para entrar com o numero na forma polar\n" << endl;
			cout << ">> ";
	}

	public:
		ComplexNumber(){
			print_entry();
			cin >> alternative;
			if (alternative == 1)
			{
				cout << "Forma retangular (x + y.j)" << endl;
				cout << "Entre com a parte real (x) e a parte imaginaria (y)" << endl;
				cout << "x = ";
				cin >> x;
				cout << "y = ";
				cin >> y;
				cout << "\n\nForma retangular >> x + y.j = ";
				cout << x << " + " << y << ".j\n" << endl;  
				
				theta = 180*atan(y/x)/(PI);
				mod = sqrt(x*x + y*y);
				cout << "Forma polar      >> modulo/theta = ";
				cout << mod << "/" << theta << "\n\n" << endl;
			}
			else if (alternative == 2)
			{
				cout << "Forma polar (modulo/theta)" << endl;
				cout << "Entre com o modulo(mod) e o angulo(theta)" << endl;
				cout << "mod = ";
				cin >> mod;
				cout << "theta = ";
				cin >> theta;
				cout << "\n\nForma polar      >> modulo/theta = ";
				cout << mod << "/" << theta << "\n\n" << endl;
				
				theta = theta*PI/180;
				x = mod*cos(theta);
				y = mod*sin(theta);
				cout << "Forma retangular >> x + y.j = ";
				cout << x << " + " << y << ".j\n" << endl;				
			}
			
		}
};


int main(){
	
	ComplexNumber();

	return 0;
}
