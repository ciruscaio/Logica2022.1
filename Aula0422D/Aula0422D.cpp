#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

int main()
{
    //2.1.	Crie um programa que determine se um ponto (X,Y) está dentro de um círculo ou não. 
    //Para tanto o programa deverá ler os seguintes dados de teclado: 
    //  •	Coordenadas do centro do círculo;
    //  •	Raio do círculo;
    //  •	Ponto a ser testado.

    //Variavel
    double cx = 6;
    double cy = 0;

    double raio = 3;

    double px = 5;
    double py = 0;

    double d;

    //Calcular a distancia do Centro da Cinr. para o Ponto
    d = sqrt( pow(px - cx, 2) + pow(py - cy, 2) );

    //Comparar
    if (d <= raio )
    {
        cout << "O ponto se encontra dentro da circunferencia";
    }
    else
    {
        cout << "O ponto se encontra fora da circunferencia";
    }





}
