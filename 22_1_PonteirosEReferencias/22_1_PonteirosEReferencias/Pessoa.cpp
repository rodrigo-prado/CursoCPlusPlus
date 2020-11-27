#include "Pessoa.h"
#include <iostream>

using std::string;

Pessoa::Pessoa(string primeiro_nome, 
	           string ultimo_nome,
	           int idade) 
	: primeiro_nome_(primeiro_nome), 
	  ultimo_nome_(ultimo_nome),
	  idade_(idade_)
{
}

Pessoa::~Pessoa()
{
}

string Pessoa::GetNome() const
{
	return primeiro_nome_ + " " + ultimo_nome_;
}
