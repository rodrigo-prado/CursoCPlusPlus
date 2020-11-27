#pragma once
#include <string>
class Pessoa
{
private:
	std::string primeiro_nome_;
	std::string ultimo_nome_;
	int idade_;

public:
	Pessoa(std::string first,
		std::string last,
		int arbitrary);
	~Pessoa();
	std::string GetName();
	int GetIdade() { return idade_; }
	void SetIdade(int idade) { idade_ = idade; }
	bool operator<(Pessoa const& p) const;
	bool operator<(int i) const;
	friend bool operator<(int i, Pessoa const& p);
};

bool operator<(int i, Pessoa& p);
