  /*
    1// Figura 7.16: GradeBook.h
    2// Defini��o da classe GradeBook que usa um array para armazenar notas de teste.
    3// As fun��es-membro s�o definidas em GradeBook.cpp
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 271). Edi��o do Kindle.
    Autor: 04/10/2021
*/

// incluir biblioteca
#include <string> // para strings

using namespace std;

// cria a classe GradeBook
class GradeBook
{
public:
    // constante -- n�mero de alunos que fizeram o teste
    const static int students = 10; // na parte p�blica pode ser usado por toda a classe

    // cria o construtor para inicializa onome do curso e �s notas
    GradeBook( string, const int [] );

    void setCourseName( string ); // configura o nome do curso
    string getCourseName(); // retorna o nome do curso
    void displayMessage(); // mostra a mensagem de boas vindas
    void processGradeBook(); // realiza varias opera��es nos dados
    int getMinimum(); // localiza a menor nota
    int getMaximum(); // localiza a maior nota
    double getAverage(); // calcula a m�dia do aluno
    void outputBarChart(); // mostra as barras de caracteres baseado nas notas do alunos
    void outputGrades(); // mostra as notas dos alunos

private:
    // vari�vel para
    string courseName; // armazena o nome do curso
    // array para
    int grades[ students ];  // armazena as notas dos estudantes

}; // fim da classe
