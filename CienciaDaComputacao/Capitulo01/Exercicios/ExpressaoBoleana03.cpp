/*
    1.2.3 Suponha que a e b sejam vari�veis booleanas. Mostre que a express�o
        Clique aqui para visualizar a imagem do c�digo (! (A && b) && (a || b)) || ((a && b)
        ||! (a || b)) avalia como verdadeiro
    Autor: 11/11/2021
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
    bool a, b;
    bool A;

    cout << (!(A && b) && (a || b)) || ((a && b) ||! (a || b)) << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
