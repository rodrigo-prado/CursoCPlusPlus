#include <iostream>

using std::cout;
using std::cin;

double soma(double a, double b)
{
	return a + b;
}

double soma(double a, double b, double c)
{
	return soma(a, b) + c;
}

double soma(int a, int b)
{
	return a + b;
}

bool test(bool valor)
{
	return valor;
}

//bool test(double valor)
//{
//	return valor < 10;
//}

int main()
{
	int x;
	int y;
	int z;
	cout << "Insira x: ";
	cin >> x;
	cout << "Insira y: ";
	cin >> y;
	cout << "Insira z: ";
	cin >> z;
	cout << "O resultado da soma eh: " << soma(x, y, z) << '\n';
	cout << "A soma de dois numeros eh: " << soma(10, 20) << '\n';
	if (test(3))
	{
		cout << "Testando 3\n";
	}
	return 0;
}