#include <iostream>
using std::cout;

int main(int argc, char* argv[])
{
	cout << "Argumentos: " << '\n';
	for (int i = 0; i < argc; ++i)
	{
		cout << argv[i] << '\n';
	}
	return 0;
}
