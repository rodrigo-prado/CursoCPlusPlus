#include <string>
using std::string;
#include <iostream>
using std::cout;
using std::endl;
#include "Pessoa.h"
#include "ContaBancaria.h"

template <class T>
T max(T const& t1, T const& t2)
{
	return t1 < t2 ? t2 : t1;
}

int main()
{
	cout << "max de 33 e 44 eh " << max(33, 44) << endl;
	string s1 = "alo";
	string s2 = "mundo";
	cout << "max da " << s1 << " e " << s2 <<
		" is " << max(s1, s2) << endl;
	Pessoa p1("Rodrigo", "Prado", 37);
	Pessoa p2("Bruno", "Prado", 40);
	cout << "max da " << p1.GetName() << " e " << p2.GetName() <<
		" eh " << max(p1, p2).GetName() << endl;
	/*ContaBancaria b1;
	ContaBancaria b2;
	cout << "max da " << b1.GetNomeDoCliente() << " e " << b2.GetNomeDoCliente() <<
		" eh " << max(b1,b2).GetNomeDoCliente() << endl;*/
	
	return 0;
}

