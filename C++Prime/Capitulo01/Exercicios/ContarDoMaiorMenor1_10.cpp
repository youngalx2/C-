/*
    Autor:
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

    cout << "Contabem de 10 at� 0 -> ";
    // loop para contar de 10 a zero
    for( int valor = 10; valor >= 0; valor-- )
        cout << valor << " ";
    cout << endl; // pula linha

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
