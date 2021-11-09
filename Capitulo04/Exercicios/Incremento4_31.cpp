/*
    4.31 O que h� de errado com a seguinte instru��o?
    Forne�a a instru��o correta para realizar o que o programador provavelmente
    estava tentando  fazer.
    cout << ++( x + y);
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 138). Edi��o do Kindle.
    Autor: Pedro, 21/08/2021
*/

// incluir biblioteca
#include <iostream>
#include <locale>

using namespace std;

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cria vari�veis e atribui valores
    int x = 5; // x recebe o valor 5
    int y = 7; // y recebe o valor 7

    // o (++) deve ser usado com as vari�veis e n�o com uma express�o
    // tanto como pr� ou p�s (incremento)
    cout << "x = 5 e y = 7 " << endl;
    cout << x << " + " << y << " = " << (x + y) << endl;
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
