/*
    5.8 Escreva um programa que utiliza uma instru��o for para localizar o menor
    de v�rios inteiros. Assuma que o primeiro valor lido especifica  o n�mero de
    valores restantes e que o primeiro n�mero n�o � um dos inteiros a ser comparado.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 178). Edi��o do Kindle.
    Autor: Pedro Filho, 28/08/2021
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
    int numeroDeValores;
    int i, cadastro;
    int menorValor = 0;

    // cabe�alho
    cout << "ENCONTRA O MENOR VALOR." << endl;

    // entrada de dados
    cout << "Digite o n�mero de cadastros: ";
    cin >> numeroDeValores; // aguarda entrada de usu�rio

    // loop for para defini��o de cadastro
    for( i = 1; i <= numeroDeValores; i++ )
    {
        cout << "Digite o " << i << "� valor: ";
        cin >> cadastro;

        // se i igual a 1
        if( i == 1 )
            menorValor = cadastro;

        // se cadastro menor que menor valor
        if( cadastro < menorValor )
            // menor valor recebe cadastro
            menorValor = cadastro;
    } // fim for

    // imprime resultado
    cout << "\nO menor valor � " << menorValor << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
