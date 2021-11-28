/*
    converter de polegadas para cent�metros ou cent�metros para polegadas
    um sufixo �i� ou �c� indica a unidade da entrada
    13/11/2021
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

    const double cm_per_inch = 2.54; // n�mero de cent�metros em uma polegada

    double comprimento = 1; // comprimento em polegadas ou cent�metros

    char unidade = 0;

    cout << "POLEGADAS PARA CENT�METROS" << endl;

    cout << "Por favor, insira um comprimento seguido por uma unidade (c ou p): \n";
    cin >> comprimento >> unidade;

    if (unidade == 'p')
        cout << comprimento << " polegadas == " << cm_per_inch * comprimento << "cm \n";
    else // se n�o
        cout << comprimento << " cent�metros == " << comprimento / cm_per_inch << "pl \n";

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
