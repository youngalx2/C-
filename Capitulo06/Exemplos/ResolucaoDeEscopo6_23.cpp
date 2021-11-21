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

// vari�vel global
int numero = 7;

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // vari�vel interna
    double numero = 10.5;

    // imprime e chama a vari�vel interna
    cout << "Chama avari�vel local de nome n�mero = " << numero << endl;

    // imprime e chama a vari�vel global n�mero usando o operador unaria
    cout << "Chama a vari�vel global n�mero usando o operador un�rio (::) n�mero = "
                << ::numero << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
