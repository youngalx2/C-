/*
    conta quantas vezes um n�mero aprareceu
    04/11/2021
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

    int contaValor = 1;
    int valor = 0;
    int conta = 0;

    cout << "Digite um n�mero inteiro: ";
    if( cin >> contaValor )
        conta = 1;

    cout << "Digite um n�mero inteiro: ";
    while( cin >> valor )
    {
        if( valor == contaValor)
            ++conta;
        else
        {
            cout << contaValor << " ocorreu " << conta << " Vezes" << endl;
            contaValor = valor;
            conta = 1;
        } // fim else
    } // fim while

    cout << contaValor << " ocorreu " << conta << " Vezes" << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
