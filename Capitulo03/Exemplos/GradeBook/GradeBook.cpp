#include <iostream>
#include <string>
#include "GradeBook.h"

using namespace std;

GradeBook::GradeBook( string nome )
{
    setGradeBook( nome );
} // fim construtor

void GradeBook::setGradeBook(string nome )
{
    if( nome.length() <= 25 )
        nomeDoCurso = nome;

    if( nome.length() > 25 )
    {
        nomeDoCurso = nome.substr( 0, 25 );

        cout << "Nome \" " << nome << "\" excede o tamanho m�ximo (25 caracteres).\n"
                << "Limitado o nome do curso at� (25 caracteres).\n" << endl;
    } // fim if
} // fim fun��o set

string GradeBook::getGradeBook()
{
    return nomeDoCurso;
} // fim fun��o get

void GradeBook::displayMessage()
{
    cout << "Bem vindo ao curso:\n" << getGradeBook() << "!" << endl;
}
