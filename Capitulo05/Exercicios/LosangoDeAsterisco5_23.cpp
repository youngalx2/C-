/*
    5.23 Escreva um programa que imprime a seguinte forma de losango.
    Voc� pode utilizar instru��es de sa�da que imprimem um �nico asterisco (*) ou
    um �nico espa�o em branco. Maximize sua utiliza��o de repeti��o
    (com instru��es for aninhadas) e minimize o n�mero de  instru��es de sa�da.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 179). Edi��o do Kindle.
    Autor: Pedro Filho, 01/09/2021
*/

// incluir biblioteca
#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    int valor = 0;

    // entrada de dados
    cout << "Entre com tamanho do losango: ";
    cin >> valor;

    // loop for de  controle
    for( int controle = 1; controle <= valor; controle++ )
    {
        // loop for primeiro tri�ngulo
        for( int i = valor; i >= controle; i-- )
        {
            cout << ' ';
        } // fim for vazio

        // loop for segundo tri�ngulo
        for( int j = 1; j <= controle; j++ )
        {
            cout << '*';
        } // fim for segundo

        // loop for terceiro tri�ngulo
        for( int i = controle; i >= 2; i-- )
        {
            cout << '*';
        } // fim for terceiro
        // pula linha
        cout << endl;
    } // fim for controle

    // fim for tri�ngulo para baixo
    for( int controle = 1; controle <= valor; controle++ )
    {
        // espa�o em branco
        cout << ' ';

        // loop for primeiro tri�ngulo
        for( int i = 1; i <= controle; i++ )
        {
            // imprime espa�o em branco
            cout << ' ';
        } // fim for primeiro

        // loop for segundo tri�ngulo
        for( int j = valor - 1; j >= controle; j-- )
        {
            // imprime
            cout << '*';
        } // fim for segundo

        for( int i = valor - 2; i >= controle; i-- )
        {
            cout << '*';
        } // fim for

        // pula linha
        cout << endl;
    } // fim for controle

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
