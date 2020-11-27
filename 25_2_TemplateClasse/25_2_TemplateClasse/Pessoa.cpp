#include "Pessoa.h"
#include <iostream>

using namespace std;

Pessoa::Pessoa(string primeiro_nome,
	           string ultimo_nome,
	           int idade) 
	: primeiro_nome_(primeiro_nome),
	  ultimo_nome_(ultimo_nome),
	  idade_(idade)
{
}

Pessoa::~Pessoa()
{
}

string Pessoa::GetNome() const
{
	return primeiro_nome_ + " " + ultimo_nome_;
}

bool Pessoa::operator<(Pessoa const& p) const
{
	return idade_ < p.idade_;
}

bool Pessoa::operator<(int i) const
{
	return idade_ < i;
}

bool operator<(int i, Pessoa const& p)
{
	return i < p.idade_;
}
