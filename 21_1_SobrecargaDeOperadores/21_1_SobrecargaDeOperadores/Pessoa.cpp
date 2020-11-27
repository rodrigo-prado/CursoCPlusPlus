#include "Pessoa.h"
#include <iostream>
using std::cout;
using std::endl;

Pessoa::Pessoa(std::string primeiro_nome, 
	           std::string ultimo_nome,
	           int idade)
	: primeiro_nome(primeiro_nome), 
	  ultimo_nome(ultimo_nome),
	  idade(idade)
{	
}

Pessoa::~Pessoa()
{	
}

std::string Pessoa::GetNome()
{
	return primeiro_nome + " " + ultimo_nome;
}

std::string Pessoa::Imprima() const
{
	std::string imprecao = primeiro_nome + " " 
		+ ultimo_nome + " " + std::to_string(idade);
}

bool Pessoa::operator<(Pessoa const& p) const
{
	return idade < p.idade;
}

bool Pessoa::operator<(int i) const
{
	return idade < i;
}

bool operator<(int i, Pessoa const& p)
{
	return i < p.idade;
}

std::ostream& operator<<(std::ostream& os, const Pessoa& p)
{
	os << p.Imprima();
	return os;
}
