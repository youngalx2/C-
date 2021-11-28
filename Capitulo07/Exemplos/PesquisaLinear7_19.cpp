/*
    1// Figura 7.19: fig07_19.cpp
    2// Pesquisa linear de um array.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 277). Edi��o do Kindle.
    06/10/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision
#include <ctime> // para srand()

using namespace std;

// prot�tipo
int pesquisaLinear( const int [], int, int );

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // constante
    const int tamanho = 10;

    // vetor
    int vetor[ tamanho ];

    // cria vari�vel
    int chave = 0;
    int retornado = 0;

    // gerador
    srand( time( 0 ) );

    // cabe�alho
    cout << "PESQUISA LINEAR" << endl;

    // loop para adicionar valores ao vetor
    for( int i = 0; i < tamanho; i++ )
        vetor[ i ] = 1 + rand() % 50;

    cout << "Vetor = { ";
    // loop para mostrar os valores do vetor
    for( int j = 0; j < tamanho; j++ )
        cout << vetor[ j ] << " ";
    cout << " };" << endl;

    // entrada de dados
    cout << "\nEntre 1 e 50, Que n�mero quer pesquisar? ";
    cin >> chave;

    // chama a fun��o pesquisa linear e atribui o valor para retornado
    retornado = pesquisaLinear( vetor, tamanho, chave );

    // se o valor retornado for diferente de -1
    if( retornado != -1 )
        cout << "O n�mero " << chave << " Est� na posi��o " << retornado + 1 << endl;
    else // se n�o
        cout << "O n�mero " << chave << " n�o foi localizado." << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a fun��o pesquisaLinear
int pesquisaLinear( const int vetor[], int tamanho, int chave )
{
    // loop para pesquisar no vetor o valor da chave
    for( int i = 0; i < tamanho; i++ )
        // se vetor igual a chave mostre a posi��o
        if( vetor[ i ] == chave )
            return i;

    return -1; // retorne menos 1( quando n�o encontrado)
} // fim fun��o pesquisaLinear
