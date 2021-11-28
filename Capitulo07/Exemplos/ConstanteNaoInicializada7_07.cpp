/*
    1// Figura 7.7: fig07_07.cpp
    2// Uma vari�vel const deve ser inicializada.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 257). Edi��o do Kindle.
    Autor: 02/10/2021
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

    // cria constante e n�o inicializa
    const int x;

    cout << "O valor daconstante x �: " << endl;
    cin >> x;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
