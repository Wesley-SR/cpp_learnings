#include <iostream>

using namespace std;

void conter_without_recursion(int num);
void conter_with_recursion(int num, int cont);

int main() {

    // conter_without_recursion(10);
    conter_with_recursion(10, 2);

    return 0;
}

void conter_without_recursion(int num){

    cout << "Without recursion" << "\n";

    for(int i = 0; i<num; i++){
        cout << i << "\n";
    }
}

void conter_with_recursion(int num, int cont){

    cout << cont << "\n";

    if(num > cont){
        /* É feito um pré incremento na variável cont para não entra em loop infinito.
        Em cada chamada, é feito uma nova ativação de função. Cada função armazena suas
        variáveis */
        conter_with_recursion(num, ++cont);
    }
}