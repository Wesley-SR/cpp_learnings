#include "multiplicar.h"


Multiplicar::Multiplicar(Somar *P){
    PSm = P;
    cout << P->somar_dois_inteiros(1,1) << "\n";
}

int Multiplicar::multiplicar(int a, int b){
    int resultado = a;
    for (size_t i = 1; i < b; i++){
        resultado = PSm->somar_dois_inteiros(resultado,a);
    }
    return resultado;
}