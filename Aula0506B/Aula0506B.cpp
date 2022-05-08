#include <iostream>


using namespace std;

int main()
{
	//Criar um fom que toma dois números, calcula a média, apresenta na tela e pergunta se quer
	//calcular mais uma vez

	double a;
	double b;
	double m;

	char parar = 'n';

	do
	{
		cout << "Escreva a: ";
		cin >> a;

		cout << "\n";
		cout << "Escreva b: ";
		cin >> b;

		m = (a + b) / 2;

		cout << "\n" << "Media: " << m << "\n\n";

		cout << "Deseja parar? [y para parar] [n para continuar]: ";
		cin >> parar;


		cout << "\n\n";

		//if (usuario_parar == 'y')
		//{
		//	parar = true;
		//}

	} while (parar == 'n');



}
