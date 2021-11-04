/*
    1// Figura 3.5: fig03_05.cpp
    2// Define a classe GradeBook que cont�m um membro de dados courseName
    3// e fun��es-membro para configurar e obter seu valor;
    4// Cria e manipula um objeto GradeBook com essas fun��es.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 63). Edi��o do Kindle.
    Autor:
*/

#include <iostream>
#include <locale>

using namespace std;

// cria a classe GradBook
class GradBook
{
public:
    // cria a fun��o que configura o nome do curso
    void setNomeDoCurso( string nome )
    {
        nomeDoCurso = nome;
    } // fim fun��o set

    // cria a fun��o que obtem o nome do curso
    string getNomeDoCurso()
    {
        return nomeDoCurso; // retornao nome do curso
    } // fim get

    // cria a fun��o displayMessage
    void displayMessage()
    {
        cout << "Bem vindo ao curso: " << getNomeDoCurso() << "!" << endl;
    } // fim display

private:
    // vari�vel
    string nomeDoCurso;

}; // fim classe
// fun��o principal
int main()
{
    // define a localiza��o geogr�fica
    setlocale(LC_ALL, "portuguese");

    // cria vari�vel
    string nomeCurso;

    // cria o objeto da classe GradBook
    GradBook meuGradBook;

    // mostra o valor inicial do nome do curso
    cout << "O valor inicial do nome do curso �: " << meuGradBook.getNomeDoCurso() << endl;

    // entrada de dados pelo usu�rio
    cout << "Informe o nome do curso: ";

    // obtem o nome do curso digitado pelo usu�rio
    getline( cin, nomeCurso );

    // chama a fun��o-membro set da classe GradBook, atrav�s do objeto meuGradBook,
    // e atribui o valor da vari�vel string nomeCurso
    meuGradBook.setNomeDoCurso( nomeCurso );

    // pula uma linha
    cout << endl;

    // chama a fun��o membro para mostra o nome do curso
    meuGradBook.displayMessage();

    return 0; // programa terminado com sucesso

} // fim main
