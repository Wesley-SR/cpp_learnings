// Aqui (arquivo.h) deve estar todas as defini��es e declara��es
// Colocar apenas os prot�tipos das fun��es e n�o fun��es inline
class Ponto{
	public:
		int Lerx();
		void Fixarx(int);
		Ponto();
		Ponto(int);
		~Ponto();
	private:
		int x, y; // Apenas os metodos privados podem acessar as variaveis privadas
};
