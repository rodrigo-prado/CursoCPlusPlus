#include "Pessoa.h"
#include <iostream>
using std::cout;
using std::endl;
using std::string;

int main()
{
	Pessoa p1("Rodrigo", "Prado", 37);
	Pessoa p2("Bruno", "Prado", 40);
	cout << "Olha isso!!!\n\n";
	cout << p1 << endl;
	cout << p2 << endl;
	cout << "Olha isso!!!\n\n";

	// Compara Pessoa p1 com Pessoa p2: p1 < p2
	cout << "p1 ";
	if (!(p1 < p2))
		cout << "nao eh ";
	cout << "menor que p2" << endl;

	// Compara Pessoa p1 com um Inteiro: p1 < 72
	cout << "p1  ";
	if (!(p1 < 72))
		cout << "nao eh ";
	cout << "menor que 72" << endl;

	// Compara Pessoa Inteiro com Pessoa p1: p1 < 72
	cout << "72 ";
	if (!(72 < p1))
		cout << "nao eh ";
	cout << "menor que p1" << endl;

	return 0;
}

