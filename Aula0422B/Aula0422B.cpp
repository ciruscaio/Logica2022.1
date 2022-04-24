#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;


int main()
{
    //1.9.	Elaborar um algoritmo que lê 3 valores a,b,c e verifica se eles 
    //formam ou não um triângulo. Supor que os valores lidos são inteiros e positivos. 
    //Caso os valores formem um triângulo, calcular e escrever a área deste triângulo. 
    //Se não formam triângulo escrever os valores lidos. 
    //(se a > b + c não formam triângulo algum, se a é o maior).

	//Variavel
	int A;
	int B;
	int C;

	double SP, Area;

	bool vairolar = false;

	//Obter da interface
	cout << "Digite A: ";
	cin >> A;

	cout << "\nDigite B: ";
	cin >> B;

	cout << "\nDigite C: ";
	cin >> C;

	//Verificar a formacao de triangulos
	if (A > B+C)
	{
		vairolar = false;
	}
	else if (B > A + C)
	{
		vairolar = false;
	}
	else if (C > A + B) 
	{
		vairolar = false;
	}
	else
	{
		vairolar = true;
	}

	if (vairolar)
	{
		// SP = (A+B+C)/2;
		// A = raiz( SP*(SP-A)*(SP-B)*(SP-C) );

		SP = (A + B + C) / 2;
		Area = sqrt(SP * (SP - A) * (SP - B) * (SP - C));

		cout << "A area e: " << Area;

	}
	else 
	{
		cout << "Nao pode calcular area, pois nao forma triangulo\n\nValores: " << A << ", " << B << ", " << C;
	}
}

