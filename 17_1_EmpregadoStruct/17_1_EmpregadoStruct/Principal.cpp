#include <iostream>

#include "Empregado.h"

using namespace std;

int main()
{
	struct Empregado emp1("John Doe", 22, 4500.00);
	{
		struct Empregado emp2("Zeh Ninguem", 42, 8500.00);
	}
	cout << emp1.nome << " " << emp1.idade << " " << emp1.salario << ".\n";
	emp1.aumentaSalario(0.1);
	cout << emp1.nome << " " << emp1.idade << " " << emp1.salario << ".\n";
	return 0;
}