/*
    Este programa recebe um argumento de linha de comando inteiro n e
    imprime uma tabela das pot�ncias de 2 que s�o menores ou iguais a 2n.
    Cada vez que passa pelo loop, ele aumenta o valor de ie dobra o valor
    da pot�ncia. Mostramos apenas as tr�s primeiras e as tr�s �ltimas linhas
    da tabela; o programa imprime n + 1 linhas.
    Sedgewick, Robert; Wayne, Kevin. Ci�ncia da computa��o (p. 57).
    Pearson Education. Edi��o do Kindle.
    14/11/2021
*/

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
    int valor = 0;
    int contador = 0;

    cout << "Digite um valor para ver o dobro dele: ";
    cin >> valor;

    while( contador <= valor )
    {
        cout << setw( 5 );
        cout << contador << " - " << contador * contador << endl;

        contador++;

    } // fim while

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
