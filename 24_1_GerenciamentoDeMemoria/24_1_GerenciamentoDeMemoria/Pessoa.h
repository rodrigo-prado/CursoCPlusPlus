#pragma once

#include <string>
class Pessoa
{
protected:
	std::string primeiro_nome_;
	std::string ultimo_nome_;
	int idade_;

public:
	Pessoa(std::string primeiro_nome, 
		   std::string ultimo_nome, 
		   int idade);
	Pessoa();
	/*Pessoa() = default;*/
	~Pessoa();
	std::string GetNome();
};
