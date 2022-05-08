#include <iostream>

using namespace std;

int main()
{
	int n = 1000;

	long int r;
	long int a = 0;
	long int b = 1;


	cout << a << "\n"; 
	cout << b << "\n";
	for (int i = 2; i < n; i++)
	{
		r = a + b;

		cout << r << "\n";

		a = b;
		b = r;

	}


}
