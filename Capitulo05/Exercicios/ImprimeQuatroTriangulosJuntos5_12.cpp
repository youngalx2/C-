/*
    5.12 Escreva um programa que utiliza instru��es for para imprimir os seguintes
    padr�es separadamente, um embaixo do outro. Utilize loops  for para gerar os padr�es.
    Todos os asteriscos (*) devem ser impressos por uma �nica instru��o na forma
    cout << �*�; (isso faz com  que os asteriscos sejam impressos lado a lado).
    [Dica: Os �ltimos dois padr�es requerem que cada linha inicie com um n�mero
    apropriado  de espa�os em branco. Cr�dito extra: Combine seu c�digo dos quatro
    problemas separados em um �nico programa que imprime todos  os quatro padr�es
    lado a lado usando inteligentemente os loops for aninhados.]
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 178). Edi��o do Kindle.
    Autor: Pedro Filho, 28/08/2021
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

    // primeiro tri�ngulo
    cout << "Tri�ngulo A:" << endl;

    // loop para linha
    for( int linha = 1; linha <= 10; linha++ )
    {
        // loop para a coluna
        for( int coluna = 1; coluna <= linha; coluna++ )
        {
            // imprime o asterisco e um espa�o em branco
            cout << '*';
        } // fim for coluna

        // pula uma linha
        cout << endl;
    } // fim for linha

    // segundo tri�ngulo
    cout << "Tri�ngulo B:" << endl;

    // loop para linha
    for( int linha = 1; linha <= 10; linha++ )
    {
        // loop para a coluna
        for( int coluna = linha; coluna <= 10; coluna++ )
        {
            // imprime o asterisco e um espa�o em branco
            cout << '*';
        } // fim for coluna

        // pula uma linha
        cout << endl;
    } // fim for linha

    // terceiro tri�ngulo
    cout << "Tri�ngulo C:" << endl;

    // loop para linha
    for( int linha = 1; linha <= 10; linha++ )
    {
        // loop para a coluna
        for( int espacos = 1; espacos <= linha; espacos++ )
        {
            // imprime espa�os em branco
            cout << ' ';
        } // fim for espa�os em branco

        // loop para o asterisco
        for( int asterisco = linha; asterisco <= 10; asterisco++ )
        {
            // imprime asterisco
            cout << '*';
        } // fim for asterisco

        // pula uma linha
        cout << endl;
    } // fim for linha

    // quarto tri�ngulo
    cout << "Tri�ngulo D:" << endl;

    // loop para linha
    for( int linha = 1; linha <= 10; linha++ )
    {
        // loop para a coluna
        for( int espacos = linha; espacos <= 10; espacos++ )
        {
            // imprime espa�os em branco
            cout << ' ';
        } // fim for espa�os em branco

        // loop para o asterisco
        for( int asterisco = 1; asterisco <= linha; asterisco++ )
        {
            // imprime asterisco
            cout << '*';
        } // fim for asterisco

        // pula uma linha
        cout << endl;
    } // fim for linha

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
