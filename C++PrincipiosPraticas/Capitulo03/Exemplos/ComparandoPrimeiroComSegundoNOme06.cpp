/*
    Comparando o primeiro nome com o segundo nome
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

    // entrada de dadosp
    cout << "Entre com dois nomes: ";

    // cria as vari�veis
    string primeiro;
    string segundo;

    // aguarda entrada do usu�rio
    cin >> primeiro >> segundo;

    // se primeiro igual ao segundo
    if( primeiro == segundo )
        // imprima
        cout << primeiro << " � igual a " << segundo << endl;

    // se primeiro menor que o segundo
    if( primeiro < segundo )
        // imprima
        cout << primeiro << " vem antes de " << segundo << endl;

    // se primeiro maior que o segundo
    if( primeiro > segundo )
        // imprima
        cout << primeiro << " vem depois de " << segundo << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
