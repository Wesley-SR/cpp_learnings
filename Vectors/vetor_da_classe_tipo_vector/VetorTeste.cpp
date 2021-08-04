#include "VetorTeste.h"
#include <iostream>
using namespace std;

VetorTeste::VetorTeste(){
    printf("Construtor \n");
}

void VetorTeste::altera_tamanho(int tamanho_entrada){
    printf("altera_tamanho parte 1 \n");
    this->tamanho = tamanho_entrada;
    int aux1[tamanho] = {10, 9, 8 , 10, 5, 6, 7 , 8, 9, 10};

    for (int i = 0; i < tamanho_entrada; i++){
        vetor_int.push_back(aux1[i]);
    }

    printf("altera_tamanho parte 1 \n");
    for (int i = 0; i < tamanho_entrada; i++){
        std::string aux2 = "Ola_Mundo" + std::to_string(i);
        // vetor_str.push_back(aux2 + ' ' + std::to_string(i));
        vetor_str.push_back(aux2);
        cout << "Fala" << aux2 << endl;
    }
}

void VetorTeste::imprime_vetor(void){
    cout << "The int vector elements are: \n";
    for (int i = 0; i < vetor_int.size(); i++){
        cout << vetor_int[i] << " " << "\n";
    }

    cout << "The str vector elements are: \n";
    for (int i = 0; i < vetor_str.size(); i++){
        cout << vetor_str[i] << " " << "\n";
    }
}
