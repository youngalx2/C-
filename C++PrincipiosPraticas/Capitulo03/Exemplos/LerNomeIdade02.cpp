/*
    read name and age
    05/11/2021
*/

#include <iostream>
#include <string>
using namespace std;

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    cout << "Entre com o primeiro nome e a sua idade: ";
    string firstName;  // string variable
    int age;                 // integer variable
    cin >> firstName; //  read a string
    cin >> age;           // read a integer
    cout << "Ol�, " << firstName << " voc� tem "
            << age << " anos de idade." << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
