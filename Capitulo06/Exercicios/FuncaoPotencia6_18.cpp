/*
    6.18 Escreva uma fun��o integerPower( base, exponent) que retorna o valor de
    baseexponent  Por exemplo, integerPower( 3, 4) = 3 * 3 * 3 * 3.
    Pressuponha que o expoente seja um inteiro n�o-zero positivo e que a  base
    seja um inteiro. A fun��o integerPower deve utilizar for ou while para controlar
    o c�lculo. N�o utilize fun��es da biblioteca  matem�tica.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 243). Edi��o do Kindle.
    Autor: Pedro Filho, 13/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// prot�tipo fun��o
int integerPower( int base, int expoente );

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // vari�veis
    int base = 0;
    int expoente = 0;

    // cabe�alho
    cout << "\tPOENCIA��O" << endl;

    // entrada de dados
    cout << "Digite o valor da base e o expoente: ";
    cin >> base >> expoente;

    // imprime o resultado
    cout << base << " elevado a " << expoente << " = "
            << integerPower( base, expoente ) << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// fun��o integerPower
int integerPower( int base, int expoente )
{
    int potencia = 1;

    // loop para calcular a pot�ncia
    for( int i = 1; i <= expoente; i++ )
    {
        potencia *= base;
    } // fim loop para calcular a pot�ncia

    return potencia;
} // fim fun��o
