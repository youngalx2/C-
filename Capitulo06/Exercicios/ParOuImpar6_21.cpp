/*
    6.21 Escreva um programa que insere uma s�rie de inteiros e os passa um por
    vez para a fun��o even, que utiliza o operador m�dulo para determinar se um
    inteiro � par. A fun��o deve aceitar um argumento inteiro e retornar true se o
    inteiro for par e false, caso contr�rio.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 243). Edi��o do Kindle.
    Autor: Pedro Filho, 13/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// prot�tipo de fun��o
int parOuImpar( int numero );

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cria vari�veis
    int resposta, valor;
    int resp = 0;

    // fa�a enquanto resp diferente de -1
    while( resp != -1 )
    {
        // cabe�alho
        cout << "VALOR PAR OU �MPAR" << endl;

        // entrada de dados
        cout << "Digite um valor: ";
        cin >> valor;

        // resposta recebe a fun��o parOuImpar
        resposta = parOuImpar( valor );

        // se a resposta for igual a 1
        if( resposta == 1 )
            // imprima � par
            cout << valor << " � par." << endl;
        else // se n�o
            // imprima
            cout << valor << " n�o � par." << endl;

        // pergunta
        cout << "Deseja continuar (-1 = sair)? ";
        cin >> resp;

        system("cls"); // limpa a tela

        // se resp igual a -1
        if( resp == -1 )
            break; // sair

    } // fim while
    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a fun��o parOuImpar
int parOuImpar( int numero )
{
    // se o n�mero m�dulo 2 igual a zero
    if( numero % 2 == 0 )
        return 1; // verdadeiro
    else
        return 0; // falso
} // fim fun��o
