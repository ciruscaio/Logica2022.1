#include <iostream>
#include<string>

using namespace std;

int main()
{
    //Variaveis
    string Nome;
    int Idade;
    bool TesteParada;

    //Impressao de tela
    cout << "  /////////////////////////////\n";
    cout << " ///    LOCADORA DO CAIO   ///\n";
    cout << "/////////////////////////////\n";
    cout << "Cadastro de Usuario: \n\n";
    cout << "Nome do usuario: ";
    cin >> Nome;
    cout << "\n";
    cout << "Idade: ";
    cin >> Idade;

    cout << "\n" << "Confirmando a entrada: " << Nome << ", " << Idade;


    cout << "\n" << "Aperte qualquer tecla para sair.";
    cin >> TesteParada;

}
