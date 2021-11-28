/*
    6.29 (N�meros perfeitos) Dizemos que um inteiro � um n�mero perfeito se a
    soma de seus fatores, incluindo 1 (mas n�o o pr�prio n�mero), �  igual ao n�mero.
    Por exemplo, 6 � um n�mero perfeito porque 6 = 1 + 2 + 3.
    Escreva uma fun��o perfect que determina se o par�metro  number � um n�mero perfeito.
    Utilize essa fun��o em um programa que determina e imprime todos os n�meros perfeitos
     entre 1 e 1.000.  Imprima os fatores de cada n�mero perfeito para confirmar se o n�mero �
     de fato perfeito. Desafie o poder de seu computador testando  n�meros muito maiores que 1.000.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 244). Edi��o do Kindle.
    Autor: Pedro Filho, 18/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// prot�tipo
int NumeroPerfeito( int numero );

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // vari�vel
    int num;
    int resultado = 0;

    // cabe�alho
    cout << "\tN�MEROS PERFEITOS" << endl;

    // loop para encontrar os n�meros perfeitos at� 1000
    for( num = 1; num <= 18000; num++ )
    {
        //chama fun��o n�mero perfeito e atribui a resultado
        resultado = NumeroPerfeito( num );

        // se resultado igual a num
        if( resultado == num )
            cout << setw(7) << num << ' ';

    } // fim for

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a fun��o NumeroPerfeito
int NumeroPerfeito( int numero )
{
    // cria uma vari�vel
    int soma = 0;

    // loop para somar os valores e encontrar o n�mero perfeito
    for( int j = 1; j <= numero; j++ )
    {
        // soma a vari�vel j
        soma += j;

        // se soma igual ao n�mero
        if( soma == numero )
        {
            // retorne a soma
            return soma;
            break; // termina o programa

        } // fim if
    } // fim for
} // fim fun��o
