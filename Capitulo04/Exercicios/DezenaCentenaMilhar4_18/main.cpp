/*
    4.18 Escreva um programa em C++ que utiliza uma instru��o while e a seq��ncia
    de escape de tabula��o, \t, para imprimir a seguinte tabela  de valores:
    N 10*N 100*N 1000*N
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 135). Edi��o do Kindle.
*/
#include <iostream>

using namespace std;

int main()
{
    // cria vari�veis
    int contador = 1;

    // cabe�alho
    cout << "N\tN*10\tN*100\tN*1000" << endl;

    // enquanto contador menor ou igual a 10
    while( contador <= 5)
    {
        // imprime contador
        cout << contador << "\t" << contador * 10 << "\t" << contador * 100 << "\t" << contador * 1000 << endl;

        contador++; // incrementa contador
    } // fim while

    return 0; // fim do programa

} // fim main
