/*
    4.35 O fatorial de um inteiro n�o negativo n � escrito como n! (pronuncia-se �n fatorial�)
    e � definido como segue:
    n! = n � (n � 1) � (n � 2) �... �
    1 (para valores de n maiores que 1)  e  n! = 1 (para n = 0 ou n = 1).
    Por exemplo, 5! = 5 � 4 � 3 � 2 � 1, que � 120.
    Utilize instru��es while em cada um dos seguintes:
    a) Escreva um programa que l� um inteiro n�o negativo e calcula e imprime seu fatorial.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 139). Edi��o do Kindle.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 138). Edi��o do Kindle.
    Autor: Pedro Filho, 22/08/2021
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

    // vari�veis
    int numero = 0; // recebe o n�mero do usu�rio
    int fatorial = 1; // calcula o fatorial
    int contador; // contador do while

    // entrada de dados
    cout << "Digite um inteiro para o fatorial: ";
    cin >> numero; // aguarda a entrada do usu�rio

    // mostra o inicio do fatorial
    cout << numero << "! = ";

    contador = numero; // contador recebe o n�mero do usu�rios

    // enquanto o contador diferente de zero
    while( contador != 0 )
    {
        // calcula o fatorial
        fatorial *= contador;

        // mostra os valores do contador
        cout << contador << " x ";

        // contador recebe decremento
        contador--;

    } // fim while

    // mostra o valor do fatorial
    cout << "\b\b= " << fatorial << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
