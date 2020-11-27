#pragma once

#include <string>
#include "Pessoa.h"

class Influenciador :
	public wbrain::Pessoa
{
private:
	std::string hashtag_do_twitter;
public:
	Influenciador(std::string primeiro_nome,
		          std::string ultimo_nome,
		          int idade,
		          std::string hashtag_do_twitter);
	~Influenciador();
};
