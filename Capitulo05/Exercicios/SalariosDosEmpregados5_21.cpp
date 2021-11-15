/*
    5.21 Uma empresa paga seus empregados como gerentes (que recebem um
    sal�rio fixo por semana), horistas (que recebem um sal�rio-hora  fixo pelas primeiras
    40 horas trabalhadas e mais hora extra com 50% de acr�scimo, isto �, 1,5 vez seu
    sal�rio-hora, para as horas extras  trabalhadas), comissionados (que recebem $250
    mais 5,7% bruto das vendas semanais) ou trabalhadores por produ��o (que recebem
    uma quantia fixa de dinheiro para cada item que produzem � cada trabalhador por
    produ��o trabalha apenas em um tipo de item nessa  empresa).
    Escreva um programa para computar o pagamento semanal de cada empregado.
    Voc� n�o sabe antecipadamente o n�mero  de empregados. Cada tipo de empregado
    tem seu pr�prio c�digo de sal�rio: os gerentes t�m c�digo 1, os horistas t�m c�digo 2,
    os comissionados t�m c�digo 3 e os trabalhadores por produ��o t�m c�digo 4.
    Utilize um switch para calcular o sal�rio de cada empregado  de acordo com o c�digo
    de pagamento desse empregado. Dentro do switch, solicite que o usu�rio
    (isto �, o caixa que faz a folha de  pagamento) insira os fatos apropriados de que
    o programa precisa para calcular o sal�rio de cada empregado de acordo com o c�digo
    de pagamento desse empregado.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 179). Edi��o do Kindle.
    Autor: Pedro Filho, 31/08/2021
*/

// incluir biblioteca
#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls" );

    // cria vari�veis
    int horasTrabalhadas = 0;
    int valorHoras = 0;
    int horasExtras = 0;
    int codigo = 0;
    float salarioGerente = 0;
    float horista = 0;
    float valorDasVendas = 0;
    float comissionado = 0;
    int quantidade = 0;
    float valorDoProduto = 0;
    float produtor = 0;
    int sentinela = 0;

    // cria constante
    const float salarioComissao = 250.00;

    // cabe�alho menu das profiss�es
    cout << "****  PAGAMENTO SAL�RIO DOS EMPREGADOS  ****" << endl;
    cout << "* C�digo                   Profiss�o       *" << endl;
    cout << "********************************************" << endl;
    cout << "*    1                     Gerente         *" << endl;
    cout << "*    2                     Horista         *" << endl;
    cout << "*    3                     Comissionado    *" << endl;
    cout << "*    4                     Produ��o        *" << endl;
    cout << "********************************************" << endl;

    // entrada de dados
    cout << "Digite o c�digo da profis�o ( -1 = sair ): ";
    cin >> codigo; // aguarda entrada do usu�rio

    // enquanto codigo diferente de -1 fa�a
    while ( codigo != -1 )
    {
        // switch depende da tecla
        switch( codigo )
        {
            case 1:
                // entrada de dados
                cout << "\nInforme o valor do sal�rio do gerente R$";
                cin >> salarioGerente;
                break;

            case 2:
                // entrada de dados
                cout << "\nDigite as horas trabalhadas: ";
                cin >> horasTrabalhadas;

                cout << "Digite o valor das horas trabalhadas R$";
                cin >> valorHoras;

                // se o valor das horas maior que 40
                if( horasTrabalhadas > 40 )
                {
                    // horas extras recebe o valor das extras
                    horasExtras = ( horasTrabalhadas - 40 ) * ( valorHoras / 2 );
                } // fim if

                // horista recebe
                horista = ( valorHoras * horasTrabalhadas ) + horasExtras;

                break; // saia do programa

            case 3:
                // entrada de dados
                cout << "\nDigite o valor das vendas R$";
                cin >> valorDasVendas;

                // calcula sal�rio comissionado
                comissionado = salarioComissao + ( valorDasVendas * ( 5.7 / 100 ) );

                // sair do programa
                break;

            case 4:
                // entrada de dados
                cout << "\nInforme a quantidade do produto produzido: ";
                cin >> quantidade;

                cout << "Invorme o valor do proguro R$";
                cin >> valorDoProduto;

                // calcula o sal�rio do produtor
                produtor = quantidade * valorDoProduto;

                // sai do programa
                break;

            default:
                cout << "Valor errado!" << endl;

        } // fim switch c�digo

    // entrada de dados
    cout << "Digite o c�digo da profis�o ( -1 = sair ): ";
    cin >> codigo; // aguarda entrada do usu�rio

    } // FIM WHILE

    // mostra resultado
    cout << "\nSAL�RIO SEMANAL DOS FUNCION�RIOS DA LOJA";
    cout << fixed << setprecision( 2 ) << endl; // configura valores com 2 digitos decimais
    cout << "Sal�rio do gerente R$" << salarioGerente << endl;
    cout << "Sal�rio do horista R$" << horista << endl;
    cout << "Sal�rio do comissionado R$" << comissionado << endl;
    cout << "Sal�rio do produtor R$" << produtor << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
