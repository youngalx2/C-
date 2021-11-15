/*
    5.2 Escreva uma instru��o C++ ou um conjunto de instru��es C++ para realizar
    cada uma das seguintes tarefas:
    a) Somar os inteiros �mpares entre 1 e 99 utilizando uma instru��o for. Assumir
    que as vari�veis de inteiro sum e count foram declaradas.
    b) Imprimir o valor 333.546372 em uma largura de campo de 15 caracteres com
    precis�es de 1, 2 e 3. Imprimir cada n�mero na mesma  linha. Alinhar � esquerda
    cada n�mero em seu campo. O que os tr�s valores imprimem?
    c) Calcular o valor de 2,5 elevado � pot�ncia de 3 utilizando a fun��o pow.
    Imprimir o resultado com uma precis�o de 2 em uma largura  de campo de 10 posi��es.
    O que � impresso?
    d) Imprimir os inteiros de 1 a 20 utilizando um loop while e a vari�vel de contador x.
    Assumir que a vari�vel x foi declarada mas n�o  foi inicializada. Imprimir somente
    5 inteiros por linha. [Dica: Utilizar o c�lculo x% 5. Quando o valor disso for 0,
    imprimir um  caractere de nova linha; caso contr�rio, imprimir um caractere de tabula��o.]
    e) Repetir o Exerc�cio 5.2 (d) utilizando uma instru��o for.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 175). Edi��o do Kindle.
    Autor: Pedro filho, 25/08/2021
*/

// incluir biblioteca
#include <iostream>
#include <locale>
#include <iomanip>
#include <cmath>

using namespace std;

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // vari�veis
    int soma = 0;
    int contar;
    int x;
    float valor = 333.546372;

    //a) Somar os inteiros �mpares entre 1 e 99 utilizando uma instru��o for. Assumir
    //  que as vari�veis de inteiro sum e count foram declaradas.
    cout << "A) " << endl;
    // loop for de a a 99
    for( contar = 1; contar <= 99; contar++ )
    {
        // se contar % 2 diferente de zero
        if( contar % 2 != 0 )
        {
            // soma o valor
            soma += contar;
            // imprime o valor
            cout << setw( 3 ) << contar << " ";

        } // fim if

        // se contar % 10 == 0
        if( contar % 10 == 0 )
            cout << endl; // pula linha

    } // fim for

    // mostra a soma
    cout << "\nsoma = " << soma << endl;

    /*
        b) Imprimir o valor 333.546372 em uma largura de campo de 15 caracteres com
            precis�es de 1, 2 e 3. Imprimir cada n�mero na mesma  linha. Alinhar � esquerda
    */
    cout << "\nB) Valor 333.546372 " << endl;
    cout << setw(15) << left << setprecision( 3 ) << fixed << valor
            << setw( 15 ) << left << setprecision( 2 ) << fixed << valor
            << setw( 15 ) << left << setprecision( 1 ) << fixed << valor << endl;

    /*
        c) Calcular o valor de 2,5 elevado � pot�ncia de 3 utilizando a fun��o pow.
        Imprimir o resultado com uma precis�o de 2 em uma largura  de campo de 10 posi��es.
        O que � impresso?
    */
    cout << setw(10 ) << fixed << setprecision( 2 ) << "\nC) O valor � " << pow( 2.5, 3 ) << endl;

    /*
        d) Imprimir os inteiros de 1 a 20 utilizando um loop while e a vari�vel de contador x.
            Assumir que a vari�vel x foi declarada mas n�o  foi inicializada. Imprimir somente
            5 inteiros por linha. [Dica: Utilizar o c�lculo x% 5. Quando o valor disso for 0,
            imprimir um  caractere de nova linha; caso contr�rio, imprimir um caractere de tabula��o.]
    */

    cout << "\nD) Tabela 5 x 5" << endl;
    x = 1; // contador x recebe 1
    // enquanto contador x menor ou igual a 20 fa�a
    while( x <= 20 )
    {
        // imprima x
        cout << setw( 3 ) << right << x << " ";

        // se x multiplo de 5
        if ( x % 5 == 0 )
            cout << endl; // pula linha

        // incrementa x
        x++;

    } // fim while

    /*
        e) Repetir o Exerc�cio 5.2 (d) utilizando uma instru��o for.
    */

    // cabe�alho
    cout << "\nE) " << endl;

    // loop for de 1 at� 20
    for( contar = 1; contar <= 20; contar++ )
    {
        // imprime
        cout << setw( 3 ) << contar << " ";

        // se contar % 5 == 0
        if( contar % 5 == 0 )
        {
            // pula uma linha
            cout << endl;
        } // fim if

    } // fim for

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
