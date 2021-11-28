/*
    8. Escreva um programa para testar um valor inteiro para determinar
    se ele � �mpar ou par. Como sempre, certifique-se de que sua sa�da seja
    clara e completa. Em outras palavras, n�o diga apenas sim ou n�o.
    Sua sa�da deve ser independente, como O valor 4 � um n�mero par.
    Dica: Veja o operador restante (m�dulo) em �3.4.
    Autor: Pedro 10/11/2021
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
    int num = 0;

    cout<< "N�MERO PAR ou �MPAR" << endl;

    // entrada de dados
    cout << "Digite um valor inteiro: ";
    cin >> num;

    if( num % 2 == 0 )
        cout << "O " << num << " � um n�mero par." << endl;

    if( num % 2 != 0 )
        cout << "O " << num << " n�o � um n�mero par." << endl;


    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
