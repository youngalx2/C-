/*
    4.17 O processo de localizar o maior n�mero (isto �, o m�ximo de um grupo de valores)
    � freq�entemente utilizado em aplicativos de computador. Por exemplo, um programa
    que determina o vencedor de uma competi��o de vendas insere o n�mero de unidades
    vendidas por  vendedor. O vendedor que vende mais unidades ganha a competi��o.
    Escreva um programa em pseudoc�digo, e ent�o um programa em  C++, que utiliza uma
    instru��o while para determinar e imprimir o maior n�mero dos dez n�meros inseridos pelo
    usu�rio. Seu programa  deve utilizar tr�s vari�veis, como segue:
    counter: Um contador para contar at� 10 (isto �, monitorar quantos n�meros foram inseridos
    e determinar quando todos os 10 n�meros foram processados).
    number: A entrada num�rica atual para o programa.
    largest: O maior n�mero encontrado at� agora.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 135). Edi��o do Kindle.
    Autor Pedro Filho, 16/06/2021.
*/

#include <iostream>
#include "MaiorValor.h" // inclui a classe MaiorValor

using namespace std;

// cria a fun��o entradaDeDados para a classe MaiorValor
void MaiorValor::entradaDeDados()
{
    // cria as vari�veis
    int contador = 1;
    int numero = 0;
    int maior = 0;

    // enquanto o contador menor ou igual a 10 fa�a
    while( contador <= 10 )
    {
        // imprime
        cout << "Digite " << contador << "� n�mero inteiro: ";
        cin >> numero; // aguarda entrada do usu�rio

        // verifica se o contador � igual a 1
        if( contador == 1 ) // se verdade
            // maior recebe o n�mero digitado
            maior = numero;

        // verifica se o n�mero digitado � maior que maior
        if( numero > maior ) // se verdade
        {
            // maior recebe o n�mero
            maior = numero;
        } // fim if

        // incrementa o contador em 1
        contador++;

    } // fim while

    // imprime o resultado
    cout << "O maior valor � " << maior << endl;

} // fim fun��o
