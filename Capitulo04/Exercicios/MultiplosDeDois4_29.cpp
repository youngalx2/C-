/*
    4.29 Escreva um programa que imprime as pot�ncias do inteiro 2, isto �,
    2, 4, 8, 16, 32, 64 etc. O loop while n�o deve terminar (isto �, voc�  deve criar
    um loop infinito). Para fazer isso, simplesmente utilize a palavra-chave true como
    a express�o para a instru��o while. O que  acontece quando voc� executa esse programa?
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 138). Edi��o do Kindle.
    Autor: Pedro, 21/08/2021
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

    // imprime um valor at� o limite do tipo, testado com a vari�vel de tipo ( int, float e double )
    double multiplos = 2; // cria a vari�vel

    // loop infinito
    while( true )
    {
        // imprime
        cout << multiplos << " ";

        // calcula
        multiplos *= 2;

    } // fim while

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
