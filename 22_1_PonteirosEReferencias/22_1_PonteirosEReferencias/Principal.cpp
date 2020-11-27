#include <string>
using std::string;
#include <iostream>
using std::cout;
using std::endl;

#include "Pessoa.h"

int main()
{
	int a = 3;
	cout << "a is " << a << endl;

	int& rA = a;
	rA = 5;
	cout << "a is " << a << endl;

	Pessoa rodrigo("Rodrigo", "Prado", 37);
	Pessoa& rRodrigo = rodrigo;
	rRodrigo.SetIdade(28);
	cout << "rRodrigo: " << rRodrigo.GetNome() << " " 
		 << rRodrigo.GetIdade() << endl;

	//int& referenceRuim;
	//referenceRuim = 3;
	//cout << referenceRuim;
	
	int* pA = &a;
	*pA = 4;
	cout << "a is " << a << endl;
	int b = 100;
	pA = &b;
	(*pA)++;
	cout << "a " << a << ", *pA " << *pA << endl;

	Pessoa* pRodrigo = &rodrigo;
	(*pRodrigo).SetIdade(25);
	pRodrigo->SetIdade(26);
	cout << "rodrigo: " << rodrigo.GetNome() << " " 
		 << rodrigo.GetIdade() << endl;

	cout << "pRodrigo: " << pRodrigo->GetNome() << " " 
		 << pRodrigo->GetIdade() << endl;

	//int* ponteiroRuim;
	//int* ponteiroRuim = nullptr;  // inicializar com nullptr
	//*ponteiroRuim = 3;
	//cout << *ponteiroRuim << endl;

	return 0;
}
