/*
    Autor:
*/

#include <iostream>
#include <cstdlib>
#include <cformat>

//#importe <iostream>

using namespace std;
// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    int i = 10;
    cout << format("O n�mero da vari�vel i � {}", i ) << endl;
    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
