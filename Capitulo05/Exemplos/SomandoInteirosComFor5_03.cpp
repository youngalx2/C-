/*
    1// Figura 5.5: fig05_05.cpp  2// Somando inteiros com a instru��o for.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 147). Edi��o do Kindle.
    Autor:
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

    // vari�vel
    int total = 0;

    // loop for at� 20 de 2 em 2
    for( int numero = 2; numero <= 20; numero += 2 )
        total += numero; // soma os valores de n�mero

    // imprime
    cout << "Soma = " << total << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
