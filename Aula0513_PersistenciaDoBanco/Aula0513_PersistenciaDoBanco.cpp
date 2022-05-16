#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    const int tamanho = 4;
    int codigo[tamanho] = { 1,2,3,4 };
    string nome[tamanho] = { "f","s","b","caio" };
    string tel[tamanho] = { "123","432", "678", "986370000" };

    ofstream out("C:\\Users\\cirus\\Desktop\\banco.txt");
    for (int i = 0; i < tamanho; i++)
    {
        out << "[" << codigo[i] << "," << nome[i] << "," << tel[i] << "]" << endl;
    }
    out.close();

}

