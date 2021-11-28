/*
    6.31 (D�gitos invertidos) Escreva uma fun��o que aceita um valor inteiro e retorna
    o n�mero com seus d�gitos invertidos. Por exemplo, dado  o n�mero 7.631,
    a fun��o deve retornar 1.367.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 244). Edi��o do Kindle.
    Autor: Pedro Filho, 18/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// protpotipo de fun��o
int digitosInvertidos( int numero );

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // vari�vel
    int num, resposta;

    // cabe�alho
    cout << "\tDIGITOS INVERTIDOS" << endl;

    // entrada de dados
    cout << "Digite um n�mero at� 99999: ";
    cin >> num;

    // reposta recebe o valor retornado da fun��o digitos invertidos
    resposta = digitosInvertidos( num );

    // imprime o resultado
    cout << "o n�mero digitado � " << num << " invertido ficou " << resposta << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a fun��o digitosInvertidos
int digitosInvertidos( int numero )
{
    // cria vari�veis
    int n1, n2, n3, n4, n5;
    int juntar;

    // c�lculo para separar digitos
    n1 = numero / 10000 % 10000;
    n2 = numero % 10000 / 1000;
    n3 = numero % 1000/ 100;
    n4 = numero % 100 / 10;
    n5 = numero % 10 / 1;

    // c�lculo para juntar digitos
    juntar = (n5 * 10000) + (n4 * 1000 ) + (n3 * 100 ) + (n2 * 10) + (n1 * 1);

    // retorne o juntar
    return juntar;

} // fim fun��o
