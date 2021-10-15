/*
    2.28 Escreva um programa que insere um inteiro de cinco d�gitos, separa
    o inteiro em seus d�gitos individuais e imprime os d�gitos separados  entre
    si por tr�s espa�os cada. [Dica: Utilize operadores de divis�o de inteiros e m�dulo.]
    Por exemplo, se o usu�rio digitar 42339, o  programa deve imprimir:  4 2 3 3 9
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 54). Edi��o do Kindle.
    Pedro Filho, 04/08/2021
*/

// Incluir biblioteca
#include <iostream>

using namespace std;

main()
{
    // vari�vel
    int n, n1, n2, n3, n4, n5;

    // entrada de dados
    cout<<"Digite um inteiro de 5 digitos: ";
    cin>>(n);

    // Calculando
    n1 = n / 10000;
    n2 = n % 10000 / 1000;
    n3 = n % 1000 / 100;
    n4 = n % 100 / 10;
    n5 = n % 10;

    cout<<n1<<" "<<n2<<" "<<n3<<" "<<n4<<" "<<n5<<endl;
}
