/*
    1// Figura 6.3: GradeBook.h
    2// Defini��o de classe GradeBook que localiza a m�xima de tr�s notas.
    3// As fun��es-membro s�o definidas no GradeBook.cpp
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 185). Edi��o do Kindle.
*/

#include <string>

using namespace std;

// cria classe GradeBook
class GradeBook
{
public:
    GradeBook( string ); // cria o construtor que inicializa o nome docurso
    void setCourseName( string ); // configura o nome do curso
    string getCourseName(); // retorna o nome do curso
    void displayMessage(); // exibe a mensagem de boas-vindas
    void inputGrades(); // inserie tr�s notas fornecidas pelo usu�rio
    void dysplayGradeReport(); // exibe um relat�rio das notas fornecidas
    int maximum( int, int, int ); // determina o maior entre 3 valores

private:
    string courseName; // recebe o nome do curso
    int studentMaximum; // recebe a maior nota

}; // fim classe
