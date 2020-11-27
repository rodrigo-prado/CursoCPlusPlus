#include "Pessoa.h"
#include <iostream>

using namespace std;

Pessoa::Pessoa(string first,string last,
	int arbitrary) : primeiro_nome_(first),ultimo_nome_(last),
	idade_(arbitrary)
{
}

Pessoa::~Pessoa()
{
}

string Pessoa::GetName()
{
	return primeiro_nome_ + " " + ultimo_nome_;
}

bool Pessoa::operator<(Pessoa const& p) const
{
	return idade_ < p.idade_;
}

bool Pessoa::operator<(int i) const
{
	return idade_ < i;
}

bool operator<(int i, Pessoa const& p)
{
	return i < p.idade_;
}
