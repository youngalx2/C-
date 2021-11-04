// Cria a classe limite de cr�dito
#include <iostream>

using namespace std;

// cria a classe
class LimiteDeCredito
{
public:
    void setNumDaConta( int ); // configura o n�mero da conta
    int getNumDaConta(); // retorna o n�mero da conta configurado

    void setSaldoInicial( double ); // configura o saldo inicial
    double getSaldoInicial(); // retorna o saldo inicial

    void setTotalDaTaxa( double ); // configura o total da taxa
    double getTotalDaTaxa(); // retorna o total da taxa

    void setTotalDeCredito( double ); // configura o total de cr�dito
    double getTotalDeCredito(); // retorna o total de cr�dito

    void setLimiteDeCredito( double ); // configura o limite de cr�dito
    double getLimiteDeCredito(); // retorna o valor do limite

    void setSaldoAtual( double, double, double ); // configura o saldo atual
    double getSaldoAtual(); // retorna o saldo atual

    void entradaDeDados(); // usu�rio entra com os dados para a classe LimiteDeCredito

    void mostraResultado(); // mostar o Resultado

private:
    int numeroDaConta;
    double saldoInicial;
    double taxas;
    double totalDeCredito;
    double limiteDeCredito;
    double saldoAtual;

}; // fim classe
