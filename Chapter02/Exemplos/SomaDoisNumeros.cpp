/*
    imprimindo a soma de dois n�meros
    Autor:
*/

#include <iostream>
#include <locale>

using namespace std;

// fun��o principal
int main()
{
    // define a localiza��o geogr�fica
    setlocale(LC_ALL, "portuguese");

    // cria vari�veis
    int numero1;
    int numero2;
    int soma;

    cout << "Digite o primeiro n�mero: ";
    cin >> numero1;

    cout << "Digite o segundo n�mero: ";
    cin >> numero2;

    soma = numero1 + numero2;

    cout << "A soma de " << numero1 << " + " << numero2 << " = " << soma;

    return 0; // programa terminado com sucesso

} // fim main
