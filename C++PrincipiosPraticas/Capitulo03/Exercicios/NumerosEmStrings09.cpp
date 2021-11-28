/*
    9. Escreva um programa que converta n�meros soletrados como
    �zero� e �dois� em d�gitos, como 0 e 2. Quando o usu�rio insere
    um n�mero, o programa deve imprimir o d�gito correspondente.
    Fa�a isso para os valores 0, 1, 2, 3 e 4 e n�o escreva nenhum
    n�mero que eu sei se o usu�rio digitar algo que n�o corresponda,
    como computador est�pido !.
    Autor: Pedro, 10/11/2021
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
    int num;

    cout << "TRANSFORMA DIGITOS EM STRING" << endl;

    // entrada de dados
    cout << "Digite um n�mero entre 0 e 5 inclusive: ";
    cin >> num;

    // condi��es
    if( num == 0 )
        cout << "voc� digitou o n�mero ZERO." << endl;
    if( num == 1 )
        cout << "voc� digitou o n�mero UM." << endl;
    if( num == 2 )
        cout << "voc� digitou o n�mero DOIS." << endl;
    if( num == 3 )
        cout << "voc� digitou o n�mero TR�S." << endl;
    if( num == 4 )
        cout << "voc� digitou o n�mero QUATRO." << endl;
    if( num == 5 )
        cout << "voc� digitou o n�mero CINCO." << endl;
    if( num < 0 || num > 5 )
        cout << num << " � um n�mero indevido!" << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
