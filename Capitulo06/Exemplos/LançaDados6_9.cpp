/*
    1// Figura 6.9: fig06_09.cpp
    2// Lan�a um dado de seis lados 6.000.000 vezes.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 193). Edi��o do Kindle.
*/

// incluir biblioteca
#include <iostream>
#include <locale>
#include <iomanip>
#include <cstdlib> // para a fun��o rand() n�meros aleat�rios

using namespace std;

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cria vari�veis
    int frequency1 = 0;
    int frequency2 = 0;
    int frequency3 = 0;
    int frequency4 = 0;
    int frequency5 = 0;
    int frequency6 = 0;
    int face = 0;

    // loop for conta 6000000 vezes
    for( int contar = 1; contar <= 6000000; contar++ )
    {
        // gera n�meros aleat�rios
        face = ( 1 + rand() % 6 );

        // cria switch
        switch( face )
            {
            case 1:
                ++frequency1;
                break;

            case 2:
                ++frequency2;
                break;

            case 3:
                ++frequency3;
                break;

            case 4:
                ++frequency4;
                break;

            case 5:
                ++frequency5;
                break;

            case 6:
                ++frequency6;
                break;

            default:
                // imprima
                cout << "Valor indevido!" << endl;
                break;

        } // fim switch
    } // fim for

    // cabe�alho
    cout << "Face" << setw(15) << "Frequ�ncia" << endl;

    // imprime o resultado
    cout << "    1" << setw( 13) << frequency1
            << "\n    2" << setw( 13 ) << frequency2
            << "\n    3" << setw( 13 ) << frequency3
            << "\n    4" << setw( 13 ) << frequency4
            << "\n    5" << setw( 13 ) << frequency5
            << "\n    6" << setw( 13 ) << frequency6 << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
