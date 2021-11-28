/*
    1.2.15 Escreva um programa que recebe tr�s inteiros positivos como argumentos
    de linha de comando e imprime falso se qualquer um deles for maior ou igual �
    soma dos outros dois e verdadeiro caso contr�rio. (Nota: Este c�lculo testa se
    os tr�s n�meros podem ser os comprimentos dos lados de algum tri�ngulo.)
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

    // vari�eis
    int n1, n2, n3;

    // entrada de dados
    cout << "Digite 3 inteiros diferentes: ";
    cin >> n1 >> n2 >> n3;

    // faz a compara��o
    bool teste1 = n1 >= (n2 + n3) || n2 >= (n1 + n3) || n3 >= (n1 + n2);

    // estabelece a condi��o, se teste1 igual a zero
    if( teste1 == 0 ) // se verdade
        // imprima este
        cout << "Nenhum deles � maior que ou igual a soma dos outros valores." << endl;
    else // se falso
        // imprima este
        cout << "Um deles � maior que ou igual a soma dos outros valores." << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
