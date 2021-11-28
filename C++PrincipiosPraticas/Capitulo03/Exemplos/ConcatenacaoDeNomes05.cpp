/*
    concatena��o entre nomes
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

    // solicita a entrada de dados
    cout << "Informe o primeiro e o segundo nome: ";

    // cria as vari�veis
    string primeiroNome; // primeiroNome is a variable of type string
    string segundoNome; // segundoNome is a variable of type string

    // espera a entrada do usu�rio
    cin >> primeiroNome >> segundoNome; // read characters into firstName and secondName

    // vari�vel para a concatena��o do primeiroNome mais(+) espa�o mais(+) segundoNome
    string nomes = primeiroNome + ' ' + segundoNome; // o sinal de + faz a jun��o das vari�veis

    // mostra a concatena��o dos nomes
    cout << "Ol�, " << nomes << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
