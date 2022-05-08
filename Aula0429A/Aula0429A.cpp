#include <iostream>

using namespace std;

int main()
{
	cout << "FOR ----------------------------- \n\n\n";
	
	const int fim = 1000;

	int i;
	for (i = 0; i < fim; i++)
	{
		cout << i << "\n";
	}

	cout << "\n\n\nDO..WHILE ----------------------------- \n\n\n";

	i = 0;
	do
	{
		cout << i << "\n";
		i++;

	} while (i < fim);

	cout << "\n\n\nWHILE ----------------------------- \n\n\n";

	i = 0;
	while (i < fim)
	{
		cout << i << "\n";
		i++;
	}

}

