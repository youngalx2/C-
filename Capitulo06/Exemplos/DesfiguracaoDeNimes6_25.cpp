/*
    1// Figura 6.25: fig06_25.cpp
    2// Desfigura��o de nomes.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 218). Edi��o do Kindle.
    Autor:
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// prototipos
int quadrado( int x )
{
    return x * x;
} // fim fun��o

// cria a fun��o quadrado
double quadrado( double y )
{
    return y * y;
} // fim fun��o

// cria a fun��o
void nada1( int a, float b, char c, int &d )
{

}

// cria a fun��o nada2
int nada2( char a,  int b, float &c, double d )
{
    return 0;
}

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    //system("cls");

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
