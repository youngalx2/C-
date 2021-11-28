/*
    1// Figura 7.13: fig07_13.cpp
    2// Arrays est�ticos s�o inicializados como zero.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 265). Edi��o do Kindle.
    Autor: 03/11/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// prot�tipos
void staticArrayInit( void );
void automaticArrayInit( void );

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // imprima
    cout << "Primeira chamada para �s fun��es: " << endl;
    staticArrayInit();
    automaticArrayInit();

    // imprima
    cout << "\nSegunda chamada para �s fun��es: " << endl;
    staticArrayInit();
    automaticArrayInit();

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a fun��o staticArrayInit
void staticArrayInit( void )
{
    // inicializa os elementos com 0 na primeira chamada
    static int array1[ 3 ]; // array local est�tico

    cout << "\nValores iniciais do staticArrayInit: " << endl;

    // gera saida do conte�do do array
    for( int i = 0; i < 3; i++ )
    cout << "array1[ " << i << " ] = " << array1[ i ] << " ";

    cout << "\nValores depois de gerado conte�do do array: " << endl;

    // loop para mostrarmo conte�do do array
    for( int j = 0; j < 3; j++ )
    cout << "array1[ " << j << " ] = " << ( array1[ j ] += 5 ) << " ";

} // fim fun��o staticArrayInit

// cria a fun��o automaticArrayInit
void automaticArrayInit()
{
    // cabe�alho
    cout << "\n\nAUTOMATIC ARRAY INIT" << endl;

    // inicializa os elementos com 0 na primeira chamada
    static int array1[ 3 ] = { 1, 2, 3 }; // array local autom�tico

    cout << "\nValores iniciais do automaticArrayInit: " << endl;

    // gera saida do conte�do do array
    for( int i = 0; i < 3; i++ )
    cout << "array1[ " << i << " ] = " << array1[ i ] << " ";

    cout << "\nValores depois de gerado conte�do do array: " << endl;

    // loop para mostrarmo conte�do do array
    for( int j = 0; j < 3; j++ )
    cout << "array1[ " << j << " ] = " << ( array1[ j ] += 5 ) << " ";

} // fim fun��o automaticArrayInit
