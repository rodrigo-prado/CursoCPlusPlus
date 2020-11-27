#include "Influenciador.h"
#include <iostream>

Influenciador::Influenciador(
	std::string primeiro_nome,
	std::string ultimo_nome,
	int idade,
	std::string hashtag_do_twitter)
	: Pessoa(primeiro_nome, ultimo_nome, idade), 
	  hashtag_do_twitter(hashtag_do_twitter)
{
	/*std::cout << "Construindo Influenciador " <<
		primeiro_nome_ << " " << ultimo_nome_ << " " <<
		hashtag_do_twitter << std::endl;*/
}

Influenciador::~Influenciador()
{
	/*std::cout << "Destruindo Influenciador " <<
		primeiro_nome_ << " " << ultimo_nome_ << " " <<
		hashtag_do_twitter << std::endl;*/
}
