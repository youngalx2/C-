/*
    5.12 Escreva um programa que utiliza instru��es for para imprimir os seguintes
    padr�es separadamente, um embaixo do outro. Utilize loops  for para gerar os padr�es.
    Todos os asteriscos (*) devem ser impressos por uma �nica instru��o na forma
    cout << �*�; (isso faz com  que os asteriscos sejam impressos lado a lado).
    [Dica: Os �ltimos dois padr�es requerem que cada linha inicie com um n�mero
    apropriado  de espa�os em branco.

    Cr�dito extra: Combine seu c�digo dos quatro
    problemas separados em um �nico programa que imprime todos  os quatro padr�es
    lado a lado usando inteligentemente os loops for aninhados.]
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 178). Edi��o do Kindle.

    Autor: Pedro Filho, 28/08/2021
*/

// incluir biblioteca
#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    /*
    Cr�dito extra: Combine seu c�digo dos quatro
    problemas separados em um �nico programa que imprime todos  os quatro padr�es
    lado a lado usando inteligentemente os loops for aninhados.]
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 178). Edi��o do Kindle.
    */

    // cabe�alho
    cout << "Tri�nguloA: " << " Tri�nguloB: " << "   Tri�nguloC: " << "   Tri�nguloD: " << endl;

    // cria loop linha para os tri�ngulos
    for( int linha = 1; linha <= 10; linha++ )
    {
        // primeiro tri�ngulo
        for( int primeiro = 1; primeiro <= linha; primeiro++ )
        {
            // imprime asterisco
            cout << '*';
        } // fim for primeiro tri�ngulo

        // cria 13 espa�os em branco
        cout << setw(13);

        // cria o segundo tri�ngulo
        for( int segundo = linha; segundo <= 10; segundo++ )
        {
            // imprime asterisco
            cout << '*';
        } // fim for segundo tri�ngulo

        // cria 5 espa�os em branco
        cout << setw( 5 );

        // cria o terceiro tri�ngulo
        for( int terceiro = linha; terceiro <= 10; terceiro++ )
        {
            // imprime espa�os vazios
            cout << ' ';
        } // fim for terceiro tri�ngulo

        // quarto tri�ngulo
        for( int quarto = 1; quarto <= linha; quarto++ )
        {
            // imprime asterisco
            cout << '*';
        } // fim for quarto tri�ngulo

        // 5 espa�os em branco
        cout << setw( 6 );

        // quinto tri�ngulo
        for( int quinto = linha; quinto <= 10; quinto++ )
        {
            // imprime
            cout << '*';
        } // fim for quinto tri�ngulo

        // pula linha
        cout << endl;

    } // fim for linha

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
