#include <iostream>
#include <string>
using namespace std;
int main()
{
	double escolha;
	cout << "Digite um numero: ";
	cin >> escolha;
	if (escolha < 0)
	{
		cout << "Numero negativo";
	}
	else if (escolha > 0)
	{
		cout << "Numero positivo";
	}
	else
	{
		cout << "Numero zero";
	}


}z