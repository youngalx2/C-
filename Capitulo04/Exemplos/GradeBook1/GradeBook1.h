/*
    1// Figura 4.8: GradeBook.h
    2// Defini��o da classe GradeBook que determina a m�dia de uma classe.
    3// As fun��es-membro s�o definidas no GradeBook.cpp
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 105). Edi��o do Kindle.
*/

#include <string>

using namespace std;

// cria a classe GradeBook1
class GradeBook1
{
public:
    GradeBook1( string ); // cria o construtor GradeBook1
    void setCourseName( string ); // configura o nome do curso
    string getCourseName(); // recupera o nome do curso
    void displayMessage(); // mostra a mensagem de boas-vinda
    void determineClassAverage(); // caucula a m�dia das notas inceridas pelo usu�rio
private:
    string courseName; // cria a vari�vel da classe
}; // fim classe GradeBook1
