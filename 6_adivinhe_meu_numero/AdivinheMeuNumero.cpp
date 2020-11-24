#include <iostream>
using std::cout;
using std::cin;

int main()
{
	int resposta_certa = 5;
	int numero_palpite;
	bool nao_adivinhou = true;
	while (nao_adivinhou)
	{
		cout << "Adivinhe meu numero: ";
		cin >> numero_palpite;
		if (numero_palpite == resposta_certa)
		{
			cout << "Acertou!" << '\n';
			nao_adivinhou = false;
		}
        else if (numero_palpite < resposta_certa)
		{
			cout << "Muito baixo..." << '\n';
		} else if (numero_palpite > resposta_certa)
		{
			cout << "Muito alto..." << '\n';
		}
	}
	return 0;
}
