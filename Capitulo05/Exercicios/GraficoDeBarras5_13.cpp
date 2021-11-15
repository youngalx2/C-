/*
    5.13 Uma aplica��o interessante dos computadores s�o os desenhos de gr�ficos
    e gr�ficos de barras. Escreva um programa que l� cinco n�meros
    (cada um entre 1 e 30). Suponha que o usu�rio insira apenas valores v�lidos.
    Para cada n�mero lido, seu programa deve imprimir uma  linha contendo esse
    n�mero de asteriscos adjacentes. Por exemplo, se seu programa l� o n�mero 7,
    ele deve imprimir *******.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 178). Edi��o do Kindle.
    Autor: Pedro Filho, 29/08/2021
*/

// incluir biblioteca
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

    // vari�vel
    int numero;
    int i;
    int resposta = 0;

    // enquanto resposta diferente de -1
    while( resposta != -1 )
    {
        // entrada de dados
        cout << "Digite um n�mero entre 1 - 30: ";
        cin >> numero;

        // imprime o n�mero e a barra de asterisco
        cout << " voc� digitou o n�mero " << numero << ' ';

        // loop for para imprimir um gr�fico de barras
        for( i = 1; i <= numero; i++ )
        {
            // imprime asterisco
            cout << '*';
        } // fim for

        // deseja continuar
        cout << "\nDeseja continuar (1=sim / -1=sair)? ";
        cin >> resposta;

        // limpa a tela
        system("cls");

    } // fim while

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
