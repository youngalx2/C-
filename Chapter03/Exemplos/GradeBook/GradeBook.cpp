/*
    1// Figura 3.16: GradeBook.cpp
     2// Implementa��es das defini��es de fun��o-membro de GradeBook.
     3// A fun��o setCourseName realiza a valida��o.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 79). Edi��o do Kindle.
*/
#include <iostream>
#include <string>
#include "GradeBook.h" // inicia a defini��o da classe GradeBook

using namespace std;

// construtor inicializa nomeDoCurso com string fornecida como argumento
GradeBook::GradeBook( string nome )
{
    setGradeBook( nome );
} // fim construtor

// fun��o que configura nomeDoCurso
// assegura que o nome tenha no m�ximo 25 caracteres
void GradeBook::setGradeBook(string nome )
{
    if( nome.length() <= 25 ) // se o nome tiver 25 ou menos caracteres
        nomeDoCurso = nome; // armazena o nome no objeto

    if( nome.length() > 25 ) // se o nome tiver mais de 25 caracteres
    {
        // configura o nomeDoCurso com os primeiros 25 caracteres do par�metro nome
        nomeDoCurso = nome.substr( 0, 25 );

        // imprima
        cout << "Nome \" " << nome << "\" excede o tamanho m�ximo (25 caracteres).\n"
                << "Limitado o nome do curso at� (25 caracteres).\n" << endl;
    } // fim if
} // fim fun��o set

// fun��o para obter o nomeDoCurso
string GradeBook::getGradeBook()
{
    // retorna  o nomeDoCurso do objeto
    return nomeDoCurso;
} // fim fun��o get

// fun��o que exibe uma mensagem de boas-vinda  para o usu�rio GradeBook
void GradeBook::displayMessage()
{
    // chama a fun��o getGradeBook para obter o nomeDoCurso
    cout << "Bem vindo ao curso:\n" << getGradeBook() << "!" << endl;
} // fim displayGradeBook
