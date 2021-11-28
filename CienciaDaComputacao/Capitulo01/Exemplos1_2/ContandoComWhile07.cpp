/*
    Este programa usa um loop while para a tarefa simples e repetitiva de
    imprimir a sa�da mostrada abaixo. Ap�s a terceira linha, as linhas a serem
    impressas diferem apenas no valor do �ndice contando a linha impressa,
    ent�o definimos uma vari�vel i para conter esse �ndice. Depois de inicializar
    o valor de i para 4, entramos em um loop while, onde usamos o valor de i na
    instru��o System.out.println () e o incrementamos a cada vez por meio do loop.
    Ap�s imprimir o 10� Hello, o valor de i se torna 11 e o loop termina.
    Sedgewick, Robert; Wayne, Kevin. Ci�ncia da Computa��o (pp. 55-56).
    Pearson Education. Edi��o do Kindle.
    14/11/2021
*/

#include <iostream>
#include <locale>
using namespace std;

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // vari�vel
    int conta = 1;

    cout << "CONTA AT� 10" << endl;

    while( conta < 11)
    {
        cout << conta << "th Hello" << endl;
        conta++; // incrementa em 1

    } // fim while

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
