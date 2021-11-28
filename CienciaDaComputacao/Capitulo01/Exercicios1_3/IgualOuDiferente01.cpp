/*
    Exerc�cios 1.3.1 Escreva um programa que receba tr�s argumentos
    inteiros de linha de comando e imprima igual se todos os tr�s forem
    iguais, e diferente de outra forma.
    Sedgewick, Robert; Wayne, Kevin. Ci�ncia da Computa��o (p. 81).
    Pearson Education. Edi��o do Kindle.
    Feito por: Pedo, 17/11/2021
*/

#include <iostream>
#include <locale>

using namespace std;

// fun��o principal
int main()
{
    setlocale( LC_ALL, "portuguese"); // localiza��o geogr�fica

    system("cls"); // limpa a tela

    // vari�veis
    int a, b, c;

    cout << "Digite 3 n�meros diferentes: ";
    cin >> a >> b >> c;

    if( a == b && a == c )
        cout << "S�o todas iguais." << endl;
    else
        cout << "N�o s�o iguais. " << endl;

    cout << endl; // pula uma linha

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
