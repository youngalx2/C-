/*
    Multiplica��o e divis�o com inteiros
    07/11/2021
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

    // vari�veis
    int a, b;
    cout << "Digite dois inteiros: ";
    cin >> a >> b;

    cout << "Multiplica��o: " << a << " * " << b << " = " << a * b << endl;
    cout << "Divis�o: " << a << " / " << b << " = " << a / b << endl;
    cout << "Resto: " << a << " % " << b << " = " << a % b << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
