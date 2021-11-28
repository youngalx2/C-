/*
    1// Figura 7.24: GradeBook.cpp
    2// Defini��es de fun��o-membro para a classe GradeBook que
    3// utiliza um array bidimensional para armazenar notas.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 283). Edi��o do Kindle.
    Autor: 07/10/2021
*/

// incluir biblioteca
#include <iostream> // para cout, cin, endl, fixed
#include <iomanip> // para setw, setprecision
#include <string>
#include "GradeBook7_23.h" // para a classe

using namespace std;

// cria o construtor
GradeBook::GradeBook( string name, const int gradesArray[][ tests ] )
{
    setCourseName( name ); // chama a fun��o e recebe o nome do curso

    //copia notas de gradesArray para grades
    for( int student = 0; student < students; student++ )
        for( int test = 0; test < tests; test++ )
            grades[ student ][ test ] = gradesArray[ student ][ test ];
} // fim construtor GradeBook

// cria a fun��o setCourseName
void GradeBook::setCourseName( string name ) // configura o nome do curso
{
    courseName = name;
} // fim fun��o setCourseName

string GradeBook::getCourseName() // retorna o nome do curso
{
    return courseName;
} // fim fun��o getCourseName

// cria fun��o displayMessage
void GradeBook::displayMessage() // exibe uma mensagem de de boas-vindas
{
    cout << "Bem vindo ao curso:\n" << getCourseName() << "!" << endl;
} // fim fun��o

// cria a fun��o processGrades
void GradeBook::processGrades() // realiza v�rias opera��es de dadgros
{
    outputGrades(); // gera a sa�da das notas

    // chama as fun��es menor valor
    cout << "\nA menor nota foi " << getMinimum() << endl;

    // chama a fun��o maior valor
    cout << "\nA maior nota foi " << getMaximum() << endl;

    // gera sa�da do gr�fico de barras
    outputBarChart();

} // fim fun��o

// cria a fun��o getMinimum
int GradeBook::getMinimum() // localiza a menor nota
{
    // vaari�vel
    int lowGrade = 100;

    // loop para pesquisar pelos estudantes
    for( int student = 0; student < students; student++ )
    {
        // loop para pesquisar pelo teste
        for( int test = 0; test < tests; test++ )

            // se a nota for menor que a lowGrade
            if( grades[ student ][ test ]  < lowGrade )

                // lowgrade recebe a nota
                lowGrade = grades[ student ][ test ];
    } // fim for studante

    // retorna a menor nota
    return lowGrade;

}  // fim fun��o getMinimum

// cria a fun��o g etMaximum
int GradeBook::getMaximum() // localiza a maior nota
{
    // cria vari�vel
    int heighGrade = 0; // para receber a maior nota

    // loop para os estudantes(linha)
    for( int student = 0; student < students; student++ )
    {
        // loop para os testes
        for( int test = 0; test < tests; test++ )
        {
            // se matriz maior que heith
            if( grades[ student ][ test ] > heighGrade )

                heighGrade = grades[ student ][ test ];
        } // fim for interno
    } // fim for externo

    // retorne heighGrades
    return heighGrade;

} // fim da fun��o get

// cria a fun��o
double GradeBook::getAverage( const int setOfGrades[], const int grades ) // calcula a m�dia das notas
{
    int total = 0;

    // loop para percorre   r a matriz
    for( int grade = 0; grade < grades; grade++ )
    {
        total += setOfGrades[ grade ];
    } // fim loop for

    return static_cast< double >( total ) / grades;

} // fim fun��o getArerage

// cria a fun��o outputBahart
void GradeBook::outputBarChart() // gera sa�da do gr�fico de barras das notas
{
    cout << "\nDISTRIBUI��O DAS NOTAS" << endl;

    // cria constanteloo
    const int tamanhoFreq = 11;
    // cria array
    int frequencia[ tamanhoFreq ] = { 0 };

    //loop para mostrar a frequ�ncia
    for( int student = 0; student < students; student++ )
    {
        // loop para a coluna
        for( int test = 0; test < tests; test++ )
            // conta a frequ�ncia
            ++frequencia[ grades [student ][ test ] / 10 ];

    } // fim for externo

    // loop para cada frequ�ncia de notas mostra um asterisco
    for( int conta = 0; conta < tamanhoFreq; conta++ )
    {
        // gera a sa�da
        if( conta == 0 )
            cout << "  0-9: ";
        else if( conta == 10 )
            cout << "  100: ";
        else
            cout << conta * 10 << '-' << (conta * 10 ) + 9 << ":  ";

        // loop para mostrar o asteriscos
        for( int stars = 0; stars < frequencia[ conta ]; stars++ )
        {
            cout << "*";
        } // fim for asterisco

        cout << endl; // pula uma linha

    } // fim for conta
} // fim fun��o outpurBarChart

// cria fun��o
void GradeBook::outputGrades() // gera a sa�da do conte�do da matris notas
{
    // imprima
    cout << "As notas s�o:\n\n";
    cout << "               ";

    // cria o t�tulo da coluna
    for( int test = 0; test < tests; test++ )
    {
        cout << "Testes:" << test + 1 << "  ";
    } // fim for

    // cria t�tulo da m�dia
    cout << "Average" << endl;

    // cria o t�tulo da linha
    for( int student = 0; student < students; student++ )
    {
        cout << "Student " << setw( 2 ) << student + 1;

        // gera sa�da de notas
        for( int test = 0; test < tests; test++ )
            cout << setw( 10 ) << grades[ student ][ test ];

        // chama a fun��o getAverage
        double average = getAverage( grades[ student ], tests );
        cout << setw( 11 ) << setprecision( 2 ) << fixed << average << endl;
    } // fim for externo
} // fim fun��o getGardes
