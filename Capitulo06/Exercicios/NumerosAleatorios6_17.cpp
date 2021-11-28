/*
    6.17 Para cada um dos seguintes conjuntos de inteiros, escreva uma �nica
    instru��o que aleatoriamente imprime um n�mero do conjunto.
    a) 2, 4, 6, 8, 10.
    b) 3, 5, 7, 9, 11.
    c) 6, 10, 14, 18, 22.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 243). Edi��o do Kindle.
    Autor: Pedro Filho, 13/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision
#include <ctime>

using namespace std;

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // vari�veis
    int aleatorio = 0;

    // gerador
    srand( time( NULL ) );

    // loop para imprimir valores aleat�rio
    for( int i = 1; i <= 30; i++ )
    {
        //a) 2, 4, 6, 8, 10.
        // aleatorio recebe rand()
        aleatorio = 2 + rand() % 9;

        // se aleat�rio for par
        if( aleatorio % 2 == 0 )

            // imprima o aleatorio
            cout << aleatorio << ' ';

    } // fim for aleat�rio

    cout << endl; // pula linha

        // loop for para n�meros ,�mpares
    for( int j = 1; j <= 30; j++ )
    {
        //b) 3, 5, 7, 9, 11.
        // aleatorio recebe rand()
        aleatorio = 1 + rand() % 11;

        // se aleat�rio for par
        if( aleatorio >= 3 && aleatorio % 2 != 0 )

            // imprima o aleatorio
            cout << aleatorio << ' ';
    }

    cout << endl; // pula linha

        // loop for para n�meros ,�mpares
    for( int j = 1; j <= 30; j++ )
    {
        // c) 6, 10, 14, 18, 22.
        // aleatorio recebe rand()
        aleatorio = 2 + rand() % 20;

        // se aleat�rio for par
        if( aleatorio >= 6 && aleatorio % 2 == 0 )

            // imprima o aleatorio
            cout << aleatorio << ' ';
    }

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
