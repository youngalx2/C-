#include <iostream>
#include <locale>
#include "PagamentoBruto.h"

using namespace std;

int main()
{
    // localiza��o geogr�fica
    setlocale(LC_ALL, "portuguese" );

    // limpa a tela
    system("cls");

    // cria o objeto meuSalario da classe pagamento bruto
    PagamentoBruto meuSalario;

    // com o objeto meuSalario chama a fun��o entre com dados
    meuSalario.entrarComDados();

    system("pause"); // pausa o programa

    // fim do programa
    return 0;

} // fim main
