#pragma once
#include <string>

class Pessoa
{
private:
	std::string primeiro_nome_;
	std::string ultimo_nome_;
	int idade_;

public:
	Pessoa(std::string primeiro_nome,
		   std::string ultimo_nome,
		   int idade);
	~Pessoa();
	std::string GetNome() const;
	int GetIdade() const { return idade_; }
	void SetIdade(int idade) { idade_ = idade; }
};
