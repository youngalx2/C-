/*
    1// Figura 6.23: fig06_23.cpp
    2// Utilizando o operador un�rio de resolu��o de escopo.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 216). Edi��o do Kindle.
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// cria a fun��o quadrado com inteiros
int quadrado( int x )
{
    // inorime
    cout << "O quadrado de " << x << " � ";
    // retorna x
    return x * x;
} // fim fun��o quadrado

// cria a fun��o quadrado com double
double quadrado( double y )
{
    // imprima
    cout << "O quadrado de " << y << " � ";
    // retorna o quadrado
    return y * y;
} // fim fun��o quadrado


// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cabe�alho
    cout << "SOBRECARGA DE FUN��O" << endl;

    cout << quadrado( 7 ) << endl;

    cout << quadrado( 7.5 ) << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
