/*
    read and write a first name
    ler e escreve o primeiro nome
    05/11/2021
*/

#include <iostream>
#include <locale>
#include <string>

using namespace std;

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    cout << "Entre com o primeiro nome: ";
    string firstName = " "; // firstName is a variable of type string
    cin >> firstName; // read characters into firstName
    cout << "Ol�, " << firstName << "!" << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
