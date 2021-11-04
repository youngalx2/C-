#include <iostream>

using namespace std;

// cria a classe
class ComissaoPorVendas
{
public:
    // cria fun��es
    void setValorDaVenda( double ); // configura o valor da venda
    double getValorDaVenda(); // obtem o valor da venda
    void calcularValorDaVenda( double); // calcular o valor da venda
    void entradaDeDados(); // recebe os dados do usu�rio
    void mostrarSalario(); // mostra o resultado

private:
    // cria vari�veis
    double valorDaVenda;

}; // fim classe
