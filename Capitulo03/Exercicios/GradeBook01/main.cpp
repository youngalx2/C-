#include <iostream>
#include <locale>

using namespace std;

int main()
{
    // configura a localiza��o geogr�fica
    setlocale(LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    cout << "Hello world!" << endl;

    // pausa o programa
    system("pause");

    // programa executado com sucesso
    return 0;
} // fim main
