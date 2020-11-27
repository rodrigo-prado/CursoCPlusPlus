#pragma once

#include <vector>
#include <string>
#include "Transacao.h"

class ContaBancaria
{
private:
	int balanco;
	std::vector<Transacao> log;
public:
	// Construtor
	ContaBancaria();
	// Destrutor
	~ContaBancaria();

	// Metodos
	std::vector<std::string> Relatorio() const;
	bool Deposito(int qtd);
	bool Retirada(int qtd);
	int GetBalanco() { return balanco; }
};  // Atencao ao ponto-e-virgula

