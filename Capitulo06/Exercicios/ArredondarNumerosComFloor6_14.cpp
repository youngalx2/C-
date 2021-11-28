/*
    6.14 A fun��o floor pode ser utilizada para arredondar um n�mero para uma
    casa decimal espec�fica. A instru��o  y = floor( x * 10 + .5)/ 10;
    arredonda x para a casa decimal (a primeira posi��o � direita do ponto de fra��o decimal).
    A instru��o  y = floor( x * 100 + .5)/ 100;  arredonda x para a casa dos cent�simos
    (isto �, a segunda posi��o � direita do ponto de fra��o decimal).
    Escreva um programa que define  quatro fun��es para arredondar um n�mero x de
    v�rias maneiras:
    a) roundToInteger( number)
    b) roundToTenths( number)
    c) roundToHundredths( number)
    d) roundToThousandths( number)
    Para cada valor lido, seu programa deve imprimir o valor original, o n�mero
    arredondado para o inteiro mais pr�ximo, o n�mero arredondado para o d�cimo
    mais pr�ximo, o n�mero arredondado para o cent�simo mais pr�ximo e o n�mero
    arredondado para o mil�simo  mais pr�ximo.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 243). Edi��o do Kindle.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 242). Edi��o do Kindle.
    Autor: Pedro filho, 12/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision
#include <cmath> // para floor ( arredondar o n�mero )
#include <ctime> // para srand( time(NULL) )

using namespace std;

// prot�tipos de fun��o
void roundToInteger( int number );
void roundToTenths( int number);
void roundToHundredths( int number);
void roundToThousandths( int number);

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // vari�veis
    int x = 0;
    int resposta = 0;

    // cria o gerador
    srand( time( NULL ) );

    // enquando verdade
    while( true )
    {
        // CRIA N�MERO ALEAT�RIO
        x = 1 + rand() % 50;

        // cabe�alho
        cout << "ARREDONDANDO N�MEROS com FLOOR() " << endl;

        // chama a fun��o roundtoInteger
        roundToInteger( x );

        // chama a fun��o roundtoTenths
        roundToTenths( x );

        // chama a fun��o roundToHundredths
        roundToHundredths( x );

        // chama a fun��o roundToThousandths
        roundToThousandths( x );

        // entrada da resposta
        cout << "Digite qualquer tecla para continuar (-1 = sair): ";
        cin >> resposta;

        // limpa a tela
        system("cls");

        if( resposta == -1 )
            break; // saia do programa

    } // fim enquanto

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria afun��o roundToInteger
void roundToInteger( int number )
{
    cout << "\nNenhuma casa decimal." << endl;

    // vari�veis
    float mudar = number / 3.14159;
    float y = floor( mudar + .5 ); // arredonda y

    // mostra o resultado
    cout << "Voc� digitou " << number << " / 3,14159 = " << mudar
            << "\nque foi arredondado para " << y << endl;
} // fim fun��o roundToInteger

void roundToTenths( int number)
{
    cout << "\nUma casa decimal." << endl;

    // vari�veis
    float mudar = number / 3.14159;
    float y = floor( mudar * 10 + .5 ) / 10; // arredonda y com uma casa

    // mostra o resultado
    cout << "Voc� digitou " << number << " / 3,14159 = " << mudar
            << "\nque foi arredondado para " << y << endl;
} // fim fun��o

void roundToHundredths( int number)
{
        cout << "\nDuas casas decimais." << endl;

    // vari�veis
    float mudar = number / 3.14159;
    float y = floor( mudar * 100 + .5 ) / 100; // arredonda y com duas casa

    // mostra o resultado
    cout << "Voc� digitou " << number << " / 3,14159 = " << mudar
            << "\nque foi arredondado para " << y << endl;
} // fim fun��o

void roundToThousandths( int number)
{
        cout << "\nTr�s casas cent�simais." << endl;

    // vari�veis
    float mudar = number / 3.14159;
    float y = floor( mudar * 1000 + .5 ) / 1000; // arredonda y com tr�s casas

    // mostra o resultado
    cout << "Voc� digitou " << number << " / 3,14159 = " << mudar
            << "\nque foi arredondado para " << y << endl;
} // fim fun��o
