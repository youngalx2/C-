/*
    1// Figura 7.16: GradeBook.h
    2// Defini��o da classe GradeBook que usa um array para armazenar notas de teste.
    3// As fun��es-membro s�o definidas em GradeBook.cpp
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 271). Edi��o do Kindle.
    06/10/2021
*/

// biblioteca
#include <iostream> // para cout e cin
#include <clocale> // para setlocale
#include <iomanip> // para setw, fixed e setprecision
#include "GradeBook7_16.h" // para a classe

using namespace std;

int main()
{
    setlocale( LC_ALL, "portuguese" );

    // ARRAY de notas
    int gradesArray[ GradeBook::students ] =
    { 87, 68, 94, 100, 83, 78, 85, 91, 73, 87 };

    GradeBook meuGradeBook( "\nCS101 C++ como programar dos Deitel.", gradesArray );

    // imprima
    cout << "Notas do aluno = { ";

    // loop para mostrar as notas do aluno
    for( int grade = 0; grade < 10 ; grade++ )
        // imprime
        cout << gradesArray[ grade ] << " ";

    // imprima
    cout << "};" << endl;

    // chama afun��o display
    meuGradeBook.displayMessage();

    meuGradeBook.processGradeBook();

    cout << "Hello world!" << endl;
    return 0;
} // fim main

