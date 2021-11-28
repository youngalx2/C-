/*
    1.3.4 Escreva um fragmento de c�digo que imprima verdadeiro se
    as vari�veis duplas x e y estiverem estritamente entre 0 e 1 e falso caso contr�rio.
    Sedgewick, Robert; Wayne, Kevin. Ci�ncia da Computa��o (p. 81).
    Pearson Education. Edi��o do Kindle
    Feito por: Pedro Filho, 18/11/2021
*/

#include <iostream>
#include <locale>

using namespace std;

// fun��o principal
int main()
{
    setlocale( LC_ALL, "portuguese"); // localiza��o geogr�fica

    system("cls"); // limpa a tela

    double a = 0, b = 1;

    if( (a > -1 && a < 2) || (b > -1 && b < 2) )
        // imprima
        cout << "Verdadeiro" << endl;
    else
        cout << "Falso" << endl;

    cout << endl; // pula uma linha

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
