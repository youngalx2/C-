/*
    imprimindo m�ltiplas linhas com uma linha de c�digo
    Autor:
*/

#include <iostream>
#include <locale>

using namespace std;

// fun��o principal
int main()
{
    // define a localiza��o geogr�fica
    setlocale(LC_ALL, "portuguese");

    // ( \n ) = pule para pr�xima linha
    cout << "Ol�,\nMundo\nC++\n";

    return 0; // programa terminado com sucesso

} // fim main
