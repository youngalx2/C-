/*
    6.12 Um estacionamento cobra uma taxa m�nima de $2,00 para estacionar por
    at� tr�s horas. Um adicional de $0,50 por hora n�o necessariamente inteira
    � cobrado ap�s as tr�s primeiras horas. A carga m�xima para qualquer dado
    per�odo de 24 horas � $10,00. Suponha que  nenhum carro fique estacionado
    por mais de 24 horas por vez. Escreva um programa que calcula e imprime
    os custos de estacionamento  de cada um dos tr�s clientes que estacionou
    o carro nessa garagem ontem. Voc� deve inserir as horas de estacionamento
    para cada cliente.  Seu programa deve imprimir os resultados em um formato
    tabular elegante e deve calcular e imprimir o total dos recibos de ontem.
    O  programa deve utilizar a fun��o calculateCharges para determinar a tarifa
    para cada cliente.
    Suas sa�das devem aparecer no seguinte  formato:

    Car      Hours Charge
     1            1.5       2.00
     2            4.0       2.50
     3          24.0     10.00
    TOTAL 29.5     14.50

    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 242). Edi��o do Kindle.
    Autor: Pedro Filho, 11/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // constantes
    const float  valorNormal = 2.00;
    const float ADICIONAL = 0.50;

    // vari�veis
    float horasNormais = 0;
    float horasExtras = 0;
    float valorDasHoras = 0;
    float totalHoras = 0;
    float totalValor = 0;
    float valorCarro1 = 0;
    float valorCarro2 = 0;
    float valorCarro3 = 0;

    int carro = 0;
    float carro1 = 0, carro2 = 0, carro3 = 0;

    string resposta = "0";

    // cabe�alho
    cout << "COBRAN�A da TAXA do ESTACIONAMENTO" << endl;

    // enquanto verdadeiro
    while( resposta != "-1" )
    {
        // entrada de dados
        cout << "Digite o c�digo do carro: ";
        cin >> carro;

        cout << "Digite o tempo estacionado: ";
        cin >> horasNormais;

        // se horas normais menor ou igual a 3 horas
        if( horasNormais <= 3 )
        {
            // valor das horas recebe o valor normal
            valorDasHoras = valorNormal;
        } // fim if
        else // se n�o
        {
            // se horas normais maior que 3 horas e menor que 24 horas
            if( horasNormais > 3 && horasNormais < 24 )
            {
                // horas extras recebe c�lculo da extra
                horasExtras = ( horasNormais - 3 ) * ADICIONAL;

                // e o valor das horas recebe o valor normal mais �s horas extras
                valorDasHoras = valorNormal + horasExtras;
            } // fim if interno
            else
            {
                // se horas normais igual a 24 horas
                if( horasNormais == 24 )
                {
                    // valor das horas recebe R$ 10,00 ( dez reais )
                    valorDasHoras = 10.00;
                } // fim if
                else
                {
                    if( horasNormais > 24 )
                    {
                        // horas extras recebe o valor de 10 mais adicional
                        horasExtras = ( 24 - horasNormais ) * ADICIONAL;

                        // valor das horas recebe R$ 10,00 mais R$
                        valorDasHoras = 10.00 + horasExtras + valorNormal;

                    } // fim if
                } // fim else if
            } // fim else
        } // fim else if

        // se o carro igual a 1
        if( carro == 1 )
        {
            // carro 1 recebe o tempo estacionado
            carro1 = horasNormais;

            // carro 1 recebe o valor das horas estacionadas
            valorCarro1 = valorDasHoras; // valor do carro 1 recebe o valor das horas
        } // fim if carro 1

        // se o carro igual a 2
        if( carro == 2 )
        {
            // carro 2 recebe o tempo estacionado
            carro2 = horasNormais;

            // carro 2 recebe o valor das horas estacionadas
            valorCarro2 = valorDasHoras;
        } // fim if carro 2

        // se o carro igual a 3
        if( carro == 3 )
        {
            // carro 3 recebe o tempo estacionado
            carro3 = horasNormais;

            // carro 3 recebe o valor das horas estacionadas
            valorCarro3 = valorDasHoras;
        } // fim if carro 3

        // c�lculo do total das horas estacionadas
        totalHoras += horasNormais;

        // calcula o valor total das horas estacionadas
        totalValor = valorCarro1 + valorCarro2 + valorCarro3;

        // limpa o valor das horas para fazer novo c�lculo
        valorDasHoras = 0;

        // pergunta se quer continuar
        cout << "Precione qualquer tecla se deseja continuar ( -1 = sair ): ";
        cin >> resposta;

        // se resposta igual a -1
        if ( resposta == "-1" )
            // sair do programa
            break;

    } // fim while

    // imprime resultado
    // cabe�alho
    cout << "\nCONTABILIDADE do ESTACIONAMENTO" << endl;

    // configura o centavo com duas casas decimais
    cout << fixed << setprecision(2);

    // mostra o cabe�alho da tabela
    cout << "Carro" << setw(10) << "Horas" << setw(11) << "Valor R$" << endl;

    // mostra os valores
    cout << setw(3) << "1" << setw(12) << carro1 << setw(10) << valorCarro1 << endl;
    cout << setw(3) << "2" << setw(12) << carro2 << setw(10) << valorCarro2 << endl;
    cout << setw(3) << "3" << setw(12) << carro3 << setw(10) << valorCarro3 << endl;
    cout << "Total" << setw(10) << totalHoras << setw(10) << totalValor << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
