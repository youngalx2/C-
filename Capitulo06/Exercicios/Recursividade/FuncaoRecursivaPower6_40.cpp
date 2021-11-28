/*
    6.40 Escreva uma fun��o recursiva power( base, exponent) que, quando invocada,
    retorna  base-expoente  Por exemplo, power( 3, 4) = 3 * 3 * 3 * 3. Suponha que
    exponent � um inteiro maior que ou igual a 1. Dica: O passo de  recurs�o utilizaria
    o relacionamento  base-expoente = base � baseexpoente � 1  e a condi��o de
    termina��o ocorre quando exponent � igual a 1 porque  base1 = base
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 245). Edi��o do Kindle.
    Autor: Pedro Filho, 21/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// prot�tipos
int power( int base, int expoente );

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // vari�veis
    int base, expoente;
    char resposta = ' ';

    // enquanto resposta diferente de n ou N fa�a
    while( resposta != 'n' )
    {
        // cabe�alho
        cout << "\tPOTENCIA��O" << endl;

        // entreda de dados
        cout << "Informe o valor da base: ";
        cin >> base;
        cout << "Digite o expoente: ";
        cin >> expoente;

        // imprime resultado
        cout << base << " elevado a " << expoente << " = " << power( base, expoente ) << endl;

        // pergunta
        cout << "Deseja continuar ( s/n )? ";
        cin >> resposta;

        // se a resposta for sim
        if( resposta == 's' || resposta == 'S' )
            system("cls"); // limpa a tela

    } // fim while

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

//cria a fun��o recursiva power
int power( int base, int expoente )
{
    // se expoente igual a zero ou um
    if( expoente == 0 )
    {
        // retorne 1
        return 1;
    } // fim if
    else // se n�o
    {
        // retorne o produto da base vezes fun��o power
        return base * power( base, expoente - 1 );
    } // fim else
} // fim fun��o
