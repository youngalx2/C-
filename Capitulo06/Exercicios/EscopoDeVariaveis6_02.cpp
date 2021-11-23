/*
    6.2 Para o programa na Figura 6.40, declare o escopo (escopo de fun��o,
    de arquivo, de bloco ou de prot�tipo de fun��o) de cada um dos  seguintes elementos:
    a) A vari�vel x em main.
    b) A vari�vel y em cube.
    c) A fun��o cube.
    d) A fun��o main.
    e) O prot�tipo de fun��o para cube.
    f) O identificador y no prot�tipo de fun��o para cube.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 238). Edi��o do Kindle.
    09/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// prot�tipo de fun��o
int cube( int y ); // y = escopo de prot�tipo de fun��o

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // vari�vel
    int x; // escopo de bloco

    // cabe�alho
    cout << " CUBO DOS N�MEROS" << endl;
    cout << "******************" << endl;
    cout << "N�mero" << setw(10) << "Cubo" << endl;

    // loop for para calcular o cubo de 1 at� 10
    for( x = 1; x <= 10; x++ )
        // chama a fun��o cube e imprime o cubo dos valores de x
        cout << setw( 3 ) << x << setw( 13 ) << cube( x ) << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a fun��o cube
// y = escopo de fun��o
int cube( int y )
{
    // retorne o cube de y
    return y * y * y;
} // fim fun��o cube
