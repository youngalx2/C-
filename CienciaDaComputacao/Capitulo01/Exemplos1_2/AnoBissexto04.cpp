/*
    Este programa testa se um n�mero inteiro corresponde a um ano bissexto
    no calend�rio gregoriano. Um ano � um ano bissexto se for divis�vel por 4 (2004),
    a menos que seja divis�vel por 100, caso em que n�o � (1900),
    a menos que seja divis�vel por 400, caso em que � (2000).
    Sedgewick, Robert; Wayne, Kevin. Ci�ncia da computa��o (p. 28).
    Pearson Education. Edi��o do Kindle.
    08/11/2021
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
    int pesquisarAno; // ano a pesquisar
    double anoBissexto; // confirma o ano bissexto

    // entrada de dados
    cout << "Digite um ano para saber se � bissexto: ";
    cin >> pesquisarAno;

    // calcular
    anoBissexto = (pesquisarAno % 4 == 0 );
    cout << "anoBissexto = (pesquisarAno % 4 == 0 ); " << anoBissexto << endl;
    anoBissexto = anoBissexto && (pesquisarAno % 100 != 0 );
    cout << "anoBissexto = anoBissexto && (pesquisarAno % 100 != 0 );" << anoBissexto << endl;
    anoBissexto = anoBissexto || (pesquisarAno % 400 == 0 );
    cout << "anoBissexto = anoBissexto || (pesquisarAno % 400 == 0 );" << anoBissexto << endl;

    // se a resposta for 1
    if( anoBissexto == 1 )
        // imprima
        cout << pesquisarAno << " � um ano bissexto." << endl;

    // se a resposta for 0
    if( anoBissexto == 0 )
        // imprima
        cout << pesquisarAno << " N�o � um ano bissexto." << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
