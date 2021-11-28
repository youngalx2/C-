/*
    1// Figura 7.23: GradeBook.h
    2// Defini��o da classe GradeBook que utiliza um
    3// array bidimensional para armazenar notas de teste.
    4// As fun��es-membro s�o definidas em GradeBook.cpp
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 282). Edi��o do Kindle.
*/

// biblioteca
#include <string>

using namespace std;

class GradeBook
{
public:
    const static int students = 10; // n�mero de estudantes avaliados
    const static int tests = 3; // n�mero de testes aplicados para cada aluno

    GradeBook( string, const int [][ tests ] );
    void setCourseName( string ); // configura o nome do curso
    string getCourseName(); // retorna o nome do curso
    void displayMessage(); // exibe uma mensagem de de boas-vindas
    void processGrades(); // realiza v�rias opera��es de dados
    int getMinimum(); // localiza a menor nota
    int getMaximum(); // localiza a maior nota
    double getAverage( const int [], const int ); // calcula a m�dia das notas
    void outputBarChart(); // gera sa�da do gr�fico de barras das notas
    void outputGrades(); // gera a sa�da do conte�do da matris notas

private:
    string courseName; // para o nome do curso
    int grades[ students ][ tests ]; // para as notas dos alunos

}; // fim classe grade book
