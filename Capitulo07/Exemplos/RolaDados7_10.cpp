/*
    1// Figura 7.10: fig07_10.cpp
    2// Rola um dado de seis lados 6.000.000 vezes.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 260). Edi��o do Kindle.
    Autor: 02/10/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision
#include <cstdlib> // para srand e rand
#include <ctime> // para stand time null

using namespace std;

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // constante
    const int tamanho = 7;

    // array
    int frequencia[ tamanho ] = { 0 };

    // semeia o gerador de n�meros aleat�rios
    srand( time( 0 ) );

    // loop para rolar os dados 6000000 vezes
    for( int i = 1; i <= 6000000; i++ )
        // conta o n�mero de vezes que um n�mero apareceu
        frequencia[ 1 + rand() % 6 ]++;

    // cabe�alho
    cout << "ROLA DADOS 6.000.000 VEZES" << endl;

    // valor e frequ�ncia
    cout << "Valor" << setw( 13 ) << "Frequ�ncia" << endl;

    // loop para mostra os valores
    for( int face = 1; face < tamanho; face++ )
        // imprime o resultado
        cout << setw( 4 ) << face << setw( 13 ) << frequencia[ face ] << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
