#ifndef VECTORTESTENORMAL_H
#define VECTORTESTENORMAL_H

#include <vector>

class VetorTesteNormal {
    private:
        int tamanho;
        int meu_vetor[tamanho];
    public:
        VetorTeste(int tamanho_entrada);
	void imprime_vetor(void);
};

#endif
