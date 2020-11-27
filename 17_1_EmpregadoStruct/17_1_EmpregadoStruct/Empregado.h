#pragma once

#include <iostream>
#pragma once

#include <string>

struct Empregado
{
	std::string nome;
	int idade;
	float salario;

	Empregado(std::string nome, int idade, float salario) 
		: nome(nome), idade(idade), salario(salario)
	{
		std::cout << "Contruindo Empregado com nome[" << nome
			<< "] idade[" << idade << " salario[" << salario << "]\n";
	}

	~Empregado()
	{
		std::cout << "Destruindo Empregado com nome[" << nome
			<< "] idade[" << idade << " salario[" << salario << "]\n";
	}

	bool aumentaSalario(float taxa)
	{
		salario *= (1 + taxa);
		return true;
	}
};