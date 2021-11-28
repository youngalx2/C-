/*
    1.2.19 Escreva um programa que receba dois argumentos inteiros de linha
    de comando aeb e imprima um inteiro aleat�rio entre a e b, inclusive.
    Sedgewick, Robert; Wayne, Kevin. Ci�ncia da computa��o (p. 46).
    Pearson Education. Edi��o do Kindle.
    Feito por: Pedro 16/11/2021
*/

#include <iostream>
#include <locale>
#include <cstdlib>
#include <ctime>

using namespace std;

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // vari�veis
    int x, y, alea;

    // entrada de dados
    cout << "Digite dois inteiros diferentes: ";
    cin >> x >> y;

    srand( time( 0 ) ); // gera semente aleat�ria

    // condi��o se x menor que y
    if( x < y )
        alea = x + rand() % y; // alea recebe um valor entre x e y
    else // se n�o
        alea = y + rand() % x; // alea recebe um valor entre y e x

    // imprime resultado
    cout << "O valor aleat�rio ente "
            << x << " e " << y << " = " << alea << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
