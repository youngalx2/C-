/*
    Exerc�cio 1.5
    Escrevemos a sa�da em uma grande instru��o. Reescreva
    o programa para usar uma instru��o separada para imprimir cada operando.
    Autor: Pedro Filho, 04/11/2021
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

    // vari�veis
    int num1, num2;

    // entrada de dados
    cout << "Digite dois inteiros: ";
    cin >> num1 >> num2;

    // mostra resultado
    cout << "O ";
    cout << "produto ";
    cout << "entre ";
    cout << num1;
    cout << " e ";
    cout << num2;
    cout << " � ";
    cout << num1 * num2;
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
