/*
    n | n�mero de linhas e colunas
    i | �ndice de linha
    j | �ndice de coluna

    Este programa recebe um argumento de linha de comando inteiro n
    e usa loops for aninhados para imprimir uma tabela n por n com um
    asterisco na linha ie coluna j se i divide j ou j divide i. As vari�veis de
    controle de loop i e j controlam a computa��o.
    Sedgewick, Robert; Wayne, Kevin. Ci�ncia da computa��o (p. 63).
    Pearson Education. Edi��o do Kindle.
    14/11/2021
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

    // vari�vel
    int valor;

    cout << "IMPRIME UMA SETA" << endl;

    // entrada de dados
    cout << "Digite um valor inteiro: ";
    cin >> valor;

    // loop para a linha
    for( int i = 1; i <= valor; i++ )
    {
        // loop para a coluna
        for ( int j = 1; j <= valor; j++ )
        {
            // condi��es
            if( i % j == 0 || j % i == 0 ) // se verdade
                cout << "* "; // imprime asterisco
            else // se n�o
                cout << "  "; // imprime espa�o em branco
        } // fim for coluna
        cout << i << endl; // pula uma linha
    } // fim for linha

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
