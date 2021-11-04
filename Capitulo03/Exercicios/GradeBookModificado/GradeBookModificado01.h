#include <iostream>
#include <string>

using namespace std;

class GradeBookModificado01
{
public:
    GradeBookModificado01( string, string ); // cria o construtor
    void setNomeDoCurso( string ); // fun��o que configura o nome do curso
    string getNomeDoCurso(); // fun��o que obtem o nome do curso
    void setNomeDoProfessor( string ); // fun��o que configura o nome do professor
    string getNomeDoProfessor(); // fun��o que obtem o nome do professor
    void displayMessage(); // fun��o que mostra a mensagem de boas-vindas

private:
    string nomeDoCurso; // vari�vel para o nome do curso
    string nomeDoProfessor; // vari�vel que recebe o nome do professor

}; // fim classe Grade
