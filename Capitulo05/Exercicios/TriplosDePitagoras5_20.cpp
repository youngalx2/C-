/*
    5.20 (Triplos de Pit�goras) Um tri�ngulo ret�ngulo pode ter lados que s�o todos inteiros.
    Um conjunto de tr�s valores inteiros para os lados de  um tri�ngulo ret�ngulo � chamado
    de triplo de Pit�goras. Esses tr�s lados devem satisfazer o relacionamento de que a soma
    dos quadrados de dois dos lados seja igual ao quadrado da hipotenusa. Localize todos os
    triplos de Pit�goras para side1, side2 e hypotenuse,  todos n�o maiores que 500.
    Utilize um loop for triplamente aninhado que tente todas as possibilidades.
    Esse � um exemplo de computa��o  baseada na for�a bruta. Voc� aprender� em cursos
    mais avan�ados de ci�ncia da computa��o que h� muitos problemas interessantes para  os
    quais n�o h� nenhuma abordagem algor�tmica conhecida diferente da pura for�a bruta.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 179). Edi��o do Kindle.
    Autor: Pedro Filho, 30/08/2021
*/

// incluir biblioteca
#include <iostream>
#include <locale>
#include <iomanip>
#include <cmath>

using namespace std;

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cria vari�veis
    int ladoA;
    int ladoB;
    int hipotenusa;
    int triangulo = 0;

    // cabe�alho
    cout << setw(24) << "TRIPLOS DE PIT�GORAS" << endl;

    //T�CNICA DA FOR�A BRUTA
    // loop para for�a bruta
    // primrier loop lado a
    for( ladoA = 1; ladoA <= 500; ladoA++ )
    {
        // loop for para o ladoB
        for( ladoB = 1; ladoB <= 500; ladoB++ )
        {
            // loop for para a hipotenusa
            for( hipotenusa = 1; hipotenusa <= 500; hipotenusa++ )
            {
                // se o quadrado de a mais o quadrado de b igual a hipotenusa
                // ent�o pode ser um tri�ngulo ret�ngulo
                if( ( pow(ladoA, 2) + pow( ladoB, 2) ) == ( pow(hipotenusa, 2) ) )
                {
                    // imprime os valores para formar tri�ngulo ret�ngulo
                    cout << setw( 5 ) << ladoA
                            << setw( 5 ) << " + "
                            << setw( 5 ) << ladoB
                            << setw( 5 ) << " = "
                            << setw( 5 ) << hipotenusa << endl;
                } // fim if

            } // fim for hipotenusa
        } // fim for ladoB
    } // fim for ladoA

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
