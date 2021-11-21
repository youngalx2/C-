/*
    1// Figura 6.22: fig06_22.cpp
    2// Utilizando argumentos-padr�o.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 214). Edi��o do Kindle.
    Autor:
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// prototipo
int boxVolume( int length = 1, int width = 1, int height = 1  );

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // imprime boxVolume sem argumento
    cout << "boxVolume sem argumento = " << boxVolume() << endl;

    // box com tamanho 10
    cout << "boxVolume com o tamanho 10 = " << boxVolume( 10 ) << endl;

    // box volume com tamanho 10 e largura em 5
    cout << "bocVolume com o tamanho 10 e largura 5 = " << boxVolume( 10, 5 ) << endl;

    // box com todos os argumentos[[
    cout << "boxVolume com todos os argumentos = " << boxVolume( 10, 5, 2 ) << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a fun��o boxVolume
// int boxVolume( int length = 1, int width = 1, int height = 1  );
int boxVolume( int length, int width, int height )
{
    // retorne o valor
    return length * width * height;
} // fim fun��o
