/*
    6.28 Escreva um programa que insere tr�s n�meros de ponto flutuante com dupla
    precis�o e os passa para uma fun��o que retorna o menor  n�mero.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 244). Edi��o do Kindle.
    Autor: Pedro Filho 18/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// prot�tipo
double menorValor( double x, double y, double z );

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // vari�veis
    double n1, n2, n3;

    // entrada de dados
    cout << "Digite 3 n�meros diferentes: ";
    cin >> n1 >> n2 >> n3;

    // imprime resultado
    cout << "O menor n�mero � " << menorValor( n1, n2, n3 ) << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a fun��o menorValor
double menorValor( double x, double y, double z )
{
    // vari�vel menor recebe x
    double menor = x;

    // se y menor que menor
    if( y < menor )
        menor = y; // menor recebe y

    // se n�o, se z menor que menor
    if( z < menor )
        menor = z; // menor recebe z

    // retorne o menor
    return menor;
} // fim
