/*
    7.10 Utilize um array unidimensional para resolver o seguinte problema.
    Uma empresa paga seu pessoal de vendas por comiss�o. Os vendedores
    recebem $200 por semana mais 9% de suas vendas brutas por semana.
    Por exemplo, um vendedor que vende $5.000 brutos em uma  semana
    recebe $200 mais 9% de $5.000 ou um total de $650. Escreva um programa
    (utilizando um array de contadores) que determina  quanto o pessoal de vendas
    ganhou em cada um dos seguintes intervalos (suponha que o sal�rio de cada
    vendedor foi truncado para uma  quantidade do tipo inteiro):
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 302). Edi��o do Kindle.
    Autor: Pedro Filho, 12/10/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// prot�tipos
void adicionarValores( int [], int );
void mostrarValores( int [], int );
void geraBarraAsterisco( int [], int ); // gera sa�da do gr�fico de barras dos valores

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // vari�vel
    const int tamanho = 10;

    // array
    int pagamentoPessoal[ tamanho ];

    // chama a fun��o adicionar valores
    adicionarValores( pagamentoPessoal, tamanho );
    // chama a fun��o mostrar valores
    mostrarValores( pagamentoPessoal, tamanho );
    // chama a fun��o barra de asterisco
    geraBarraAsterisco( pagamentoPessoal, tamanho );

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// adicionarValores
void adicionarValores( int vetor[], int tamanho )
{
    const int salarioFixo = 200;

    // vari�veis
    size_t i;
    double totalDasVendas = 0;
    double comissao = 0;
    double salarioAtual = 0;

    // cabe�alho
    cout << "ENTRADA DE VALORES" << endl;

    // loop para adicionar valores ao vetor
    for( i = 0; i < tamanho; i++ )
    {
        // entrada de dados
        cout << "Vendedor " << i + 1 << " total das vendas: R$ ";
        cin >> totalDasVendas;

        // calcular a comiss�o e sal�rio atual
        comissao = totalDasVendas * 9 / 100;
        salarioAtual = salarioFixo + comissao;

        // vetor recebe o valor do sal�rio atual dos vendedores
        vetor[ i ] = salarioAtual;

    } // fim for
} // fim da fun��o adicionarValores

// cria a fun��o mostrarValores
void mostrarValores( int vetor[], int tamanho )
{
    // configura��o
    cout << fixed << setprecision( 2 ); // duas casas decimais

    // cabe�alho
    cout << "\nFOLHA DE PAGAMENTO" << endl;

    // loop linha
    for( int linha = 0; linha < tamanho; linha++ )
    {
        // imprime o vendedor
        cout << "Vendedor " << setw( 3 ) << linha + 1
                << setw( 5 ) << "R$ " << setw( 7 ) << vetor[ linha ] << endl;
    } // fim for linha
} // fim fun��o

// cria a fun��o geraBarraAsterisco
void geraBarraAsterisco( int vetor[], int tamanho )
{
    // cabe�alho
    cout << "\nGERA BARRA DE ASTERISCO" << endl;

    // constante
    const int tamanhoFrequecia = 11;
    // cria vetor frequ�ncia
    int frequencia[ tamanhoFrequecia ] = { 0 };

    // para cada valor incrementa a frequ�ncia apropriada
    for( int i = 0; i < tamanho; i++ )
        // incrementa a frequ�ncia
        frequencia[ vetor[ i ]  / 100 ]++;

    // loop para cada frequ�ncia do valor mostrar gr�fico de barras
    for( int contar = 0; contar < tamanhoFrequecia; contar++ )
    {
        // GERA A SA�DA DO GR�FICO DE BARRAS
        // se j igual a zero
        if( contar == 0 )
        {
            // imprima
            cout << "R$ 200 - R$ 299:  ";
        } // fim if

        // se n�o se j igual a 10
        else if( contar == 10 )
        {
            // imprima
            cout << "R$ 1000 ou mais:  ";

            // loop para pesquisar no vetor valores iguais ou maiores que 1100
            for( int mil = 0; mil < tamanho; mil++ )
                // se o vetor tiver valor maior ou igual a 1100
                if( vetor[ mil ] >= 1100 )
                    // imprima
                    cout << "* ";

        } // fim else if
        else
        {
            if( contar > 2 )
                // imprima
                cout << "R$ " << contar * 100 << " - R$ " << ( contar * 100 ) + 99 << ":  ";
        } // fim else

        // loop para mostrar o gr�fico de barras
        for( int asterisco = 0; asterisco < frequencia[ contar ]; asterisco++ )
        {
            // imprima
            cout << "* ";
        } // fim for

        // se contar maior que 2
        if( contar > 1 )
            cout << endl; // pule uma linha

    } // fim for externo

} // fim fun��o geraBarraAsterisco
