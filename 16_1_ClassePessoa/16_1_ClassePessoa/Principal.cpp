#include "Pessoa.h"
#include "Influenciador.h"
#include "Status.h"
#include <iostream>
using std::cout;
using std::endl;
using std::string;
using namespace wbrain;

int main()
{
	Pessoa p1("Rodrigo", "Prado", 37);
	{
		Influenciador t1("Alguem", "Outro", 456, "@qualquer");
		std::string name2 = t1.getNome();
	}
	/*cout << "depois do bloco" << endl;*/
	string name = p1.getNome();
	cout << p1.getNome() << endl;

	//int i = p1.idade;

	Status s = Pendente;
	s = Aprovado;
	//int codigo = 0;  // isso eh nao encontrado
	//codigo = 1;  // esse codigo e OK
	ErroDeArquivo ea = ErroDeArquivo::nao_encontrado;
	ea = ErroDeArquivo::ok;
	ErroDeRede er = ErroDeRede::desconectado;
	er = ErroDeRede::ok;

	return 0;
}

