#ifndef MULTIPLICAR_H
#define MULTIPLICAR_H

#include "somar.h"
#include <iostream>
using namespace std;

class Multiplicar{
    private:
        Somar *PSm;
    public:
    Multiplicar(Somar *P);
    int multiplicar(int a, int b);
};

#endif