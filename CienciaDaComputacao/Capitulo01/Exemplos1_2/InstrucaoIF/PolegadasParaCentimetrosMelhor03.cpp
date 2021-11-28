/*
    // converter de polegadas para cent�metros ou cent�metros para polegadas
    // um sufixo �p� ou �c� indica a unidade da entrada
    // qualquer outro sufixo � um erro
    03/11/2021
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

    const double cm_per_inch = 2.54; // n�mero de cent�metros em
                                                                                  // uma polegada
    double comprimento = 1; // comprimento em polegadas ou
                                                                                  // cent�metros
    char unidade = ' '; // um espa�o n�o � uma unidade

    cout << "Por favor, insira um comprimento seguido por uma unidade (c ou p): ";
    cin >> comprimento >> unidade;

    // se a unidade igual a p
    if (unidade == 'p')
        cout << comprimento << " polegadas == "  << cm_per_inch * comprimento << "cm" << endl;
    else if (unidade == 'c')
        cout << comprimento << " cent�metros ==" << comprimento / cm_per_inch << "pl" << endl;
    else // se n�o
        cout << "Desculpe, n�o conhe�o uma unidade chamada '" << unidade << endl;;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
