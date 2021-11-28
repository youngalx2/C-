/*
    Este programa imprime os comprimentos relativos das subdivis�es em uma r�gua.
    A en�sima linha de sa�da s�o os comprimentos relativos das marcas em uma r�gua
    subdividida em intervalos de 1/2n de uma polegada. Por exemplo, a quarta linha de
    sa�da fornece os comprimentos relativos das marcas que indicam intervalos de 1/16
    de polegada em uma r�gua.
    Sedgewick, Robert; Wayne, Kevin. Ci�ncia da computa��o (p. 20).
    Pearson Education. Edi��o do Kindle.
    09/11/2021
*/

#include <iostream>
#include <locale>
#include <string>
using namespace std;

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    string ruler1 = "1";
    string ruler2 = ruler1 + "2" + ruler1;
    string ruler3 = ruler2 + "3" + ruler2;
    string ruler4 = ruler3 + "4" + ruler3;
    string ruler5 = ruler4 + "5" + ruler4;

    // imprime
    cout << ruler1 << endl;
    cout << ruler2 << endl;
    cout << ruler3 << endl;
    cout << ruler4 << endl;
    cout << ruler5 << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
