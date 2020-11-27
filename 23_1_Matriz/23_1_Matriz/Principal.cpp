#include <iostream>

#include "Matriz.h"

using namespace std;

int main()
{
	Matrix<int> matriz_de_inteiros(3, 3);

	cout << matriz_de_inteiros;

	matriz_de_inteiros(0, 0) = 1;
	matriz_de_inteiros(0, 1) = 2;
	matriz_de_inteiros(0, 2) = 3;
	matriz_de_inteiros(1, 0) = 4;
	matriz_de_inteiros(1, 1) = 5;
	matriz_de_inteiros(1, 2) = 6;
	matriz_de_inteiros(2, 0) = 7;
	matriz_de_inteiros(2, 1) = 8;
	matriz_de_inteiros(2, 2) = 9;

	cout << matriz_de_inteiros;
}