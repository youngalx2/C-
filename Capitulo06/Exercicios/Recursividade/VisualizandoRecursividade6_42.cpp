/*
    6.44 (Visualizando a recurs�o) � interessante observar a recurs�o �em a��o�.
    Modifique a fun��o fatorial da Figura 6.29 para imprimir sua  vari�vel local e seu
    par�metro de chamada recursiva. Para cada chamada recursiva, exiba as sa�das
    em uma linha separada e adicione  um n�vel de recuo. Fa�a o melhor que voc�
    puder para tornar a sa�da limpa, interessante e significativa. Seu objetivo aqui
    � projetar e  implementar um formato de sa�da que ajude uma pessoa a entender
    melhor a recurs�o. Voc� pode querer adicionar essas capacidades de  exibi��o
    aos muitos outros exemplos e exerc�cios de recurs�o ao longo de todo este texto.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 247). Edi��o do Kindle.
    Autor: Pedro Filho,27/09/2021
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
    fibonacci( 100  );

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
            cout << a << endl;

            // e b recebe c; que fica livre para receber a soma de a mais b
            b = c;
            cout << setw( 5 ) << b << endl;

    } // fim while com inteiros
} // fim da fun��o fibonacci de inteiros
