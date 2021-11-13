/*
    1// Figura 5.14: fig05_14.cpp
    2// continua instru��o que termina uma itera��o de uma instru��o for.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 160). Edi��o do Kindle.
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
    int contador;

    // loop for
    for( contador = 1; contador <= 10; contador++ )
    {
        // se contador igual a 5
        if( contador == 5 )
            continue; // pula o n�mero 5 e continua no pr�ximo

        // mostra o contador
        cout << contador << " ";

    } // fim for

    cout << "\nUsando continue para pular o n�mero 5" << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
