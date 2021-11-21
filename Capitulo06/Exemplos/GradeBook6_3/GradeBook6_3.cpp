/*
    1// Figura 6.4: GradeBook.cpp
    2// Defini��es de fun��o-membro para a classe GradeBook que
    3// determina a m�xima de tr�s notas.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 185). Edi��o do Kindle.
*/

// incluir biblioteca
#include <iostream>
#include <locale>

#include "GradeBook6_3.h"

using namespace std;

// cria o construtor da classe GradeBook
GradeBook::GradeBook(  string name ) // cria o construtor GradeBook
{
    setCourseName( name ); // chama o m�todo set que configura o nome do curso
    //studentMaximum = 0; // vai receber o maior valor das notas

} // fim construtor

// cria o m�todo setCourseName
void GradeBook::setCourseName( string name )
{
    // cria a condi��o para o tamanho do nome do curso
    // se o nome for igual a 25 caracteres fa�a
    if( name.length() == 25 )
    {
        // nome do curso recebe o nome
        courseName = name;
    } // fim if
    // se o nome do curso tiver mais de 25 caracteres
    else
    {
        // configura o nome do curso para receber os 25 primeiros caracteres
        courseName = name.substr( 0, 25 );

        // imprima
        cout << "Name\" " << name << "\"\nExcede o tamanho de 25 caracteres\n"
                << "\nNome do curso limitado aos 25 caracteres iniciais:\n"
                << name << endl;
    } // fim else

} // fim fun��o setCourseName

// cria a fun��o getCourseName
string GradeBook::getCourseName()
{
    // retorna o nome do curso
    return courseName;
} // fim getCourseName

// cria a fun��o displayMessage
void GradeBook::displayMessage()
{
    // mostra a mensagem de boas-vindas
    cout << "\nBem vindo ao curso: " << getCourseName() << "!" << endl;

} // fim displayMassage

// cria a fun��o inputGrades
void GradeBook::inputGrades()
{
    // cria vari�veis
    int grade1; // primeira nota
    int grade2; // segunda nota
    int grade3; // terceira nota

    // entrada de dados
    cout << "Entre com as tr�s notas: ";
    cin >> grade1 >> grade2 >> grade3;

    // chama a fun��o maximum e atribui a vari�vel studentMaximum
    studentMaximum = maximum( grade1, grade2, grade3 );

} // fim inputGrades

// cria a fun��o maximum
int GradeBook::maximum( int x, int y, int z )
{
    // cria a vari�vel
    int maximumValue = x; // maximumValue recebe o valor de x;

    // se y maior que maximumValue
    if( y > maximumValue )
        // maximumValue recebe o valor de y
        maximumValue = y;

    // se z maior que maxiumValue
    if( z > maximumValue )
        // maximumValue recebe o valor de z
        maximumValue = z;

    // retorna o valor
    return maximumValue;

} // fim fun��o maximum

// cria a fun��o gradeReport
void GradeBook::dysplayGradeReport()
{
    // imprime o maior valor da tr�s notas
    cout << "O maior valor � " << studentMaximum << endl;
} // fim fun��o dysplayGradeReport
