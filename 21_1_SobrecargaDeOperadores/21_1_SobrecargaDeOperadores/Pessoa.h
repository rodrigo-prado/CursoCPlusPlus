#pragma once

#include <string>
#include <iostream>

class Pessoa
{
private:
	std::string primeiro_nome;
	std::string ultimo_nome;
	int idade;

	friend bool operator<(int i, Pessoa const& p);
	friend std::ostream& operator<<(std::ostream& os, const Pessoa& p);
public:
	Pessoa(std::string primeiro_nome, 
		   std::string ultimo_nome, 
		   int idade);
	~Pessoa();
	std::string GetNome();
	int GetIdade() const { return idade; }
	void SetNumber(int i) { idade = i; }

	std::string Imprima() const;

	// Repare a definicao dos operadores <
	// Tanto para comparar Pessoa com Pessoa
	// Quanto para comparar Pessoa com Inteiro, ou vice-versa
	bool operator<(Pessoa const& p) const;
	bool operator<(int i) const;
};

// Essa declaracao esta fora da classe
// Essa declaracao eh uma outra forma de declarar/definir um operador
// Comparar uma Pessoa com Inteiro, ou vice-versa
bool operator<(int i, Pessoa const& p);

std::ostream& operator<<(std::ostream& os, const Pessoa& p);
