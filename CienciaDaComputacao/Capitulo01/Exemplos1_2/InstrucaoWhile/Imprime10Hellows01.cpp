/*
    imprime 10 hellows
    17/11/2021
*/

#include <iostream>
#include <locale>

using namespace std;

// fun��o principal
int main()
{
    setlocale( LC_ALL, "portuguese"); // localiza��o geogr�fica

    system("cls"); // limpa a tela

    cout << "IMPRIME 10 HELLOW" << endl;

    cout << "1st Hellow." << endl;
    cout << "2nd Hellow." << endl;
    cout << "3rd Hellow." << endl;

    // vari�vel
    int conta = 4;

    // enquanto conta menor que 11 fa�a
    while( conta < 11 )
    {
        // imprime
        cout << conta << "th Hellow." << endl;

        conta++; // incremento

    } // fim while

    cout << endl; // pula uma linha

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
