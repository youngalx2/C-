/*
    6.5 Forne�a o prot�tipo de fun��o para cada uma das seguintes:
    a) A fun��o descrita no Exerc�cio 6.4(a).
    b) A fun��o descrita no Exerc�cio 6.4(b).
    c) A fun��o descrita no Exerc�cio 6.4(c).
    d) A fun��o descrita no Exerc�cio 6.4(d).
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 238). Edi��o do Kindle.
    Autor: Pedro Filho, 09/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// PROT�TIPOS de fun��o, n�o h� necessidade dos nomes das vari�veis
double hypotenuse( double, double ); // a)
int smallest( int, int, int ); // b)
void instructions( void ); // ou void instructions() => c)
double inToDouble( double ); // d)

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
