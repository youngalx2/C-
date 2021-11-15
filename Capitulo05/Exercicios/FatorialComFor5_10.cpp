/*
    5.10 A fun��o fatorial � freq�entemente utilizada em problemas de probabilidade.
    Utilizando a defini��o de fatorial no Exerc�cio 4.35, escreva  um programa que
    utiliza uma instru��o for para avaliar o fatorial dos inteiros de 1 a 5. Imprima os
    resultados no formato de tabela. Que  dificuldade poderia impedir voc� de calcular
    o fatorial de 20?
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 178). Edi��o do Kindle.
    Autor: Pedro Filho, 28/08/2021
*/

// incluir biblioteca
#include <iostream>
#include <locale>
# include <iomanip>

using namespace std;

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // vari�veis
    int contador;
    float fatorial = 1;

    // cabe�alho
    cout << setw(10) << "FATORIAL\n"
            << setw( 5 ) << "Valor"
            << setw( 25 ) << "Valor do fatorial" << endl;

    // configura o n�mero dos decimais
    cout << fixed << setprecision( 0 ) << endl;

    // loop for para controlar o contador
    for( int numero = 1; numero <= 20; numero++ )
    {
        // loop for para calcular o fatorial
        for( contador = numero; contador >= 1; contador-- )
        {
            // calcula o fatorial do n�mero
            fatorial *= contador;

        } // fim for externo

        // imprime
        cout << setw( 3 ) << numero << "!  = " << setw( 20 ) << fatorial << endl;
        fatorial = 1;

    } // fim for interno

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
