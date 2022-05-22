#include <iostream>
#include <string.h>
#include <math.h>
#include <fstream>
#include <string>
#include <stdlib.h>


using namespace std;


int Soma(int x, int y) 
{
	return (x + y);
}



int main()
{
	const int tamanho = 4;
	int codigo[tamanho];
	string nome[tamanho];
	string tel[tamanho];

	codigo[0] = 1;
	nome[0] = "F";
	tel[0] = "123234123";

	codigo[1] = 2;
	nome[1] = "S";
	tel[1] = "4567456754";

	codigo[2] = 3;
	nome[2] = "B";
	tel[2] = "5658766788";

	codigo[3] = 4;
	nome[3] = "CAIO";
	tel[3] = "6789678978";


	ofstream out("C:\\Users\\cirus\\Desktop\\db.txt");

	for (int i = 0; i < tamanho; i++)
	{
		out << "[" << codigo[i] << ";" << nome[i] << ";" << tel[i] << "]" << endl;
	}

	out.close();



}
