#ifndef VECTORTESTE_H
#define VECTORTESTE_H

#include <vector>
#include <iostream>

class VetorTeste {
    private:
        int tamanho;
        std::vector<int> vetor_int;
        std::vector<std::string> vetor_str;
    public:
        VetorTeste();
        void altera_tamanho(int tamanho);
	void imprime_vetor(void);
};

#endif
