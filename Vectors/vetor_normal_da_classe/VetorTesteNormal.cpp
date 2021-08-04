#include "VetorTesteNormal.h"
#include <iostream>
using namespace std;

VetorTesteNormal::VetorTesteNormal(){
    printf("Construtor \n");
}

void VetorTesteNormal::imprime_vetor(void){
    cout << "The vector elements are: \n";
    for (int i = 0; i < meu_vetor.size(); i++){
        cout << meu_vetor[i] << " " << "\n";
    }
}
