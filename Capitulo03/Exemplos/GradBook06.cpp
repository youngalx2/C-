/*
    1// Figura 3.12: GradeBook.cpp
    2// Defini��es de fun��o-membro de GradeBook. Esse arquivo cont�m
    3// implementa��es das fun��es-membro prototipadas em GradeBook.h.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 75). Edi��o do Kindle.
    Autor:
*/

#include <iostream>
#include <locale>
#include <string>
#include "GradBook06.h"

using namespace std;

    // cria construtor
    GradBook06::GradBook06( string nome )
    {
        setNomeDoCurso( nome );
    } // fim construtor

    void GradBook06::setNomeDoCurso( string nome )
    {
        nomeDoCurso = nome;
    } // fim set

    // cria get
    string GradBook06::getNomeDoCurso()
    {
        return nomeDoCurso;
    } // fim get

    // cria display
    void GradBook06::displayMessage()
    {
        cout << "Bem vindo ao curso: " << getNomeDoCurso() << endl;
    } // fim display
