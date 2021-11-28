/*
    2. Escreva um programa em C ++ que converta de milhas em quil�metros.
    Seu programa deve ter um prompt razo�vel para o usu�rio inserir um n�mero
    de milhas. Dica: Existem 1,609 quil�metros para a milha.
    Autor: Pedro Filho, 10/11/2021
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

    double milhas = 1.609;
    double quilometros;

    cout << "QUILOMETROS EM MILHAS" << endl;

    // entrada de dados
    cout << "Digite o quilometros para convers�o: ";
    cin >> quilometros;

    cout << "\t" << quilometros << " Km tem " << quilometros * milhas << " milhas." << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
