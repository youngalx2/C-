/*
    4.32 Escreva um programa que l� tr�s valores double n�o-zero e determina e
    imprime se esses valores poderiam representar os lados de um  tri�ngulo.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 138). Edi��o do Kindle.
    Autor: Pedro, 21/08/2021
*/

// incluir biblioteca
#include <iostream>
#include <locale>

using namespace std;

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // vari�veis
    double ladoA = 0;
    double ladoB = 0;
    double ladoC = 0;

    // entrada de dados
    cout << "Digite tr�s n�meros para saber se pode seru um tri�ngulo: " << endl;
    cin >> ladoA >> ladoB >> ladoC;

    // se lado (b - c) menor que a e a menor que (b +c)
    if((ladoB - ladoC) < ladoA < (ladoB + ladoC))
        if( (ladoA - ladoC) < ladoB < (ladoA + ladoC) )
        {
            // imprime
            cout << "Pode ser um triangulo" << endl;
            cout << "F�rmula: (b - c) < a < (b + c)" << endl;
            cout << ladoB << " - " << ladoC << " < " << ladoA << " < " << ladoB << " + " << ladoC << endl;
            cout << ( ladoB - ladoC ) << " < " << ladoA << " < " << (ladoB + ladoC ) << endl;

            cout << endl;

            cout << "F�rmula: (a - c) < b < (a + c)" << endl;
            cout << ladoA << " - " << ladoC << " < " << ladoB << " < " << ladoA << " + " << ladoC << endl;
            cout << ( ladoA - ladoC ) << " < " << ladoB << " < " << (ladoA + ladoC ) << endl;

        } // fim if
        else
        {
            // imprime
            cout << "N�o pode ser um triangulo" << endl;
            cout << ladoB << " - " << ladoC << " < " << ladoA << " < " << ladoB << " + " << ladoC << endl;
            cout << ( ladoB - ladoC ) << " < " << ladoA << " < " << (ladoB + ladoC ) << endl;
        } // fim else

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
