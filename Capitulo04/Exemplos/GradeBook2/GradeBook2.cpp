/*
    1// Figura 4.13: GradeBook.cpp
    2// Defini��es de fun��o-membro para a classe GradeBook que resolve o
    3// programa de m�dia de classe com repeti��o controlada por sentinela.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 112). Edi��o do Kindle.
*/

#include <iostream>
#include <iomanip>
#include "GradeBook2.h"

using namespace std;

// cria o construtor Gradebook2 que inicializa como par�metro a string nome
GradeBook2::GradeBook2( string nome )
{
    // valida e  armazena o nome do curso
    setCurseName( nome );
} // fim construtor

// cria a fun��o setCurseName que configura o nome do curso
void GradeBook2::setCurseName( string nome )
{
    // se o nome tiver at� 25 caracteres
    if( nome.length() <= 25 )
    {
        curseName = nome; // nome do curso recebe o nome
    } // fim if
    else // se o nome tiver mais de 25 caracteres
    {
        // configure para receber s� os primeiros 25 caracteres
        curseName = nome.substr( 0, 25 );

        // imprima a mensagem
        cout << "Nome: \"" << nome << "\"\nExcede o limite de 25 caracteres\n"
                << "Nome do curso est� limitado aos primeiros 25 caracteres." << endl;
    } // fim else
} // fim fun��o setCurseName

// fun��o getCurseName
string GradeBook2::getCurseName()
{
    // retorne o nome do curso
    return curseName;
} // fim getCurseName

// fun��o displayMessage
void GradeBook2::displayMessage()
{
    // imprima
    cout << "\nBem vindo ao curso:\n" << getCurseName() << endl;
} // fim displayMessage

// fun��o determineClassAverage
void GradeBook2::determineClassAverage()
{
    // cria vari�veis
    int total = 0; // soma o total das notas digitadas pelo usu�rio
    int gradeCounter = 0; // conta o n�mero de notas digitadas
    int grade; // recebe as notas lan�adas
    double average = 0; // calcula a m�dia das notas

    // entrada de dados
    cout << "Digite a nota (-1 = sair): ";
    cin >> grade; // aguarda as notas digitadas pelo usu�rio

    // enquanto nota diferente de -1 fa�a
    while( grade != -1 )
    {
        // se nota maior que zero
        if( grade > 0 )
        {
            total = total + grade; // soma as notas
            gradeCounter = gradeCounter + 1; // conta as notas digitadas
        } // fim if

        // entrada de dados
        cout << "Digite a nota (-1 = sair): ";
        cin >> grade; // aguarda as notas digitadas pelo usu�rio

    } // fim while

    // se a contagem das notas for diferente de zero
    if( gradeCounter != 0 )
    {
        // m�dia recebe o valor da divis�o total pela contagem das notas
        average = static_cast <double> ( total ) / gradeCounter;

        // imprime resultado
        cout << "\nForam lan�adas " << gradeCounter << " notas, valor total " << total << endl;
        cout << "M�dia = " << average << endl;

    } // fim if
    else // se n�o
    {
        // imprima
        cout << "\nNenhuma nota foi inserida." << endl;
    } // fim else

} //  fim fun��o determine
