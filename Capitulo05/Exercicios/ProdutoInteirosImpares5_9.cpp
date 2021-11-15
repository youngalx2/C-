/*
    5.9 Escreva um programa que utiliza uma instru��o for para calcular e imprimir
    o produto dos inteiros �mpares de 1 a 15.
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
    int produto = 1;
    int contar;

    // cabe�alho
    cout << "PRODUTO DOS N�MEROS �MPARES" << endl;

    // loop for para mostrar n�meros de 1 a 15
    for( contar = 1; contar <= 15; contar++ )
    {
        // se i porcento 2 diferente de zero
        if( contar % 2 != 0 )
        {
            // imprima
            cout << contar << " ";

            // calcula o produto de i
            produto *= contar;
        } // fim if

    } // fim for

    // mostra o resultado
    cout << "\nO produto dos n�meros �mpares � " << produto << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
