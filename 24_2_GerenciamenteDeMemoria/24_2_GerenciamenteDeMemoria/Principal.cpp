#include "Pessoa.h"
#include "Influenciador.h"
#include <iostream>
using std::cout;
using std::endl;
#include <memory>
using std::shared_ptr;
using std::make_shared;

int Dummy(Pessoa const& p) { return p.GetIdade(); }

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

	shared_ptr<Pessoa> spRodrigo = make_shared<Influenciador>("Outro", "Alguem", 29, "@outro");
	cout << spRodrigo->GetNome() << endl;

	rodrigo = rodrigoPrado;
	cout << rodrigo.GetNome() << endl;

	int x;
	x = Dummy(rodrigo);
	x = Dummy(rodrigoPrado);
}

