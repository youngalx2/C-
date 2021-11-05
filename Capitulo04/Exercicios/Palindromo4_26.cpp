/*
    4.26 Um pal�ndromo � um n�mero ou uma frase de texto que � lido da mesma
    forma da esquerda para a direita e da direita para a esquerda.
    Por exemplo, cada um dos seguintes inteiros de cinco d�gitos � um pal�ndromo:
    12321, 55555, 45554 e 11611. Escreva um programa  que l� em um inteiro de
    cinco d�gitos e determine se ele � ou n�o um pal�ndromo.
    [Dica: Utilize os operadores de divis�o e m�dulo para  separar o n�mero em seus
    d�gitos individuais.]
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 138). Edi��o do Kindle.
    Autor: Pedro Filho, 19/08/2021
*/

// incluir biblioteca
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

    // cria vari�veis
    int n1, n2, n3, n4, n5; // recebe digitos do n�mero informado
    int numero; // recebe n�mero informado pelo usu�rio

    // entrada de dados
    cout << "Digite um n�mero entre 1000 e 99999 (-1 para sair): ";
    cin >> numero; // aguarda entrada do usu�rio

    // separando digitos
    n1 = numero / 10000 % 10000; // recebe o primeiro digito
    n2 = numero % 10000 / 1000; // recebe o segundo digito
    n3 = numero % 1000 / 100; // recebe o terceiro
    n4 = numero % 100 / 10; // recebe o quarto
    n5 = numero % 10 / 1; // recebe o quinto

    // mostra resultado
    cout << "O n�mero: " << n1 << ' ' << n2 << ' ' << n3 << ' ' << n4 << ' ' << n5 << endl;

    if( n1 == n5 )
    {
    if( n2 == n4 )
    {
        cout << "� um pal�ndromo." << endl;
    } // fim if 2
    } // fim if 1

    if( n1 != n5 )
    {
    if( n2 != n4 )
    {
        cout << "N�o � um pal�ndromo." << endl;
    } // fim if 2
    } // fim if 1

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
