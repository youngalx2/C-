/*
    1// Figura 6.12: fig06_12.cpp
    2// Um exemplo de escopo.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 203). Edi��o do Kindle.
*/

// incluir biblioteca
#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

// prot�tipos
void useLocal();
void usestaticLocal();
void useGlobal();

// cria uma vari�vel global
int x = 5;

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cria vari�vel local em main
    int x = 10;

    cout << "int x = 10;" << endl;
    // imprime a vari�vel interna d

    //, e main
    cout << "imprime vari�vel local x " << x << endl;

    {
        // cria vari�vel interna x
        int x = 15;
        cout << "int x = 15;" << endl;
        cout << "Imprime o valor de x = " << x <<  endl;
    }

    // chama a fun��o
    useLocal();
    usestaticLocal();
    useGlobal();

    // chama a fun��o
    useLocal();
    usestaticLocal();
    useGlobal();

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// fun��o useLocal
void useLocal()
{
    int x = 25;

    cout << "\nImprime vari�vel local x = " << x << endl;

    x++;

    cout << "Imprime vari�vel local ap�s incremento x = " << x << endl;
} // fim fun��o

void usestaticLocal()
{
    // cria vari�vel
    static int x = 50;

    // mostra
    cout << "\nVari�vel static int x = " << x << endl;

    // incrementa a vari�vel x
    ++x;

    // mostra
    cout << "Vari�vel static int x ap�s o incremento x = " << x << endl;
} // fim fun��o usestaticLocal

// cria a fun��o useGlobal
void useGlobal()
{
    // mostre
    cout << "\nVari�vel global int x = " << x << endl;

    // calcula a vari�vel
    x *= 10;

    cout << "Vari�vel x depois do incremento x = " << x << endl;
} // fim fun��o useGlobal
