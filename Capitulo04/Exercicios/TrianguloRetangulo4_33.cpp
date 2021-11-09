/*
    4.33 Escreva um programa que l� tr�s inteiros n�o-zero e determina e imprime
    se eles poderiam ser os lados de um tri�ngulo reto.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 138). Edi��o do Kindle.
    Autor: Pedro, 21/08/2021
*/

// incluir biblioteca
#include <iostream>
#include <locale>

using namespace std;

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // vari�veis
    int base = 0;
    int altura = 0;
    int hipotenusa = 0;

    // entrada de dados
    cout << "Entre com a base do tri�ngulo (-1 = sair): ";
    cin >> base;

    // enquanto base diferente de -1 fa�a
    while( base != -1 )
    {
        cout << "Entre com a altura: ";
        cin >> altura;
        cout << "Entre com a hipotenusa: ";
        cin >> hipotenusa;

        // se o quadrado da base mais o quadrado da altura igua ao quadrado da hipotenusa
        if( (base * base) + (altura * altura) == (hipotenusa * hipotenusa) )
        {
            // imprima o resultado
            cout << "Pode ser um tri�ngulo reto." << endl;
        } // fim if
        else
        {
            cout << "N�o pode ser um tri�ngulo reto." << endl;
        } // fim else

        // entrada de dados
        cout << "\nEntre com a base do tri�ngulo (-1 = sair): ";
        cin >> base;

    } // fim while

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
