/*
    1.2.21 Escreva um programa que receba um argumento duplo de
    linha de comando t e imprima o valor de sin (2t) + sin (3t).
    Sedgewick, Robert; Wayne, Kevin. Ci�ncia da computa��o (p. 46).
    Pearson Education. Edi��o do Kindle.
    Feito por: Pedro, 16/11/2021
*/

#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

// fun��o principal
int main()
{
    setlocale( LC_ALL, "portuguese"); // localiza��o geogr�fica

    system("cls"); // limpa a tela

    // vari�vel
    int t;

    cout << "SOMA DO SENO DE T" << endl;

    // entrada de dados
    cout << "Digite o valor de t: ";
    cin >> t;

    cout << "A soma do seno de t = " << sin( 2*t ) << " + "
            << sin( 3 *  t ) << " = " << sin(2 * t ) + sin( 3 * t ) << endl;

    cout << endl; // pula uma linha

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
