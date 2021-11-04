/*
    4.14 Desenvolva um programa C++ que determinar� se um cliente de uma loja
    de departamentos excedeu o limite de cr�dito em uma conta  corrente.
    Para cada cliente, os seguintes fatos est�o dispon�veis:
    a) N�mero de conta (um inteiro)
    b) Balan�o no in�cio do m�s
    c) Total de todos os itens cobrados desse cliente no m�s
    d) Total de pagamentos feitos pelo cliente no m�s
    e) Limite autorizado de cr�dito
    O programa deve utilizar uma instru��o while para inserir cada um desses fatos,
    calcular o novo saldo (= saldo inicial + taxas � cr�ditos)  e determinar se o novo
    saldo excede o limite de cr�dito do cliente. Para aqueles clientes cujo limite de
    cr�dito � excedido, o programa  deve exibir o n�mero da conta do cliente, o limite
    de cr�dito, o novo saldo e a mensagem �Limite de cr�dito excedido�.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 134). Edi��o do Kindle.
    Autor: Pedro Filho, 15/08/2021
*/

#include <iostream>
#include <iomanip>
#include "LimiteDeCredito.h"

using namespace std;

void LimiteDeCredito::setNumDaConta( int numero ) // configura o n�mero da conta
{
    // se n�mero da conta maior que zero
    if( numero > 0 )
    {
        numeroDaConta = numero; // n�mero da conta recebe n�mero
    } // fim if
} // fim fun��o

int LimiteDeCredito::getNumDaConta() // retorna o n�mero da conta configurado
{
    // retorna o n�mero da conta
    return numeroDaConta;
} // fim fun��o get


void LimiteDeCredito::setSaldoInicial( double valor ) // configura o saldo inicial
{
    // se o valor for maior que zero
    if( valor > 0 )
    {
        // saldo inicial recebe o valor
        saldoInicial = valor;
    } // fim if
} // fim saldo

double LimiteDeCredito::getSaldoInicial() // retorna o saldo inicial
{
    return saldoInicial;
} // fim getSaldo

void LimiteDeCredito::setTotalDaTaxa( double valor ) // configura o total da taxa
{
    if( valor > 0 )
    {
        taxas = valor;
    } // fim if
} // fim fun��o

double LimiteDeCredito::getTotalDaTaxa() // retorna o total da taxa
{
    return taxas;
}// fim get

void LimiteDeCredito::setTotalDeCredito( double valor ) // configura o total de cr�dito
{
    if( valor > 0 )
    {
        totalDeCredito = valor;
    } // fim if
} // fim un��o get

double LimiteDeCredito::getTotalDeCredito()
{
    return totalDeCredito;
} // fim get

void LimiteDeCredito::setLimiteDeCredito( double valor )
{
    if( valor > 0 )
    {
        limiteDeCredito = valor;
    } // fim if
} // fim fun��o setLimite

double LimiteDeCredito::getLimiteDeCredito() // retorna o valor do limite
{
    return limiteDeCredito;
} // fim get

void LimiteDeCredito::setSaldoAtual(double valorInicial, double taxa, double credito) // configura o saldo atual
{
    saldoAtual = valorInicial + taxa - credito;
} // fim fun��o

double LimiteDeCredito::getSaldoAtual() // reetorna o saldo atual
{
    return saldoAtual;
} // fim get

void LimiteDeCredito::mostraResultado()
{
    double saldo = getSaldoAtual();
    double limite = getLimiteDeCredito();

    cout << "\Conta:\t\t\t"<< getNumDaConta() << endl;
    cout << "Saldo inicial:\t\t" << setprecision( 2 ) << fixed << getSaldoInicial() << endl;
    cout << "Taxa:\t\t\t" << getTotalDaTaxa() << "%" << endl;
    cout << "Total de cr�dito:\t" << getTotalDeCredito() << endl;
    cout << "Limite de cr�dito:\t" <<  getLimiteDeCredito() << endl;
    cout << "Saldo atual:\t\t" << getSaldoAtual() << endl;

    // se saldo atual menor que limite de cr�dito
    if( saldo < limite )
    {
        // imprima
        cout << "Limite de cr�dito ultrapassado!" << endl;
    } // fim if

} // fim fun��o mostraResultado

// cria fun��o para a entrada de dados pelo usu�rio
void LimiteDeCredito::entradaDeDados()
{
    // vari�veis
    int conta;
    double saldoInicial;
    double taxas;
    double totalDeCredito;
    double limiteDeCredito;
    double saldoAtual;

    // entrada de dados
    cout << "Entre com o n�mero da conta (-1 = sair): ";
    cin >> conta; // usu�rio entra com o n�mero da conta

    // enquanto o n�mero da conta diferente de -1
    while( conta != -1 )
    {
        // se p n�mero da conta maior que zero
        if( conta > 0 )
        {
            // chama a fun��o setNumDaConta que recebe o n�mero da conta
            setNumDaConta( conta );

            // entrada de dados
            cout << "Entre com o saldo inicial: ";
            cin >> saldoInicial;
            setSaldoInicial( saldoInicial );

            cout << "Entre com o total da taxa: ";
            cin >> taxas;
            setTotalDaTaxa( taxas );

            cout << "Entre com o total de cr�dito: ";
            cin >> totalDeCredito;
            setTotalDeCredito( totalDeCredito );

            cout << "Entre com o limite de cr�dito: ";
            cin >> limiteDeCredito;
            setLimiteDeCredito(limiteDeCredito);

            // chama a fun��o setSaldoAtual
            setSaldoAtual( saldoInicial, taxas, totalDeCredito );

        } // fim if

        // chama a fun��o mostra resultado
        mostraResultado();

        // entrada de dados
        cout << "\nEntre com o n�mero da conta (-1 = sair): ";
        cin >> conta; // usu�rio entra com o n�mero da conta

    } // fim while

} // fim fun��o entrada de dados
