/*
    1// Figura 6.27: fig06_27.cpp
    2// Programa de teste do template de fun��o maximum.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 219). Edi��o do Kindle.
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

// inclui a defini��o do template da fun��o maximum
#include "TemplateDeFuncao6_26.h"

using namespace std;

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cria vari�veis inteiras
    int int1, int2, int3;

    // entrada de dados
    cout << "Digite tr�s valores inteiros: ";
    cin >> int1 >> int2 >> int3;

    // chama a vers�o int de maximum
    cout << "O maior valor inteiro � " << maximum( int1, int2, int3 ) << endl;

    // vari�veis do tipo double
    double double1, double2, double3;

    // entrada de dados
    cout << "\nDigite tr�s valores reais: ";
    cin >> double1 >> double2 >> double3;

    // imprime o maior valor
    cout << "O maior valor � " << maximum( double1, double2, double3 ) << endl;

    // vari�veis
    char char1, char2, char3;

    // entrada de dados
    cout << "\nDigite tr�s caracteres: ";
    cin >> char1 >> char2 >> char3;

    // mostra resultado
    cout << "O maior caractere � " << maximum( char1, char2, char3 ) << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
