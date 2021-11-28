/*
    intervalo de dois n�meros
    Autor: Pedro 24/11/2021
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
    int num1, num2, auxiliar;

    // entrada de dados
    cout << " Digite dois inteiros diferentes: ";
    cin >> num1 >> num2;

    // se num2 maior que num1
    if( num1 > num2 )
    {
        auxiliar = num2;
        num2 = num1;
        num1 = auxiliar;
    } // fim if

    cout << "Valores entre " << num1 << " e " << num2 << " � ";

    // loop para imprimir os valores
    for( int valor = num1; valor <= num2; valor++ )
        cout << valor << " ";

    cout << endl; // pula linha

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
