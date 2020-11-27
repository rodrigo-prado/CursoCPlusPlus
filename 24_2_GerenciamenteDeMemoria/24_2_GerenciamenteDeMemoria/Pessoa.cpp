#include "Pessoa.h"
#include <iostream>
using std::cout;
using std::endl;

Pessoa::Pessoa(std::string primeiro_nome, 
	           std::string ultimo_nome,
	           int idade) 
	: primeiro_nome_(primeiro_nome), 
	  ultimo_nome_(ultimo_nome),
	  idade_(idade)
{
	/*cout << "Construindo " <<
		getNome() << endl;*/
}

Pessoa::Pessoa() : idade_(0)
{
	/*cout << "Construindo " <<
		primeiro_nome_ << " " << ultimo_nome_ << endl;*/
}

Pessoa::~Pessoa()
{
	/*cout << "Destruindo " <<
		primeiro_nome_ << " " << ultimo_nome_ << endl;*/
}

std::string Pessoa::GetNome() const
{
	return primeiro_nome_ + " " + ultimo_nome_;
}
