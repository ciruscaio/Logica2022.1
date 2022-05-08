#include <iostream>

using namespace std;

int main()
{
	cout << "FOR --------------------\n\n\n";
	
	int tamanho = 10;

	int i;
	for (i = 1; i <= tamanho; i++)
	{
		cout << i << "\n";
	}
	
	cout << "\n\nWHILE --------------------\n\n\n";

	i = 1;
	while (i<= tamanho)
	{
		cout << i << "\n";
		i++;
	}

	cout << "\n\nDO..WHILE --------------------\n\n\n";

	i = 1;
	do 
	{
		cout << i << "\n";
		i++;

	} while (i<= tamanho);

}
