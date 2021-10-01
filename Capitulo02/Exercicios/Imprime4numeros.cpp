/*
    2.17 Escreva um programa que imprime os n�meros 1 a 4 na mesma linha com
    cada par de n�meros adjacentes separados por um espa�o. Fa�a  isso de v�rias maneiras:
    a) Utilizando uma instru��o com um operador de inser��o de fluxo.
    b) Utilizando uma instru��o com quatro operadores de inser��o de fluxo.
    c) Utilizando quatro instru��es.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 53). Edi��o do Kindle.
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

    // 2.17 Escreva um programa que imprime os n�meros 1 a 4 na mesma linha

    // a) Utilizando uma instru��o com um operador de inser��o de fluxo.
    cout << "1 2 3 4\n";

    // b) Utilizando uma instru��o com quatro operadores de inser��o de fluxo.
    cout << "1 " << "2 " << "3 " << "4\n";

    // c) Utilizando quatro instru��es.
    cout << "1 ";
    cout << "2 ";
    cout << "3 ";
    cout << "4\n";

    return 0; // programa terminado com sucesso

} // fim main
