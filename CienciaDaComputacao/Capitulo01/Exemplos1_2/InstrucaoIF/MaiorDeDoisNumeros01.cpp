/*
    O maior valor de dois n�meros
    12/11/2021
*/

#include <iostream>
#include <locale>
using namespace std;

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // vari�veis
    int a = 0;
    int b = 0;

    // entrada de dados
    cout << "Por favor, insira dois inteiros \n";
    cin >> a >> b;

    // se a menor que b
    if (a < b) // condi��o
        // 1� alternativa (tomada se a condi��o for verdadeira):
        cout << "Maior entre (" << a << "," << b << ") � " << b << endl;

    else // se n�o
        // 2� alternativa (tomada se a condi��o for falsa):
        cout << "Maior entre (" << a << "," << b << ") � " << a << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
