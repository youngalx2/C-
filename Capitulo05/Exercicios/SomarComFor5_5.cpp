/*
    5.5 Escreva um programa que utiliza uma instru��o for para somar uma seq��ncia
    de inteiros. Assuma que o primeiro inteiro lido especifica  o n�mero de valores que
    restam a ser inseridos. Seu programa deve ler somente um valor por instru��o de
    entrada. Uma t�pica seq��ncia  de entrada talvez seja  5 100 200 300 400 500
    onde o 5 indica que os valores 5 subseq�entes devem ser somados.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 177). Edi��o do Kindle.
    Autor: Pedro Filho, 26/08/2021
*/

// incluir biblioteca
#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // vari�veis
    int contar;
    int numero;
    int inteiro;
    int somar = 0;

    // entrada de dados
    cout << "Digite quantos n�meros deseja inserir: ";
    cin >> numero;

    // loop for para n[umero
    for( contar = 1; contar <= numero; contar++ )
    {
        // entrada dos n�meros para somar
        cout << "Digite o " << contar << "� inteiro: ";
        cin >> inteiro;

        // soma os inteiros
        somar += inteiro;

    } // fim for

    // mostra resultado
    cout << "A soma dos n�meros digitados � " << somar << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
