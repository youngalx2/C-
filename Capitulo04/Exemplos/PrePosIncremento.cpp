/*
    Pr�-incremento e P�s-incremento
    Autor:
*/

#include <iostream>
#include <locale>

using namespace std;

// fun��o principal
int main()
{
    // define a localiza��o geogr�fica
    setlocale(LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cabe�alho
    cout << "P�S-INCREMENTO" << endl;
    // cria vari�vel
    int valor = 5;
    // mostra resultado
    cout << "int valor = 5;" << endl;
    cout << "valor++ = " << valor++ << endl;
    cout << "valor = " << valor << endl;

    cout << "\nPR�-INCREMENTO" << endl;
     // vari�vel
    valor = 7;
    // mostra resultado
    cout << "int valor = 7;" << endl;
    cout << "++valor = " << ++valor << endl;
    cout << "valor = " << valor << endl;

    // pausar
    system("pause");

    return 0; // programa terminado com sucesso

} // fim main
