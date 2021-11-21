/*
    1// Figura 6.19: fig06_19.cpp
    2// Comparando a passagem por valor e a passagem por refer�ncia com as refer�ncias.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 211). Edi��o do Kindle.
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// prot�tipos
int passagemPorValor( int );
void passagemPorReferencia( int & );

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // vari�vel
    int x = 2;
    int z = 4;

    // cabe�alho
    cout << "PASSAGEM POR VALOR E POR REFER�NCIA" << endl;

    // demonstra passagem por valor
    cout << "x = " << x << " antes da passagem por valor.";

    cout << "\nx = " << passagemPorValor( x )
            << " Valor retornado pela passagem por valor." << endl;

    // demonstra passagem por refer�ncia
    cout << "\nz = " << z << " antes da passagem por refer�ncia.";

    // chama a fun��o passagem por refer�ncia
    passagemPorReferencia( z );

    // imprime
    cout << "\nz = " << z << " depois da passagem por refre�ncia." << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria afun��o passagemPorValor
int passagemPorValor( int numero )
{
    // retorne
    return numero *= numero;
} // fim fun��o passagemPorValor

// cria fun�tao passagemPorReferencia
void passagemPorReferencia( int &numeroPorRefe )
{
    numeroPorRefe *= numeroPorRefe;
} // fim fun��o passagemPorReferencia
