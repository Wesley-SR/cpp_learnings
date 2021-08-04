#include "Teste.h"

Teste::Teste()
{
    // Colocando 5 novas posicoes
    m_int_vector = shared_ptr <int[]> ( new int[5]() );

    m_string_vector = shared_ptr <string[]> ( new std::string[5]);

    string string_test = "Hello World";

    for (int i = 0; i < 5; i++)
    {
        m_string_vector.get()[i] = string_test + " " + to_string(i);
    }

    for (int i = 0; i < 5; i++)
    {
        m_int_vector.get()[i] = i;
    }
}

void Teste::imprimir()
{
    for (int i = 0; i < 5; i++){
        cout << "m_int16_vector = " << m_int_vector[i] << endl;

        cout << "m_string_vector = " << m_string_vector[i] << endl;
    }
}

void Teste::chama_altera_completo(void)
{
    Teste::altera_valores_int_completo(m_int_vector.get());
}

void Teste::altera_valores_int_completo(int *vetor)
{
    for (int i = 0; i < 5; i++)
    {
        vetor[i] = i*10;
    }
}

