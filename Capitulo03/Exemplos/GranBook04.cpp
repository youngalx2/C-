/*
    1// Figura 3.7: fig03_07.cpp
    2// Instanciando m�ltiplos objetos da classe GradeBook e utilizando
    3// o construtor GradeBook para especificar o nome do curso
    4// quando cada objeto GradeBook � criado.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 68). Edi��o do Kindle.
    Autor:
*/

#include <iostream>
#include <locale>
#include <string>

using namespace std;

// cria a classe GradBook
class GradBook
{
public:

    // cria o construtor da classe
    GradBook ( string nome )
    {
        // chama a fun��o-membro set que inicializa o nome do curso
        setNomeDoCurso( nome );

    } // fim construtor

    // cria a fun��o setNomeDoCurso
    void setNomeDoCurso( string nome )
    {
        nomeDoCurso = nome; // armazena o nome do curso no objeto
    } // fim fun��o set

    // cria a fun��o getNomeDoCurso
    string getNomeDoCurso()
    {
        return nomeDoCurso; // retorna o nome do curso do objeto
    } // fim get

    // cria a fun��o displayMessage
    void displayMessage()
    {
        // mostra a mensagem de boas vinda
        cout << "Bem vindo ao curso: " << getNomeDoCurso() << endl;
    } // fim display

private:
    string nomeDoCurso; // cria a vari�vel privativa da classe

}; // fim classe


// fun��o principal
int main()
{
    // define a localiza��o geogr�fica
    setlocale(LC_ALL, "portuguese");

    // cria vari�vel
    string nomeCurso;

    // cria o objeto da classe GradBook
    GradBook meuGradBook01( "C++ Como Programar.");
    GradBook meuGradBook02( "C# How to Program." );

    // mostra resultado inicial
    meuGradBook01.displayMessage();
    meuGradBook02.displayMessage();

    return 0; // programa terminado com sucesso

} // fim main
