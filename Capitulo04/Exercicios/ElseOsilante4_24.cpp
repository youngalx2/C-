/*
    4.24 (Outro problema de else oscilante) Modifique o seguinte c�digo para produzir
    a sa�da mostrada. Utilize t�cnicas de recuo adequadas.  Voc� n�o deve fazer nenhuma
    altera��o al�m de inserir chaves. O compilador ignora o recuo em um programa C++.
    Eliminamos o recuo  do seguinte c�digo para tornar o problema mais desafiador.
    [Nota: � poss�vel que n�o seja necess�ria nenhuma modifica��o.]
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 137). Edi��o do Kindle.
*/

// incluir biblioteca
#include <iostream>
#include <locale>

using namespace std;

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale(LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // vari�veis
    int x = 5;
    int y = 8;

    if( x == 5 )
    if( y == 8 )
    cout << "@@@@@" << endl;
    else
    cout << "#####" << endl;
    cout << "$$$$$" << endl;
    cout << "&&&&&" << endl;

    // Deitel, Harvey; Paul,  Harvey. C++ Como Programar (p. 137). Edi��o do Kindle.

    // pausa o programa
    system("pause");

    return 0; // programa terminado com sucesso

} // fim main
