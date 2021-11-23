/*
    1// Figura 6.29: fig06_29.cpp
    2// Testando a fun��o fatorial recursiva.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 223). Edi��o do Kindle.
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// prot�tipo
unsigned long fatorial( unsigned long );

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cabe�alho
    cout << "FATORIAL" << endl;

    // calcula o fatorial de 0 a 10
    for( int counter = 0; counter <= 10; counter++ )
    {
        // imprime
        cout << setw( 2 ) << counter << "! = " << fatorial( counter ) << endl;
    } // fim for

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria fun��o fatorial
unsigned long fatorial(unsigned long number )
{
    // se n�mero menor ou igual a 1
    if( number <= 1 ) // 0! = 1 ou 1! = 1
    {
        // retorna 1
        return 1;
    } // fim if
    else
    {
        return number * fatorial( number - 1 );
    } // fim else
} // fim fun��o
