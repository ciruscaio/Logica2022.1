#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ////CRUD (Incluir, Excluir, Alterar, Pesquisar)
    //Nesta aula faremos o Pesquisar

    //BANCO DE DADOS
    const int tamanho = 4;
    int codigo[tamanho] = { 1,2,3,4 };
    string nome[tamanho] = { "f","s","b","caio" };
    string tel[tamanho] = { "123","432", "678", "986370000" };

    //INTERFACE
    int cod = 0;
    cout << "Escreva o codigo do usuario q vc deseja saber os dados: ";
    cin >> cod;
    cout << "\n\n\n";

    for (size_t i = 0; i < tamanho; i++)
    {
        if (cod == codigo[i])
        {
            cout << codigo[i] << "\n";
            cout << nome[i] << "\n";
            cout << tel[i] << "\n";
        }
    }

}

