#include <memory>
#include <iostream>
using namespace std;

class Teste
{
private:
    // Aqui eh criado os ponteiros inteligentes
    shared_ptr <uint16_t[]> m_int16_vector;
    shared_ptr <string[]> m_string_vector;
    shared_ptr <int[]> m_int_vector;
public:
    Teste(void);
    void chama_altera_completo(void);
    void altera_valores_int_completo(int *vetor);
    void imprimir(void);
};