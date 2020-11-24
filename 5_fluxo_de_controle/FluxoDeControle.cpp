#include <iostream>

using std::cout;
using std::cin;

int main() 
{
	int numero;

	cout << "Digite o numero desejado: ";
	cin >> numero;

	if ((numero % 2) == 0) 
	{
		cout << "O numero eh par.\n";
	}
	else 
	{
		cout << "O numero eh impar.\n";
	}
	
	bool continua = true;
	while (continua)
	{
		int numero;

		cout << "Insira um numero: (zero para sair)";
		cin >> numero;

		if (numero == 0)
		{
			continua = false;
		}
	}

	for (int i = 0; i < 2; i++)
	{
		cout << "Dentro do for\n";
	}

	return 0;
}