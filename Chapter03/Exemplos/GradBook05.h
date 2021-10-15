#include <iostream>
#include <string>

using namespace std;

class GradBook
{
public:
    // cria o construtor
    GradBook( string nome )
    {
        setNomeDoCurso( nome );
    } // fim construtor

    // cria fun��o set
    void setNomeDoCurso( string nome )
    {
        // atribui par�metro nome � vari�vel da classe nomeDoCurso
        nomeDoCurso = nome;
    } // fim set nome

    // cria a fun��o get
    string getNomeDoCurso()
    {
        // retorna o valor da vari�vel nomeDoCurso
        return nomeDoCurso;
    } // fim get

    // cria display
    void displayMessage()
    {
        cout << "Bem vindo ao curso: " << getNomeDoCurso() << endl;
    } // fim display

private:
    // cria a vari�vel da classe
    string nomeDoCurso;

}; // fim classe
