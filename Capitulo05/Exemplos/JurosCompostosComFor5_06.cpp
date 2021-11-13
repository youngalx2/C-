/*
    1// Figura 5.6: fig05_06.cpp  2// C�lculos de juros compostos com for.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 148). Edi��o do Kindle.
    Autor:
*/

// incluir biblioteca
#include <iostream>
#include <locale>
#include <iomanip>
#include <cmath>

using namespace std;

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // vari�veis
    double valorInicial = 1000.0; // valor inicial da aplica��o
    double taxa = 0.05; // taxa de juros
    double saldo; // saldo em cada ano

    // mostra cabe�alho
    // SETW( 21 ) configura o campo para ficar com 21 caracteres
    cout << "Ano" << setw( 25 ) << " Quantia ou Dep�sito" << endl;

    // configura o n�mero de ponto flutuante para ficar com 2 digitos finais
    cout << setprecision( 2 ) << fixed << endl;

    // loop para calcular a quantia de dep�sito feito em cada ano
    for( int ano = 1; ano <= 10; ano++ )
    {
        // calcula a quantia durante o ano espec�fico
        saldo = valorInicial * pow( 1.0 + taxa, ano );

        // mostra o ano e a quantia
        cout << setw( 3 ) << ano << setw( 21 ) << saldo << endl;
    } // fim for

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
