/*
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

    // exemplo de c�digo incorreto (falta uma quebra)

    const double cm_per_inch = 2.54; // n�mero de cent�metros em
                                                                                       // uma polegada
    double comprimento = 1; // comprimento em polegadas ou
                                                                                      // cent�metros
    char unidade = 'a';

    cout << "Por favor, insira um comprimento seguido por uma unidade (c ou i): \ n";
    cin >> comprimento >> unidade;

    switch (unidade)
    {
           case 'p':
                cout << comprimento << " polegadas ==" << cm_per_inch * comprimento << "cm" << endl;
           case 'c':
                cout << comprimento << " centimetros ==" << comprimento / cm_per_inch << "in \ n";
    } // fim switch

    return 0; // programa terminado com sucesso

} // fim main
