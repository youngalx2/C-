/*
    1// Figura 5.2: fig05_02.cpp  2// Repeti��o controlada por contador com a instru��o for.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 143). Edi��o do Kindle.
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

    // LOOP FOR
    for( int i = 1; i <= 10; i++ )
    {
        // imprima
        cout << i << " ";

    } // fim for

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
