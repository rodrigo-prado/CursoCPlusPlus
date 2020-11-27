// RAII - Resource Acquisition Is Initialization
// O recurso eh inicializado na aquisicao
// Adquire no construtor
// Se desfaz dos recursos alocados no destrutor

#pragma once

#include <string>
namespace wbrain
{
	class Pessoa
	{
	protected:
		std::string primeiro_nome_;
		std::string ultimo_nome_;
		int idade_;

	public:
		Pessoa(std::string primeiro_nome, std::string ultimo_nome, int idade);
		Pessoa();
		/*Pessoa() = default;*/
		~Pessoa();
		std::string getNome();
	};

}
