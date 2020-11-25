#include <string>

class Transacao
{
private:
	int qtd;
	std::string type;

public:
	// Construtor
	Transacao(int amt, std::string kind);

	// Metodos
	std::string Relatorio();
};

