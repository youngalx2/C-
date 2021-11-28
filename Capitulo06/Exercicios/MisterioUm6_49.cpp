/*
    6.49 O que h� de errado com o seguinte programa?
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 247). Edi��o do Kindle.
    Autor: 01/10/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // vari�vel
    int c;

    cout << "Entre com o valor de c: ";

    if( c = cin.get() != EOF )
    {
        main();

        cout << c;

    }
    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
