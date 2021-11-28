/*
    Exerc�cio 1.4
    Nosso programa usou o operador de adi��o, +, para somar dois n�meros.
    Escreva um programa que use o operador de multiplica��o, *, para imprimir o produto.
    Autor: Pedro Filho 04/11/2021
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
    cout << "O produto entre " << num1 << " e " << num2 << " � " << num1 * num2 << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
