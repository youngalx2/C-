/*
    2.26 Exiba o seguinte padr�o de tabuleiro com oito instru��es de sa�da e,
    em seguida, exiba o mesmo padr�o utilizando o menor n�mero de  instru��es poss�vel.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 53). Edi��o do Kindle.
    Autor: Pedro, 04/08/2021
*/

#include <iostream>
#include <locale>

using namespace std;

// fun��o principal
int main()
{
    // define a localiza��o geogr�fica
    setlocale(LC_ALL, "portuguese");

    // mostra tabuleiro de asterisco
    cout << "* * * * * * *\n";
    cout << " * * * * * * *\n";
    cout << "* * * * * * *\n";
    cout << " * * * * * * *\n";
    cout << "* * * * * * *\n";
    cout << " * * * * * * *\n";
    cout << "* * * * * * *\n";
    cout << " * * * * * * *\n";

    return 0; // programa terminado com sucesso

} // fim main
