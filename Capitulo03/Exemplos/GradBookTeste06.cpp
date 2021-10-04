/*
    1// Figura 3.13: fig03_13.cpp
    2// Demonstra��o de classe GradeBook depois de separar
    3// sua interface de sua implementa��o.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 76). Edi��o do Kindle.
    Autor:
*/

#include <iostream>
#include <locale>
#include <string>
#include "GradBook06.h"

using namespace std;

// fun��o principal
int main()
{
    // define a localiza��o geogr�fica
    setlocale(LC_ALL, "portuguese");

    // cria objeto para classe grad book
    GradBook06 meuGradBook1( "C++ como Programar." );
    GradBook06 meuGradBook2( "C# How to Program" );

    meuGradBook1.displayMessage();

    // mostra resultado
    cout << "meuGradBook1 criado para o curso: " << meuGradBook1.getNomeDoCurso() << endl;

    return 0; // programa terminado com sucesso

} // fim main
