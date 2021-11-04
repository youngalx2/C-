/*
    1// Figura 4.9: GradeBook.cpp
    2// Defini��es de fun��o-membro para a classe GradeBook que resolve o
    3// programa de m�dia da classe com repeti��o controlada por contador.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 105). Edi��o do Kindle.
*/

#include <iostream>
#include "GradeBook1.h" // nclui a defini��o de classe GradeBook

using namespace std;

// cria o construtor
GradeBook1::GradeBook1( string nome )
{
    setCourseName( nome ); // valida e armazena  curseName
} // fim construtor GradeBook1

// cria a fun��o   que configura o curseName
void GradeBook1::setCourseName( string nome )
{
    // se o tamanho do nome for maior ou igual a 25 caracteres
    if( nome.length() <= 25 )
    {
        // CurseName recebe nome
        courseName = nome;
    } // fim if
    else // se n�o tiver 25 caracteres
    {
        // nome do curso recebe apenas os 25 primeiros caracteres
        courseName = nome.substr( 0, 25 );

        // imprima
        cout << "O nome do curso: \"" << nome << "\"" << "\nExcede o tamanho de 25 caracteres." << endl;
    } // fim else
} // fim fun��o

// fun��o que obtem o nome do curso
string GradeBook1::getCourseName()
{
    // retorne o nome do curso
    return courseName;
} // fim fun��o get

void GradeBook1::displayMessage()
{
    // imprima
    cout << "Bem vindo ao curso:\n" << getCourseName() << endl;
} // fim fun��o display

// cria fun��o calcula a

// cria a fun��o que calcula a m�dia das notas
void GradeBook1::determineClassAverage()
{
    int total = 0;
    int gradeCounter = 1;
    int grade;
    int average;

     // enquanto contador menor ou igual a 10
     while( gradeCounter <= 10 )
     {

        // entrada de dados
        cout << "Entre com a nota: ";
        cin >> grade; // recebe as notas digitadas pelo usu�rio

        // calcular
        total = total + grade; // soma as notas digitadas
        gradeCounter = gradeCounter + 1; // contador do while
     } // fim while

     average = total / 10;

    // mostra o resultado
    cout << "Total das notas = " << total << endl;
    cout << "M�dia = " << average << endl;
} // fim fun��o
