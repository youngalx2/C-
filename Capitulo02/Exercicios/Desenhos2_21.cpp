/*
    2.21 Escreva um programa que imprime uma caixa, uma oval, uma seta e um
    losango da seguinte maneira:
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 53). Edi��o do Kindle.
    Autor: Pedro, 04/08/2021
*/

#include <iostream>
#include <locale>

using namespace std;

// fun��o principal
int main()
{
    // define a localiza��o geogr�fica
    setlocale(LC_ALL, "portuguese");

    // desenhando com cout
    cout << "**********          ***          *          *\n";
    cout << "*        *         *   *        ***        * *\n";
    cout << "*        *        *     *      *****      *   *\n";
    cout << "*        *        *     *        *       *     *\n";
    cout << "*        *        *     *        *      *       *\n";
    cout << "*        *        *     *        *       *     *\n";
    cout << "*        *        *     *        *        *   *\n";
    cout << "*        *         *   *         *         * *\n";
    cout << "**********          ***          *          *\n";

    return 0; // programa terminado com sucesso

} // fim main
