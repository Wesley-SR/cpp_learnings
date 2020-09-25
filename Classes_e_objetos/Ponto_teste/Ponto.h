// Aqui (arquivo.h) deve estar todas as definições e declarações
// Colocar apenas os protótipos das funções e não funções inline
class Ponto{
	public:
		int Lerx();
		void Fixarx(int);
		Ponto();
		Ponto(int);
		~Ponto();
	private:
		int x, y; // Apenas o métodos privados podem acessar
		// essas variáveis privadas

};
