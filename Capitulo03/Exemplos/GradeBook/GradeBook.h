/*
    1// Figura 3.15: GradeBook.h
    2// Defini��o de classe GradeBook apresenta a interface public da
    3// classe. Defini��es de fun��o-membro aparecem em GradeBook.cpp.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 78). Edi��o do Kindle.
*/

#include <string>
using std::string;

// define a classe GradBook
class GradeBook
{
public:
    GradeBook( string ); // cria o construtor da classe
    void setGradeBook( string ); // fun��o que configura o nome do curso
    string getGradeBook(); // fun��o que obtem o nome do curso
    void displayMessage(); // fun��o que exibe uma mensagem de boas-vinda
private:
    string nomeDoCurso; // nome do curso da classe
}; // fim da classe
