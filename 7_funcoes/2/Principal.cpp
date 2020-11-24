#include <iostream>

using std::cout;
using std::cin;

double soma(double a, double b);

double soma(double a, double b, double c);

double soma(int a, int b);

bool test(bool valor);

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
