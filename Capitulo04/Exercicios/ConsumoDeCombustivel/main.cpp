// fun��o main testa a classe consumo
#include <iostream>
#include <locale>

#include "Consumo.h" // inclui a classe Consumo no programa principal

using namespace std;

int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cria o objeto da classe Consumo
    Consumo meuConsumo;

    // cria vari�veis
    double kms;
    double litros;
    double totalKms = 0;
    double totalLitros = 0;
    double consumoTotal = 0;

    // cabe�alho
    cout << "CONSUMO DE COMBUST�VEIS" << endl;

    // entrada de dados
    cout << "Entre com a quilometragem (-1 = sair): ";
    cin >> kms; // aguarda valor digitado pelo usu�rio
    // soma todas �s quilometragens
    totalKms += kms;

    // enquanto kms diferente de  -1
    while( kms != -1)
    {
        // se kms maior que zero
        if( kms > 0 )
        {
            // chama a fun��o setQuilometrosRodados que recebe o valor do usu�rio
            meuConsumo.setQuilometrosRodados( kms );

            cout << "Entre com os litros: ";
            cin >> litros; // recebe valor do usu�rio
            // soma todos os abastecimentos
            totalLitros += litros;

            // calcula o consumo total de combust�veis
            consumoTotal = totalKms / totalLitros;

            // o objeto meuConsumo chama a fun��o setLitrosAbastecidos que recebe o valor dos litros
            meuConsumo.setLitrosAbastecidos( litros );

            // mostra resultado
            meuConsumo.consumoKmPorLitros( kms, litros );
            cout << "Total km/litros: " << consumoTotal << "\n\n";

        } // fim if

    // entrada de dados
    cout << "Entre com a quilometragem (-1 = sair): ";
    cin >> kms; // aguarda valor digitado pelo usu�rio
    // soma todas �s quilometragens
    totalKms += kms;

    } // fim while

    // pausa o programa
    system("pause");

    // fim do programa
    return 0;
} // fim main
