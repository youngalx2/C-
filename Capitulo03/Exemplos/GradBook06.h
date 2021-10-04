/*
    1// Figura 3.11: GradeBook.h
    2// Defini��o da classe GradeBook. Esse arquivo apresenta a interface p�blica de
    3// GradeBook sem revelar as implementa��es de fun��es-membro de GradeBook
    4// que s�o definidas em GradeBook.cpp.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 75). Edi��o do Kindle.
*/

#include <iostream>
#include <string>

using namespace std;

class GradBook06
{
public:
    GradBook06( string ); // construtor para GradBook06
    void setNomeDoCurso( string ); // cria a fun��o set
    string getNomeDoCurso(); // cria a fun��o get
    void displayMessage(); // cria a fun��o display

private:
    string nomeDoCurso;
}; // fim classe
