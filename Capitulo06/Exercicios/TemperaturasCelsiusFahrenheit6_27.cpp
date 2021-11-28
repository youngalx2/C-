/*
    6.27 (Temperaturas Celsius e Fahrenheit) Implemente as seguintes fun��es
    para trabalhar com inteiros:
    a) A fun��o celsius retorna o equivalente em Celsius de uma temperatura em Fahrenheit.
    b) A fun��o fahrenheit retorna o equivalente em Fahrenheit de uma temperatura em Celsius.
    c) Utilize essas fun��es para escrever um programa que imprime gr�ficos para
    mostrar os equivalentes em Fahrenheit de todas as temperaturas em Celsius de
    0 a 100 graus e os equivalentes em Celsius de todas as temperaturas em
    Fahrenheit de 32 a 212 graus. Imprima  as sa�das em um formato tabular
    elegante que minimiza o n�mero de linhas de sa�da mas permanece leg�vel.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 244). Edi��o do Kindle.
    Autor: Pedro Filho, 15/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// prot�tipos de fun��o
int celsius( int fah );
int fahrenheit( int cel );
void temperaturaMista();

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cria vari�veis
    int cel = 0;
    int fah = 0;
    int opcao = 0;
    int resposta = 0;

    // enquanto resposta diferente de -1 fa�a
    while( resposta != -1)
    {
        // menu
        cout << "CONVERS�O DE TEMPERATURA" << endl;
        cout << "***********************" << endl;
        cout << "*  1   =   Celcius    *" << endl;
        cout << "*  2   =   Fahreneit  *" << endl;
        cout << "*  3   =   Mistas     *" << endl;
        cout << "***********************" << endl;

        // entrada de dados
        cout << "Qual sua op��o: ";
        cin >> opcao;

        // switch
        switch( opcao )
        {
            case 1:
                cout << "Digite a temperatura em Fahrenheit: ";
                cin >> fah;
                cout << "A temperatura " << fah << "�F equivale a "
                        << celsius( fah ) << "�C" << endl;
                break;

            case 2:
                cout << "Digite a temperatura em Celsius: ";
                cin >> cel;
                cout << "A temperatura " << cel << "�C equivale a "
                        << fahrenheit( cel ) << "�F" << endl;
                break;

            case 3:
                temperaturaMista();
                break;

        }// fim switch

        // Entrada da resposta
        cout << "Deseja continuar (-1 para sair)? ";
        cin >> resposta;

        // limpa a tela
        system("cls");

    } // fim while

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a fun��o fahrenheit
int fahrenheit( int cel )
{
    // cria vari�vel
    int resultado = ( 1.8 * cel ) + 32;

    // retorne o resultado
    return resultado;
} // fim fun��o fahrenheit

// cria fun��o celsius
int celsius( int fah )
{
    int resultado = ( fah - 32 ) / 1.8;

    return resultado;
} // fim fun��o celsius

// cria a fun��o temperaturaMista
void temperaturaMista()
{
    // vari�vel
    int resultado = 0;

    // cabe�alho
    cout << "Celsius" << setw( 15 ) << "Fahrenheit" << endl;

    for( int cel = 0; cel <= 50; cel += 5 )
    {
        // resultado recebe o valor da fun��o celsius
        resultado = fahrenheit( cel );

        // imprime o resultado
        cout << setw(3) << cel << "�C" << setw(12) << resultado << "�F";

        // loop para criar graficos de asteriscos
        for( int j = 0; j <= resultado; j++ )
            // imprima asterisco
            cout << "*";

        // pula linha
        cout << endl;
    } // fim for

} // fim fun��o temperatura mista
