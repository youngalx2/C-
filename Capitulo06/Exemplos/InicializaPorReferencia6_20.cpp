/*
    1// Figura 6.20: fig06_20.cpp
    2// As refer�ncias devem ser inicializadas.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 212). Edi��o do Kindle.
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

    // vari�veis
    int x = 3;
    int &y = x; // y refer�ncia (� um alias para x ) x

    // imprime
    cout << "x = " << x << endl << "y = " << y << endl;

    // y recebe outro valor
    y = 7; // passagem por refer�ncia modifica o valor original de x

    cout << "\ny = " << y << " y recebe um novo valor" << endl;

    // imprime depois de y receber outro valor
    cout << "Valor de x " << x << " depois de y receber outro valor" << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
