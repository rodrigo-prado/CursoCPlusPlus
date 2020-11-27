#include "Pessoa.h"
#include "Influenciador.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	Pessoa rodrigo("Rodrigo", "Prado", 37);
	Pessoa& rRodrigo = rodrigo;
	Pessoa* pRodrigo = &rodrigo;

	Influenciador rodrigoPrado("rodrigo", "raps", 25, "@qualquer");
	Pessoa* pRodrigoPrado = &rodrigoPrado;
	Pessoa& rpRodrigoPrado = rodrigoPrado;
	Influenciador& rtRodrigoPrado = rodrigoPrado;

	cout << rRodrigo.GetNome() << endl;
	cout << pRodrigo->GetNome() << endl;
	cout << rodrigoPrado.GetNome() << endl;
	cout << rpRodrigoPrado.GetNome() << endl;
	cout << rtRodrigoPrado.GetNome() << endl;
	cout << pRodrigoPrado->GetNome() << endl;

	Pessoa* Alguem = new Influenciador("Outro", "Alguem", 29, "@outro");
	cout << Alguem->GetNome() << endl;
	delete Alguem;
}

