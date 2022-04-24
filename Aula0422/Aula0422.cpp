#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

int main()
{
	//1.1.	Escreva um algoritmo que leia três números inteiros e positivos (A, B, C) e 
	//calcule a seguinte expressão:

	//Variavel
	int A;
	int B;
	int C;

	int R;
	int S;
	double D;

	//Obter da interface
	cout << "Digite A: ";
	cin >> A;

	cout << "\nDigite B: ";
	cin >> B;

	cout << "\nDigite C: ";
	cin >> C;

	//Calculo
	R = (A + B) * (A + B);
	S = pow(B + C, 2);

	D = (R + S) / 2;

	//Imprimir na tela
	cout << "\nResultado: " << D;

}

