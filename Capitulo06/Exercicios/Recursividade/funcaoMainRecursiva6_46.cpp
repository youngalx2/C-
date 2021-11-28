/*
    6.46 A fun��o main pode ser chamada recursivamente em seu sistema?
    Escreva um programa contendo uma fun��o main. Inclua a vari�vel  local static
    count e a inicialize como 1. P�s-incremente e imprima o valor de count toda vez
    que main for chamada. Compile seu  programa. O que acontece?
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 247). Edi��o do Kindle.
    Autor: Pedro Filho, 27/09/2021
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

    // vari�vel
    int static contar = 1;

    // imprima
    cout << "Main recursivo " << contar << endl;

    // contador de repeti��o
    contar++;

    // chama a fun��o main
    main();

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
