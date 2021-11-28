/*
    6.34 Escreva um programa que simula o lan�amento de uma moeda.
    Para cada lan�amento da moeda, o programa deve imprimir Heads ou  Tails
    (cara ou coroa). Deixe o programa lan�ar a moeda 100 vezes e conte o n�mero
    de vezes que cada lado da moeda aparece. Imprima  os resultados. O programa
    deve chamar uma fun��o flip separada que n�o aceita nenhum argumento e
    retorna 0 para coroa e 1 para cara.  [Nota: Se o programa simular realistamente
    o lan�amento de uma moeda, cada lado da moeda deve aparecer aproximadamente
    metade  das vezes.]
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 244). Edi��o do Kindle.
    Autor: Pedro Filho, 20/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision
#include <ctime>

using namespace std;

// prot�tipo
int caraOuCoroa();

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // vari�vel
    int resultado;
    int cara = 0;
    int coroa = 0;

    // cabe�alho
    cout << "JOGO CARA ou COROA" << endl;

    // gerador para rand()
    srand( time( NULL) );

    // loop para n�meros aleat�rios
    for( int i = 1; i <= 100; i++ )
    {
        // resultado recebe o valor retornado da fun��o cara ou coroa
        resultado = caraOuCoroa();

        // se o resultado igual a zero
        if( resultado == 0 )
        {
            // imprima coroa
            cout << setw(8) << "Coroa ";
            ++coroa; // incrementa coroa
        } // fim if
        else if( resultado == 1 ) // se n�o
        {
            // imprima coroa
            cout << setw(8) <<"Cara ";
            // incrementa cara
            ++cara;
        } // fim else if

    } // fim for

    // imprime resultado
    cout << "\nCara apareceu " << cara << " vezes" << endl;
    cout << "Coroa apareceu " << coroa << " vezes." << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a fun��o caraOuCoroa
int caraOuCoroa()
{
    // cria a vari�vel que recebe um n�mero aleat�rio entre 0 e 1
    int moeda = rand() % 2;

    // e retorna o valor gerado
    return moeda;

} // fim fun��o caraOuCoroa

