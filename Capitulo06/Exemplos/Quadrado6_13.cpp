/*
    1// Figura 6.13: fig06_13.cpp
    2// Fun��o square utilizada para demonstrar a pilha
    3// de chamadas de fun��o e os registros de ativa��o.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 205). Edi��o do Kindle.
*/

// incluir biblioteca
#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

// prot�tipos
int square( int );

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // vari�vel
    int numero = 0;

    // entreda de dados
    cout << "Digite um n�mero: ";
    cin >> numero; // aguarda entrada do usu�rio

    // mostra
    cout << "O quadrado de " << numero << " � " << square( numero ) << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// fun��o square
int square( int x )
{
    return x * x;
} // fim fun��o square
