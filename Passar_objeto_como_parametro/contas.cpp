#include <iostream> 
#include "multiplicar.h"


int main(int argc, char **argv)
{
    Somar Sm;
    Multiplicar Mtpc(&Sm);

    cout << Mtpc.multiplicar(2, 5) << endl;
    cout << Mtpc.multiplicar(3, 5) << endl;
    cout << Mtpc.multiplicar(4, 5) << endl;

}