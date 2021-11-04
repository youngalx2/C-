/*
    Cria a classe Gradbook 01
    Autor:
*/

#include <iostream>
#include <locale>

using namespace std;

// cria a classe gradBook
class GradBook
{

public: // � UM ESPECIFICADOR DE ACESSO, s�o sempre seguidos por : (dois pontos)

    // cria a fun��o-membro displayManssage que mostra uma mensagem de boas vindas
    void displayMessage()
    {
        cout << "Bem vindo ao Grad Book!" << endl;
    } // fim fun��o membro
}; // fim classe

// fun��o principal
int main()
{
    // define a localiza��o geogr�fica
    setlocale(LC_ALL, "portuguese");

    // cria o objeto para a classe GradBook
    GradBook myGradBook;

    // chama a fun��o da classe Gradbook
    myGradBook.displayMessage();

    return 0; // programa terminado com sucesso

} // fim main
