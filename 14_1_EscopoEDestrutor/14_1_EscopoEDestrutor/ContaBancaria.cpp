#include "ContaBancaria.h"
using std::vector;
using std::string;
using std::to_string;
#include <iostream>

ContaBancaria::ContaBancaria() : balanco(0)
{
	std::cout << "Construtor de conta bancaria: \n";
}

ContaBancaria::~ContaBancaria()
{
	std::cout << "Conta bancaria vai ser destruida: \n";
}

// :: --> operador de resolução de escopo 
vector<string> ContaBancaria::Relatorio() const
{
	vector<string> relatorio;
	// to_string --> converte inteiro em string
	relatorio.push_back("O balanco eh " + to_string(balanco));
	relatorio.push_back("Transacoes: ");
	for (auto t : log)
	{
		relatorio.push_back(t.Relatorio());
	}
	relatorio.push_back("------------------");
	return relatorio;
}

bool ContaBancaria::Deposito(int qtd)
{
	if (qtd >= 0)
	{
		balanco += qtd;
		log.push_back(Transacao(qtd, "Deposito"));
		// log.push_back(Transacao{ qtd, "Deposito" });
		return true;
	}
	else
	{
		return false;
	}
}

bool ContaBancaria::Retirada(int qtd)
{
	if (qtd <= 0)
	{
		return false;
	}

	if (balanco >= qtd)
	{
		balanco -= qtd;
		log.push_back(Transacao(qtd, "Retirada"));
		// log.push_back(Transacao{ qtd, "Retirada" });
		return true;
	}
	return false;
}
