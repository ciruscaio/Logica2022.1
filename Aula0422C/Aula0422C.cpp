#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

int main()
{
	//1.11.	Escrever um algoritmo que lê um conjunto de 4 valores i, a, b, c, 
	// onde i é um valor inteiro e positivo e a, b, c, são quaisquer valores reais e os escreva.
	// A seguir: 
	//	•	Se i = 1 escrever os três valores a, b, c em ordem crescente.
	//	•	Se i = 2 escrever os três valores a, b, c em ordem decrescente.
	//	•	Se i = 3 escrever os três valores a, b, c de forma que o maior entre a, b, c fique dentre os dois.

	//Variavel
	int i;
	double a, b, c;
	double maior, menor, meio;

	//Coletar da interface
	cout << "Informe a sua opcao: \n 1, para crescente; \n 2, para decrescente; \n 3, maior no meio. \n\n";
	cin >> i;

	//Obter da interface
	cout << "Digite a: ";
	cin >> a;

	cout << "\nDigite b: ";
	cin >> b;

	cout << "\nDigite c: ";
	cin >> c;

	cout << "\n\n\n";

	//Maior
	if (a > b)
	{
		maior = a;
	}
	else 
	{
		maior = b;
	}
	if (c > maior)
	{
		maior = c;
	}

	//Menor
	if (a < b)
	{
		menor = a;
	}
	else
	{
		menor = b;
	}
	if (c < menor)
	{
		menor = c;
	}

	//Meio
	if (a != maior && a != menor) 
	{
		meio = a;
	}
	else if (b != maior && b != menor)
	{
		meio = b;
	}
	else if (c != maior && c != menor)
	{
		meio = c;
	}

	//Impressao em tela
	switch (i)
	{
	case 1: //crescente
		cout << "CRESCENTE: " << menor << ", " << meio << ", " << maior;
		break;

	default:
		cout << "ERRO! So pode de 1 a 3, mizeraaaa.";
		break;
	}



}
