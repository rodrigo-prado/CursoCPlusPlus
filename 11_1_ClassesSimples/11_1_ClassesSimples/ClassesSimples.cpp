#include <iostream>
using std::cout;

#include "ContaBancaria.h"

int main()
{
	ContaBancaria a1;
	a1.Deposito(190);
	cout << "Depois de depositar R$ 190 " <<
		" o balanco eh " << a1.GetBalanco() << '\n';
	for (auto s : a1.Relatorio())
	{
		cout << s << '\n';
	}

	a1.Retirada(50);
	if (a1.Retirada(200))
	{
		cout << "Segunda retirada com sucesso" << '\n';
	}
	
	cout << "Depois de retirar R$50 e R$100" << '\n';
	for (auto s : a1.Relatorio())
	{
		cout << s << '\n';
	}
	
	return 0;
}

