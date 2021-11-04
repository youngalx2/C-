/*
    4.15 Uma grande ind�stria qu�mica paga sua equipe de vendas por comiss�o.
    Os vendedores recebem $200 por semana mais 9% de suas vendas  brutas por semana.
    Por exemplo, um vendedor que comercializa um valor de $5.000 em produtos
    qu�micos por semana recebe $200 mais 9% de $5.000, ou um total de $650.
    Desenvolva um programa em C++ que utiliza uma instru��o while para inserir
    as vendas brutas  de cada vendedor durante a �ltima semana e calcula e exibe
    os rendimentos desse vendedor. Processe os n�meros de um vendedor por  vez.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 135). Edi��o do Kindle.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 134). Edi��o do Kindle.
    Autor: Pedro Filho, 16/08/2021
*/

#include <iostream>
#include <locale>
#include <iomanip>

#include "ComissaoPorVida.h"

using namespace std;

// cria as fun��es membros da classe Comiss�o por vendas
void ComissaoPorVendas::setValorDaVenda( double valor )
{
    // se valor maior que zero
    if( valor > 0 )
    {
        // venda recebe o valor
        valorDaVenda = valor;
    } // fim if
} // fim fun��o

// fun��o getValordaVenda
double ComissaoPorVendas::getValorDaVenda()
{
    // retornar o valor da venda
    return valorDaVenda;
} // fim fun��o

// fun��o entrada de dados
void ComissaoPorVendas::entradaDeDados()
{
    cout << "Entre com o valor da venda (-1 = sair) R$";
    cin >> valorDaVenda;

    // enquanto valor maior que zero
    while( valorDaVenda != -1 )
    {
        // chama a fun��o mostra sal�rio
        mostrarSalario();

        // entrada de dados
        cout << "\nEntre com o valor da venda (-1 = sair) R$";
        cin >> valorDaVenda;

    } // fim while
} // fim fun��o

// fun��o mostrarSalario
void ComissaoPorVendas::mostrarSalario()
{
    // cria vari�veis
    // calcula o valor da comiss�o
    double comissao = getValorDaVenda() * 9 / 100;
    double salario = 200.00 + comissao; // calcula o valor do sal�rio

    // imprime o valor do sal�rio
    cout << "Sal�rio R$" << setprecision( 2 ) << fixed <<  salario << endl;
} // fim fun��o
