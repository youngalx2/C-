/*
    5.25 Uma cr�tica �s instru��es break e continue � que elas n�o s�o instru��es
    estruturadas. De fato, elas podem ser sempre substitu�das por  instru��es
    estruturadas, embora possa ser inconveniente fazer isso. Descreva de maneira
    geral como voc� removeria qualquer instru��o  break de um loop em um programa
    e a substituiria por alguma equivalente estruturada. [Dica: A instru��o break deixa
    um loop a partir  de dentro do corpo do loop. Outra maneira de deixar � fazendo
    falhar o teste de continua��o do loop. Considere a possibilidade de utilizar
    no teste de continua��o do loop um segundo teste que indica �sa�da pr�via por
    causa de uma condi��o �break��.] Utilize a t�cnica que voc�  desenvolveu aqui para
    remover a instru��o break do programa da Figura 5.13.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 180). Edi��o do Kindle.
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

    // cabe�alho
    cout << "\nEliminando o uso de <break>" << endl;

    // ELIMINANDO O USO DO <BREAK>
    // loop for para teste ( sair do for sem usar <break> )
    for( int i = 1; i <= 10; i++ )
    {
        // imprime
        cout << i << "\taaaaaaa" << endl;

        // condi��o
        // se i igual a 4
        if( i == 4 )
            // sai do loop for
            // break;

            // i recebe o valor 10
            i = 10; // sai do loop sem usar o break

    } // fim for

    // cabe�alho
    cout << "\nEliminando o uso de <continue>"  << endl;

    // ELIMINANDO O USO DO <CONTINUE>
    // loop for para mostrar a n�o utiliza��o do <continue>
    for( int i = 1; i <= 10; i++ )
    {
        // condi��o
        // se i igual a 5
        if( i == 5 )
            // usando continue
            // continue;
            i = 6; // i recebe um n�mero posterior ao 5

        // imprima
        cout << i << "\taaaaaaaaaaa" << endl;

    } // fim for continue

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
