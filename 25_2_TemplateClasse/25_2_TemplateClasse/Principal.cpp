#include <string>
using std::string;
#include <iostream>
using std::cout;
using std::endl;
#include "Pessoa.h"
#include "Acumulador.h"

int main()
{
	Acumulador<int> integers(0);
	integers += 3;
	integers += 7;
	cout << integers.GetTotal() << endl;

	Acumulador<string> strings("");
	strings += "hello";
	strings += " world";
	cout << strings.GetTotal() << endl;

	//integers += "testing";
	//strings += 4;

	//Pessoa inicio("", "", 0);
	//Acumulador<Pessoa> people(inicio);
	//// Acumulador<Pessoa> people(0);
	//Pessoa p1("Rodrigo", "Prado", 37);
	//Pessoa p2("Outra", "Pessoa", 55);
	//people += p1;
	//people += p2;
	//cout << people.GetTotal().GetIdade() << endl;
	//// cout << people.GetTotal() << endl;
	
	return 0;
}

