/*
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

    cout << "Ol�, Mundo C++!";

    return 0; // programa terminado com sucesso

} // fim main
