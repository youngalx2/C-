/*
    6.41 (S�rie de Fibonacci) A s�rie de Fibonacci  0, 1, 1, 2, 3, 5, 8, 13, 21,...
    inicia com os termos 0 e 1 e tem a propriedade de que cada termo sucessivo �
    a soma dos dois termos precedentes.
    (a) Escreva uma fun��o  n�o recursiva fibonacci( n) que calcula o n�simo n�mero de Fibonacci.
    (b) Determine o maior n�mero de Fibonacci int que pode ser  impresso no seu
    sistema. Modifique o programa da parte (a) para utilizar double em vez de int
    a fim de calcular e retornar n�meros de  Fibonacci e utilize esse programa
    modificado para repetir a parte (b).
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 246). Edi��o do Kindle.
    Autor: Pedro Filho, 23/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed,     setprecision

// prot�tipo
int fibonacci( int n );
double fibonacciDouble( double num );

using namespace std;

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cabe�alho
    cout << "\tSEQU�NCIA DE FIBONACCI" << endl;

    // chama a fun��o fibonacci para inteiros
    fibonacci( 1000000000  );

    // chama a fun��o fibonacci para double ( suporta n�meros maiores ).
    fibonacciDouble( 1000000000000000 );

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a fun��o fibonacci inteiro
int fibonacci( int n )
{
    // vari�veis
    int a = 0;
    int b = 1;
    int c = 0;

    // imprima
    cout << "Integer => 0 1 ";

    // enquanto b menor que n fa�a
    while( b < n )
    {
        // c recebe o valor da soma de a mais b
        c = a + b;
        // imprime o valor de c
        cout << c << " ";
            // a recebe b
            a = b;
            // e b recebe c; que fica livre para receber a soma de a mais b
            b = c;

    } // fim while com inteiros
} // fim da fun��o fibonacci de inteiros

// cria a fun��o fibonacci
double fibonacciDouble( double num )
{

    // vari�veis
    double n1 = 0.0;
    double n2 = 1.0;
    double n3 = 0.0;

    cout << "\n\nDouble => 0 1 ";

    while( n2 < num )
    {
        n3 = n1 + n2;
        cout << n3 << " ";
            n1 = n2;
            n2 = n3;
    } // fim while com double

} // fim fibonacci double
