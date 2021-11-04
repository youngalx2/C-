/*
    1// Figura 4.14: fig04_14.cpp
    2// Cria o objeto da classe GradeBook2 e invoca sua fun��o-membro determineClassAverage
    3// inclui a defini��o da classe GradeBook de GradeBook.h
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 114). Edi��o do Kindle.
*/
#include <iostream>
#include "GradeBook2.h"

using namespace std;

int main()
{
    // limpa a tela
    system("cls");

    // cria o objeto da classe GradeBook2
    GradeBook2 meuGradeBook2( "Livro C++ como programra dos Deitel" );

    // chama a fun��o displayMessage com o objeto da classe
    meuGradeBook2.displayMessage();

    // chama a fun��o determine com o objeto da classe
    meuGradeBook2.determineClassAverage();

    // pausa
    system("pause");

    // fim do programa
    return 0;
} // fim main
