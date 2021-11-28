/*
    1// Figura 7.22: fig07_22.cpp
    2// Inicializa��o de arrays multidimensionais.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 281). Edi��o do Kindle.
    Autor: 06/10/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// prot�tipo
void printMatriz( const int [][ 3 ] );

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cria matrizes
    int matriz1[ 2 ][ 3 ] = { { 1, 2, 3 }, { 4, 5, 6 } };
    int matriz2[ 2 ][ 3 ] = { 1, 2, 3, 4, 5};
    int matriz3[ 2 ][ 3 ] = { { 1, 2 }, { 4 } };

    // imprima
    cout << "Os valores da matriz1 �: " << endl;
    printMatriz( matriz1 );

    // imprima
    cout << "Os valores da matriz2 �: " << endl;
    printMatriz( matriz2 );

    // imprima
    cout << "Os valores da matriz3 �: " << endl;
    printMatriz( matriz3 );

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a fun��o printMatriz
void printMatriz(const int matriz[][ 3 ] )
{
    for( int linha = 0; linha < 2; linha++ )
    {
        for( int coluna = 0; coluna < 3; coluna++ )
            cout << matriz[ linha ][ coluna ] << " ";

        cout << endl; // pula linha
    } // fim for externo
} // fim fun��o print matriz

