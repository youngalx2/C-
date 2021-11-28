/*
    6.20 Escreva uma fun��o multiple que determina para um par de inteiros se
    o segundo inteiro � um m�ltiplo do primeiro. A fun��o deve  aceitar dois
    argumentos inteiros e retornar true se o segundo for um m�ltiplo do primeiro
    e false, caso contr�rio. Utilize essa fun��o  em um programa que insere uma
    s�rie de pares de inteiros.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 243). Edi��o do Kindle.
    Autor: Pedro Filho, 13/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// prot�tipo de fun��o
int multiplos( int primeiro, int segundo );

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // vari�veis
    int primeiro = 0;
    int segundo = 0;
    int resposta = 0;

    // cabe�alho
    cout << "\tMULTIPLOS" << endl;

    // entrada de dados
    cout << "Digite o primeiro valor: ";
    cin >> primeiro;
    cout << "Digite o segundo valor: ";
    cin >> segundo;

    // resposta recebe o valor retornado da fun��o multiplos
    resposta = multiplos( primeiro, segundo );

    // se a resposta for igual a zero
    if( resposta == 0 )
        // imprima
        cout << segundo << " � multiplo de " << primeiro <<  endl;
    else
        cout << segundo << " n�o � multiplo de " << primeiro << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a fun��o multiplos
int multiplos( int primeiro, int segundo )
{
    // se primeiro dividido pelo segundo igual a zero
    if( segundo % primeiro == 0 )
        // retorne zero
        return 0;
    else
        return 1;

} // fim fun��o multiplos
