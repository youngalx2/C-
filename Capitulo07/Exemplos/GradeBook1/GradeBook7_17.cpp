/*
    1// Figura 7.17: GradeBook.cpp
    2// Defini��es de fun��o-membro para a classe GradeBook que
    3// utiliza um array para armazenar notas de teste
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 272). Edi��o do Kindle.
    Autor: 04/10/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <iomanip> // para fixed, setprecision e setw
#include "GradeBook7_16.h" // para classe
#include <string> // para a string

    // cria o construtor
    GradeBook::GradeBook( string name, const int gradesArray[ ] )
    {
        setCourseName( name );

        // loop para incluir nota em gradesArray
        for( int grade = 0; grade < students; grade++ )
            grades[ grade ] = gradesArray[ grade ];
    } // fim construtor

    // cria setCourseName
     void GradeBook::setCourseName( string name )
    {
        // nome do curso recebe o nome
        courseName = name;

    } // fim setCourseName

    // cria a fun��o getCourseName
    string GradeBook::getCourseName()
    {
        return courseName; // retorne o nome do curso
    } // fim fun��o gets

    // cria fun��o display message
    void GradeBook::displayMessage()
    {
        // imprima
        cout << "Bem vindo ao curso " << getCourseName() << endl;
    } // fim displayMessage

    // cria a fun��o processGradeBook
    void GradeBook::processGradeBook() // realiza varias opera��es nos dados
    {
        // chama a fun��o outputBarChart
        outputBarChart();

        // chama a fun��o getMedia
        cout << "\nA nota m�dia do grupo � " << fixed << setprecision( 2 ) << getAverage();

        // chama a fun��o getMinimum e getMaximum
        cout << "\nA menor nota foi " << getMinimum()
                << "\nA maior nota foi " << getMaximum()
                << endl;

    } // fim fun��o processGradeBook

    // cria a fun��o getMinimum
    int GradeBook::getMinimum() // localiza a menor nota
    {
        // cria vari�vel
        int lowGrade = grades[ 0 ];

        // loop para encontrar menor nota do estudante
        for( int grade = 0; grade < students; grade++ )
        {
            // se a nota for menor que a menor nota
            if( grades[ grade ] < lowGrade )
                // menor nota recebe a nota
                lowGrade = grades[ grade ]; // recebe uma nova nota
        } // fim for

        // retorne
        return lowGrade;

    } // fim da fun��o getMinimum

    // cria a fun��o getMaximum
    int GradeBook::getMaximum() // localiza a maior nota
    {
        int heithGrade = 0;

        // loop para encontrar a menor nota
        for( int grade = 0; grade < students; grade++ )
        {
            // se  a maior nota for maior que zero
            if( grades[ grade ] > heithGrade )
                // heithGrade recebe a maior nota
                heithGrade = grades[ grade ];
        } // fim for
        return heithGrade;
    } // fim func�o getMaximum

    // cria a fun��o getAverage
    double GradeBook::getAverage() // calcula a m�dia do aluno
    {
        // cria vari�vel
        int total = 0;

        // loop para somar os valores da grade
        for( int grade = 0; grade < students; grade++ )
            total += grades[ grade ];

        // retorna o valor da soma dividido pelos estudantes
        return static_cast< double >( total ) / students;
    } // fim fun��o getAverage

    // cria a fun��o outputBarChare
    void GradeBook::outputBarChart() // mostra as barras de caracteres baseado nas notas do alunos
    {
        cout << "\nDISTRIBUI��O DAS NOTAS" << endl;

        // constante para o tamanho da frequ�ncia
        const int frequencySize = 11;
        // cria array
        int frequency[ frequencySize ] = { 0 };

        // loop para incrementar a frequ�ncia apropriada
        for( int grade = 0; grade < students; grade++ )
            frequency[ grades[ grade ] / 10 ]++;

        // loop para cada frequ�ncia de notas   imprima barra como notas
        for( int contar = 0; contar < frequencySize; contar++)
        {
            // gera saida de gr�fico de barras
            if( contar == 0 )
            {
                cout << "  0-9: ";
            } // fim if
            // se n�o
            else if( contar == 10 )
            {
                cout << "  100: ";
            } // fim else if
            else
            {
                cout << contar * 10 << "-" <<   ( contar * 10 ) + 9 <<  ": ";
            }

            // loop para imprimir as barras de asteriscos
            for( int estrelas = 0; estrelas < frequency[ contar ]; estrelas++ )
                cout << "*";

            cout << endl; // pula linha
        } // fim for externo
    } // fim fun��o outputBarChats

    void GradeBook::outputGrades() // mostra as notas dos alunos
    {
            // imprime
        cout << "As notas s�o:\n\n";

        // gera saida das notas de cada aluno
        for( int student = 0; student < students; student++ )
        {
            // imprima as notas
            cout << "Estudante " << setw( 2 ) << student + 1 << ":  " << setw( 3 )
                    << grades[ student ] << endl;
        } // fim for
    } // fim fun��o outputGrades
