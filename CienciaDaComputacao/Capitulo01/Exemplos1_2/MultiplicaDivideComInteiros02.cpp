/*
    A aritm�tica para inteiros � constru�da com xxx. A maior parte desse c�digo
    � dedicada � tarefa de inserir e retirar os valores; a aritm�tica real est� nas
    declara��es simples no meio do programa que atribuem valores a p, q e r.
    Sedgewick, Robert; Wayne, Kevin. Ci�ncia da computa��o (p. 23).
    Pearson Education. Edi��o do Kindle.
    09/11/2021
*/

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

    // vari�veis
    int num1, num2;

    // entrada de dados
    cout << "Digite dois inteiros: ";
    cin >> num1 >> num2;

    int p = num1 * num2;
    int q = num1 / num2;
    int r = num1 % num2;

    // mostra resultado
    cout << num1 << " * " << num2 << " = " << p << endl;
    cout << num1 << " / " << num2 << " = " << q << endl;
    cout << num1 << " % " << num2 << " = " << r << endl;
    cout << num1 << " = " << num2 << " * " << num2 << " + " << r << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
