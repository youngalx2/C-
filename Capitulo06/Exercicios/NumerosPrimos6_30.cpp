/*
    6.30 (N�meros primos) Dizemos que um inteiro � primo se ele � divis�vel somente por 1
    e ele pr�prio. Por exemplo, 2, 3, 5 e 7 s�o primos,  mas 4, 6, 8 e 9 n�o o s�o.
    a) Escreva uma fun��o que determina se um n�mero � primo.
    b) Utilize essa fun��o em um programa que determina e imprime todos os n�meros
    primos entre 2 e 10.000. Quantos desses 10.000  n�meros voc� realmente tem de
    testar antes de certificar-se de que encontrou todos os primos?
    c) Inicialmente voc� poderia pensar que n/2 � o limite superior que deve testar
    para ver se um n�mero � primo, mas voc� precisa ir apenas  at� a raiz quadrada
    de n. Por qu�? Reescreva o programa e execute-o de ambas as maneiras.
    Estime o melhor desempenho.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 244). Edi��o do Kindle.
    Autor: Pedro Filho, 18/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// prot�tipo
void NumerosPrimos( int numero );

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cabe�alho
    cout << "\tN�MEROS PRIMOS AT� 1000" << endl;

    // chama a fun��o n�meros primos
    NumerosPrimos( 1000 );

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a fun��o n�meros primos
void NumerosPrimos( int numero )
{
    cout << "2    3  5  7  11 13 17 19 23 29 31 ";

    // loop para mostrar os n�meros primos
    for( int i = 2; i <= numero; i++ )
    {
        if( (i % 2 != 0) && ( i % 3 != 0 ) && ( i % 5 != 0 ) && ( i % 7 != 0 ) && ( i % 11 != 0 ) )
            if( ( i % 13 != 0 ) && ( i % 17 != 0) && ( i % 19 != 0) && ( i % 23 != 0 ) && ( i % 29 != 0 ) )
                if( ( i % 31 != 0 ) )
                    cout << setw( 5 ) << i << ' ';

    } // fim for
} // fim fun��o
