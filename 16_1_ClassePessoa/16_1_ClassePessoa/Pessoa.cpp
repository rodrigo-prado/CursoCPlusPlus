#include "Pessoa.h"
#include <iostream>
using std::cout;
using std::endl;

wbrain::Pessoa::Pessoa(std::string primeiro_nome, 
	           std::string ultimo_nome,
	           int idade) 
	: primeiro_nome_(primeiro_nome), 
	  ultimo_nome_(ultimo_nome),
	  idade_(idade)
{
	/*cout << "Construindo " <<
		getNome() << endl;*/
}

wbrain::Pessoa::Pessoa() : idade_(0)
{
	/*cout << "Construindo " <<
		primeiro_nome_ << " " << ultimo_nome_ << endl;*/
}

wbrain::Pessoa::~Pessoa()
{
	/*cout << "Destruindo " <<
		primeiro_nome_ << " " << ultimo_nome_ << endl;*/
}

std::string wbrain::Pessoa::getNome()
{
	return primeiro_nome_ + " " + ultimo_nome_;
}
