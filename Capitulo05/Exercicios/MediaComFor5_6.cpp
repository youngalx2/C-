/*
    5.6 Escreva um programa que utiliza uma instru��o for para calcular e imprimir
    a m�dia de v�rios inteiros. Assuma que o �ltimo valor lido  � o sentinela 9999.
    Uma t�pica seq��ncia de entrada talvez seja  10 8 11 7 9 9999  que indica que
    o programa deve calcular a m�dia de todos os valores que precedem 9999.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 177). Edi��o do Kindle.
    Autor: Pedro Filho, 26/08/2021
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
    system("cls");

    // vari�veis
    int contar;
    int numero;
    int soma = 0;
    int media = 0;

    // loop for
    for( contar = 1; contar <= 100; contar++ )
    {
        // entrada de dados
        cout << "Digite o " << contar << "� n�mero ( 9999 = sair ): ";
        cin >> numero;

        // se n�mero igual a 9999
        if( numero == 9999 )
        {
            contar--;
            break;
        }

        // soma os n�meros digitados
        soma += numero;
        media = soma / contar;

    } // fim for

    // imprima resultado
    cout << "Voc� digitou " << contar << " n�meros, a soma � "
            << soma << " e a m�dia � " << media << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
