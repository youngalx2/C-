/*
    1// Figura 5.9: GradeBook.h
    2// Defini��o da classe GradeBook que conta as notas A, B, C, D e F.
    3// As fun��es-membro s�o definidas no GradeBook.cpp
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 152). Edi��o do Kindle.
*/
#include <iostream>
#include <locale>
#include "GradeBook5_9.h"

using namespace std;

int main()
{
    // localiza��o geogr�fica
    setlocale(LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cabe�alho
    cout << "GRADEBOOK 5_9" << endl;

    // cria o objeto da classe GradeBook
    GradeBook meuGradeBook("Livro C++ como programar dos Deitel" );

    //mostra a mensagem de boas-vindas
    meuGradeBook.displayMessage();

    // l� as notas fornecidas pelo usu�rio
    meuGradeBook.inputGrades();

    // mostra  o relat�rio das notas lan�adas
    meuGradeBook.displayGradeReport();

    cout << endl; // pula linha

    // pausa o programa
    system("pause");

    // fim do programa
    return 0;
} // fim main
