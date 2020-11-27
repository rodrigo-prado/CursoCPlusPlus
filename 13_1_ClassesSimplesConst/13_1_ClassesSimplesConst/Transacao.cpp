#include "Transacao.h"

using std::string;
using std::to_string;

Transacao::Transacao(int qtd, string tipo) : qtd(qtd), type(tipo)
{
}

string Transacao::Relatorio() const
{
	string relatorio;
	relatorio += "   ";
	relatorio += type;
	relatorio += " ";
	relatorio += to_string(qtd);
	return relatorio;
}