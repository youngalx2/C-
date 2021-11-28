/*
    6.32 O m�ximo divisor comum (MDC) de dois inteiros � o maior inteiro que
    � divis�vel por cada um dos dois n�meros. Escreva uma fun��o  mdc que retorna
    o m�ximo divisor comum de dois inteiros.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 244). Edi��o do Kindle.
    Autor: Pedro Filho, 19/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// prot�tipo
int calculaMDC( int n1, int n2 );

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // vari�vel
    int num1, num2;
    int resultado;

    // cabe�alho
    cout << "MDC ENTRE DOIS VALORES" << endl;

    // entrada de dados
    cout << "Digite o primeiro n�mero: ";
    cin >> num1;
    cout << "Digite o segundo n�mero: ";
    cin >> num2;

    // resultado recebe o valor retornado da fun��o calculaMDC
    resultado = calculaMDC( num1, num2 );

    // imprime resultado
    cout << "O MDC entre " << num1 << " e " << num2 << " � [" << resultado << "]" << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fint im main

// fun��o mdc
int calculaMDC( int n1, int n2 )
{
    // cria vari�vel
    int resto;

    // enquanto n2 diferente de zero fa�a
    while( n2 != 0 )
    {
        // resto recebe o valor do resto entre n1 e n2
        resto = n1 % n2;
        // n1 recebe o valor de n2
        n1 = n2;
        // n2 recebe o valor do resto
        n2 = resto;

    } // fim while

    // retorne o valor de n1
    return n1;

} // fim fun��o mdc
