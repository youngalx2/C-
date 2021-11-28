/*
    1.2.14 Escreva um programa que recebe dois inteiros positivos como argumentos
    de linha de comando e imprime verdadeiro se um deles divide o outro igualmente.
    Autor: Pedro, 15/11/2021
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
    int num1 = 0;
    int num2 = 0;

    // entrada de dados
    cout << "Informe dois inteiros: ";
    cin >> num1 >> num2;

    bool teste1 = ( num1 % num2 == 0);
    bool teste2 = ( num2 % num1 == 0 );

    cout << num1 << " � divis�vel por " << num2 << " => " << teste1 << endl;
    cout << num2 << " � divis�vel por " << num1 << " => " << teste2 << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
