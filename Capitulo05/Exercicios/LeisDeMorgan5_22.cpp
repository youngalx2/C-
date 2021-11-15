/*
    5.22 (Leis de De Morgan) Neste cap�tulo, discutimos os operadores l�gicos &&, || e!.
    As leis de De Morgan �s vezes podem tornar mais  conveniente para n�s expressarmos
    uma express�o l�gica. Essas leis afirmam que a express�o !( condi��o1 && condi��o2)
    � logicamente equivalente � express�o (!condi��o1 || !condi��o2). Al�m disso, a express�o
    !( condi��o1 || condi��o2) � logicamente equivalente � express�o (!condi��o1 && !condi��o2).
    Utilize as leis de De Morgan para escrever express�es equivalentes  para cada
    uma das seguintes, e ent�o escreva um programa para mostrar que a express�o
    original e a nova express�o em cada caso s�o  equivalentes:
    a) !( x < 5) && !( y >= 7)
    b) !( a == b) || !( g != 5)
    c) !( (x <= 8) && (y > 4))
    d) !( (i > 4) || (j <= 6))
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 179). Edi��o do Kindle.
    Autor: Pedro Filho 01/09/2021
*/

// incluir biblioteca
#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // vari�veis
    int x = 3, y = 7;

    // mostra resultado
    cout << "int x = 3, y = 7;" << endl;
    cout << "Dada a express�o a) !( x < 5) && !( y >= 7)\nequivale a !( x < 5 && y >= 7 ) = ";

    // condi��o
    if( ( !( x < 5) && !( y >= 7) )  == !( x < 5 && y >= 7 ) )
    {
        // imprima
        cout << "Verdade" << endl;
    } // fim if

    // b) !( a == b) || !( g != 5)
    int a = 5, b = a, g = 4;

    // imprima
    cout << "\nint a = 5, b = a, g = 4;" << endl;
    cout << "Dado a expres�o b) !( a == b) || !( g != 5)\nequivale a !( a == b && g != 5) = ";

    // condi��o
    if(!( a == b) || !( g != 5) == !( a == b && g != 5) )
    {
        cout << "verdade" << endl;
    }
    else
    {
        cout << "falso" << endl;
    }

    // c) !( (x <= 8) && (y > 4))
    x = 5;
    y = 3;

    // imprime
    cout << "\nint x = 5, y = 3;" << endl;
    cout << "Dada a express�o c) !( (x <= 8) && (y > 4))\nequivale a ( !(x <= 8) || !(y > 4)) ";

    // condi��o
    if( !( (x <= 8) && (y > 4)) == ( !(x <= 8) || !(y > 4)) )
    {
        cout << "Verdade" << endl;
    }
    else
    {
        cout << "Falso" << endl;
    }


    // d) !( (i > 4) || (j <= 6))
    // vari�veis
    int i = 5, j = 3;

    // imprime
    cout << "\nint i = 5, j = 3;" << endl;
    cout << "Dado a express�o d) !( (i > 4) || (j <= 6))\nequivale a ( !(i > 4) && !(j <= 6)) = ";

    // condi��o
    if( !( (i > 4) || (j <= 6)) == ( !(i > 4) && !(j <= 6) ) )
    {
        cout << "Verdade" << endl;
    }
    else
    {
        cout << "Falso" << endl;
    }

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
