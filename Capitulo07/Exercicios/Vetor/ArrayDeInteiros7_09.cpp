/*
    7.9 Considere um array de inteiros 2 por 3 t.
    a) Escreva uma declara��o para t.
    b) Quantas linhas tem t? ( 2 )
    c) Quantas colunas tem t? ( 3 )
    d) Quantos elementos tem t? ( 6 )
    e) Escreva os nomes de todos os elementos na linha 1 de t. ( 1, 2, 3 )
    f) Escreva os nomes de todos os elementos na coluna 2 de t. ( 4, 5, 6 )
    g) Escreva uma �nica instru��o que configura o elemento de t na linha 1
    e na coluna 2 como zero. ( t[ 1 ] = 0 )

    h) Escreva uma s�rie de instru��es que inicializam cada elemento de t como zero.
    N�o utilize um loop. int t[ 2  ][ 3 ] = { { 0, 0, 0 }, { 0, 0, 0 } };

    i) Escreva uma instru��o for aninhada que inicializa cada elemento de t como zerofor
    for( int i = 0;
    j) Escreva uma instru��o que insere os valores para os elementos de t a partir do terminal.
    k) Escreva uma s�rie de instru��es que determinam e imprimem o menor valor no array t.
    l) Escreva uma instru��o que exibe os elementos na linha 0 de t.
    m) Escreva uma instru��o que soma os elementos na coluna 3 de t.
    n) Escreva uma s�rie de instru��es que imprime o array t no formato tabular.
        Liste os subscritos de coluna como t�tulos ao longo do topo  da tabela e liste
        os subscritos de linha � esquerda de cada linha.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 302). Edi��o do Kindle.
    Autor: Pedro Filho, 12/10/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision
#define LINHA 2
#define COLUNA 3

using namespace std;

// prot�tipo
void adicionarValores( int [][ COLUNA ], int, int );
void mostrarValores( int [][ COLUNA ], int, int );
int menorValor( int [][ COLUNA ], int, int );

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cria o array
    int t[ LINHA ][ COLUNA ]; // array com duas linha e tr�s colunas
    // vari�vel
    int valor;
    int menor = 0;
    int maior = 0;
    int soma = 0;

    cout << "i) Escreva uma instru��o for aninhada que inicializa cada elemento de t como zerofor" << endl;
    for( int lin = 0; lin < LINHA; lin++ )
        for( int col = 0; col < COLUNA; col++ )
            t[ lin ][ col ] = 0;

    // chama a fun��o mostrar valor
    mostrarValores( t, LINHA, COLUNA );

    cout << "j) Escreva uma instru��o que insere os valores para os elementos de t a partir do terminal." << endl;
    for( int linha = 0; linha < LINHA; linha++ ) // loop para linha
    {   // loop para a coluna
        for( int coluna = 0; coluna < COLUNA; coluna++ )
        {
            // entrada de dados
            cout << "Entre com o valor de t[ " << linha << " ] [ " << coluna << " ] = ";
            cin >> valor; // entreda do usu�rio
            t[ linha ][ coluna ] = valor; // vetor recebe o valor do usu�rio
        } // fim for interno
    } // fim for externo

    // chama a fun��o mostrar valor
    mostrarValores( t, LINHA, COLUNA );


    cout << "k) Escreva uma s�rie de instru��es que determinam e imprimem o menor valor no array t." << endl;
    adicionarValores(t, LINHA, COLUNA );
    mostrarValores( t, LINHA, COLUNA );
    cout << "O menor valor � " << menorValor( t, LINHA, COLUNA ) <<endl;

    cout << "l) Escreva uma instru��o que exibe os elementos na linha 0 de t." << endl;
    // mostra valores
    cout << "t[ linha ][ coluna ] = { "; // cabe�alho
    for( int linha = 0; linha < 1; linha++ ) // loop para linha
        for( int coluna = 0; coluna < COLUNA; coluna++ ) // loop para coluna
            cout << t[ linha ][ coluna ] << " "; // imprime os valores do array
        cout << " }; " << endl; // imprime o fim da chave e pula linha


    cout << "m) Escreva uma instru��o que soma os elementos na coluna 3 de t." << endl;
    cout << "vetor = { ";
    for( int linha = 0; linha < LINHA; linha++ )
    {
        cout << t[ linha ][ 2 ] << " ";
        soma += t[ linha ][ 2 ];
    } // fim for
    cout << " };" << endl;
    cout << "Soma = " << soma << endl;

    /*n) Escreva uma s�rie de instru��es que imprime o array t no formato tabular.
        Liste os subscritos de coluna como t�tulos ao longo do topo  da tabela e liste
        os subscritos de linha � esquerda de cada linha.
    */

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a fun��o adicionarValores
void adicionarValores( int vetor[][ COLUNA ], int lin, int col )
{
    srand( time( 0 ) );

    // loop para a linha
    for( int linha = 0; linha < lin; linha++ )
    {
        for( int coluna = 0; coluna < col; coluna++ )
        {
            // vetor recebe um valor aleat�rio entre 1 e 100
            vetor[ linha ][ coluna ] = 1 + rand() % 100;
        } // fim for coluna
    } // fim for linha
} // fim adicionarValores

// cria a fun��o mostrarValores
void mostrarValores( int vetor[][ COLUNA ], int lin, int col )
{
    cout << "vetor = { ";
    for( int linha = 0; linha < lin; linha++ )
    {
        for( int coluna = 0; coluna < col; coluna++ )
        {
            cout << vetor[ linha ][ coluna ] << " ";
        } // fim for coluna
    } // fim for linha
    // imprima
    cout << " };" << endl;
} // fim fun��o mostrarValores

// cria fun��o menor valor
int menorValor( int vetor[][ COLUNA ], int lin, int col )
{
    int menor = vetor[ 0 ][ 0 ]; // cria vari�vel
    // loop para linha
    for( int linha = 0; linha < lin; linha++ ) //
    { // loop para a coluna
        for( int coluna = 0; coluna < col; coluna++ )
        { // se vetor menor que menor
            if( vetor[ linha ][ coluna ] < menor )
                // menor recebe o vetor
                menor = vetor[ linha ][ coluna ];
        } // fim for coluna
    } // fim for linha

    // retorne o menor
    return menor;
} // fim fun��o menorValor
