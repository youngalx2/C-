/*
    1// Figura 7.9: fig07_09.cpp
    2// Programa de impress�o de gr�fico de barras.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 259). Edi��o do Kindle.
    Autor: 02/10/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // constante
    const int tamanho = 11;

    // array
    int notas[ tamanho ] = { 0, 0, 0, 0, 0, 0, 1, 2, 4, 2, 1 };

    // cabe�alho
    cout << "GR�FICO DE BARRAS DAS NOTAS" << endl;

    // loop para  gerar gr�fico de barras para cada nota no array
    for( int i = 0; i < tamanho; i++ )
    {
        // gera sa�da do rotulo do gr�fico de barras
        if( i == 0 ) // se i igual a zero
        {
            // imprima
            cout << "   0-9: ";
        } // fim if
        // se n�o, se i igual a dez
        else if( i == 10 )
        {
            // imprima
            cout << "   100: ";
        } // fim else if
        // se n�o
        else
        {
            // imprima
            cout << " " << i * 10 << "-" << ( i * 10 ) + 9 << ":  ";
        } // fim else

        // loop para mostra o gr�fico de barras
        for( int j = 0; j < notas[ i ]; j++ )
            // imprima
            cout << '*';

        cout << endl; //pula uma linha
    } // fim for externo

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
