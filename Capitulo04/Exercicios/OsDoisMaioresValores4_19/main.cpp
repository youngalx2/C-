/*
    4.19 Utilizando uma abordagem semelhante �quela do Exerc�cio 4.17,
    identifique os dois maiores valores entre os dez n�meros. [Nota: Cada  n�mero
    deve ser inserido apenas uma vez.]
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 135). Edi��o do Kindle.
    Autor: Pedro Filho, 07/08/2021
*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    // limpa a tela
    system("cls");

    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // vari�veis
    int contador = 1; // contador do while
    int numero = 0; // para valores do usu�rio
    int primeiroMaior = 0; // seleciona o primieiro maior valor
    int segundoMaior = 0; // seleciona o segundo maior valor

    // enquanto contador menor ou igual a 10 fa�a
    while( contador <= 10 )
    {
        // entrada de dados
        cout << "Entre com o " << contador << "� valor: ";
        cin >> numero; // aguarda a entrada do usu�rio

        // se contador igual a 1 fa�a
        if( contador == 1 )
        {
            primeiroMaior = numero; // primeiro maior recebe o n�mero
            segundoMaior = numero; // segundo maior recebe o n�mero
        } // fim if
        // se n�o
        else
        {
            // se n�mero maior que o primeiro maior
            if( numero > primeiroMaior )
            {
                primeiroMaior = numero; // primeiro maior recebe o n�mero
            } // fim if
        } // fim else

        // se n�mero maior que primrieo maior
        if( numero < primeiroMaior )
            // e n�mero maior que segundo maior
            if( numero > segundoMaior )
                // segundo maior recebe o n�mero
                segundoMaior = numero;

        // incrementa o contador
        contador++;

    } // fim while

    // mostra resultado
    cout << "\nPrimeiro maior � " << primeiroMaior << "\nSegundo maior � " << segundoMaior << endl;

    return 0; // fim programa

} // fim main
