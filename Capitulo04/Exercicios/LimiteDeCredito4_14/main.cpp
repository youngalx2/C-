// fun��o principal main testa a classe LimiteDeCredito
#include <iostream>
#include <locale>
#include "LimiteDeCredito.h"

using namespace std;

int main()
{
    // localiza��o geografica
    setlocale( LC_ALL, "portuguese" );

    // limpa a tela
    system("cls");

    // cria o objeto da classe Limite de cr�dito
    LimiteDeCredito meuLimite;

    // com o objeto meuLimte chamar a fun��o entradaDeDados
    meuLimite.entradaDeDados();

    // pausa o programa
    system("pause");

    // fim do programa
    return 0;

} // fim de main
