/*
    // voc� pode rotular uma instru��o com v�rios r�tulos de mai�sculas e min�sculas
    Usando switch
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

    cout << "PAR OU �MPAR" << endl;

    cout << "Por favor, insira um d�gito: ";
    char a;
    cin >> a;

    switch (a)
    {
        case '0': case '2': case '4': case '6': case '8':
            cout << a << " � par." << endl;
            break;

        case '1': case '3': case '5': case '7': case '9':
            cout << a << " � �mpar." << endl;
            break;

        default:
            cout << "n�o � um d�gito." << endl;
            break;
    } // fim swich

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
