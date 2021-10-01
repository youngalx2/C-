/*
    Escreva um programa que insere tr�s inteiros a partir do teclado e imprime
    a soma, a m�dia, o produto, o menor e o maior desses n�meros.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 53). Edi��o do Kindle.
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

    // vari�veis
    int num1, num2, num3;
    int soma = 0;
    int subtracao =0;
    int produto = 0;
    float media = 0;
    int maior = 0;
    int menor = 0;

    // entrada de dados
    cout << "Digite tr�s n�meros inteiros: ";
    cin >> num1 >> num2 >> num3;

    // calculando
    soma = num1 + num2 + num3;
    media = soma / 3;
    subtracao = num1 - num2 - num3;
    produto = num1 * num2 * num3;

    // atribuindo valor
    maior = num1;
    menor = num1;

    // se num2 maior que maior
    if( num2 > maior )
        // maior recebe num2
        maior = num2;

    // se num3 maior que maior
    if( num3 > maior )
        maior = num3;

    // se num2 menor que menot
    if( num2 < menor )
        menor = num2;

    // se num3 menor que menor
    if( num3 < menor )
        menor = num3;

    // mostra resultado
    cout << "Voc� digitou os n�meros: " << num1 << " "<< num2 << " " << num3 << endl;
    cout << "Soma = " << soma << endl;
    cout << "Subtra��o = " << subtracao << endl;
    cout << "Produto = " << produto << endl;
    cout << "Maior n�mero = " << maior << endl;
    cout << "Menor n�mero = " << menor << endl;

    return 0; // programa terminado com sucesso

} // fim main
