/*
    read and write name and age (2nd version)
    Autor:
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

    cout << "Entre com o primeiro nome e a sua idade: ";

    string firstName = "???";  // string variable ( "???" means don't know the name )
    int age = 0;                 // integer variable ( "0" means don't know the age )
    cin >> firstName >> age; //  read a string and a integer

    cout << "Ol�, " << firstName << " voc� tem "
            << age << " anos de idade." << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
