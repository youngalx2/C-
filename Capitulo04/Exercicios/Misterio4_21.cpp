/*
    mist�rio 01
    Autor: Pedro Filho, 18/08/2021
*/

// incluir biblioteca
#include <iostream>
#include <locale>

using namespace std;

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // vari�vel
    int contar = 1; // inicia contador

    // enquanto contador menor ou igual a 10
    while( contar <= 10 )
    {
        // imprima
        cout << ( contar % 2 ? "*****" : "++++++++++" ) << endl;

        contar++; // incrementa contar

    } // fim while

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
