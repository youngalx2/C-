/*
    OBS: Esses exerc�cios deve ser escritos com as instru��es aprendidas at� este cap�tulo.
*/
#include <iostream>
#include <locale>
#include "Fatura.h"

using namespace std;

int main()
{
    // localiza��o geogr�fica
    setlocale(LC_ALL, "portuguese");

    // cria vari�vel
    int resultado = 0;

    // cria o objeto da fatura
    Fatura minhaFatura( "123", "Televis�o", 2, 321 );

    // resultado recebe o valor retornado da fun��o getValorTotal
    resultado = minhaFatura.getValorTotal(minhaFatura.getQuantidade(), minhaFatura.getPreco());

    // mostra fatura
    cout << "FATURA\n";
    cout << "N�mero: " << minhaFatura.getIdentidade() << endl;
    cout << "Produto: " << minhaFatura.getDescricao() << endl;
    cout << "Quantidade: " << minhaFatura.getQuantidade() << endl;
    cout << "Pre�o R$ " << minhaFatura.getPreco() << endl;
    cout << "Total a pagar R$ " << resultado << endl;

    // cria outro objeto da classe fatura
    Fatura minhaFatura1("321", "Celular", 3, 300 );

    // resultado recebe o valor retornado da fun��o getValorTotal
    resultado = minhaFatura1.getValorTotal(minhaFatura1.getQuantidade(), minhaFatura1.getPreco());

    // mostra fatura
    cout << "\nFATURA\n";
    cout << "N�mero: " << minhaFatura1.getIdentidade() << endl;
    cout << "Produto: " << minhaFatura1.getDescricao() << endl;
    cout << "Quantidade: " << minhaFatura1.getQuantidade() << endl;
    cout << "Pre�o R$ " << minhaFatura1.getPreco() << endl;
    cout << "Total a pagar R$ " << resultado << endl;

    return 0;
}  // fim main
