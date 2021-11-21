/*
    1// Figura 6.17: fig06_17.cpp
    2// Fun��es que n�o aceitam argumentos.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 208). Edi��o do Kindle.
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// prot�tipos
void function1();
void function2( void );

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // chama as fun��es
    function1();
    function2();

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a fun��o function1
void function1()
{
    cout << "\nFun��o 1 sem parametros." << endl;
} // fim function1

// cria a fun��o function2
void function2( void )
{
    cout << "\nFun��o 2 sem par�metros." << endl;
} // fim function2
