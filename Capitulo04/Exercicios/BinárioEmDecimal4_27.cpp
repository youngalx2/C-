/*
    4.27 Insira um inteiro contendo somente 0s e 1s (isto �, um inteiro �bin�rio�)
    e imprima seu equivalente decimal. Utilize os operadores de m�dulo  e divis�o
    para pegar os d�gitos do n�mero �bin�rio� um de cada vez da direita para a esquerda.
    De modo muito semelhante ao sistema de  n�meros decimais, em que o d�gito mais
    � direita tem um valor posicional de 1, o pr�ximo d�gito � esquerda tem um valor
    posicional de  10, depois 100, depois 1.000 e assim por diante, no sistema de n�meros
    bin�rios o d�gito mais � direita tem um valor posicional de 1, o  pr�ximo d�gito � esquerda
    tem um valor posicional de 2, depois 4, depois 8 e assim por diante.
    Assim, o n�mero decimal 234 pode ser  interpretado como 2 * 100 + 3 * 10 + 4 * 1.
    O equivalente decimal do bin�rio 1101 � 1 * 1 + 0 * 2 + 1 * 4 + 1 * 8 ou 1 + 0 + 4 + 8, ou
    13. [Nota: Recomendamos que leitor n�o familiarizado com n�meros bin�rios consulte
    o Ap�ndice D.]
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 138). Edi��o do Kindle.
    Autor: Pedro Filho, 19/08/2021
*/

// incluir biblioteca
#include <iostream>
#include <locale>
#include <math.h>

using namespace std;

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cria vari�veis
    int n1, n2, n3, n4, n5, n6, n7, n8, n9; // separa os digitos do n�mero informado
    int numero; // recebe n�mero informado pelo usu�rio
    int decimal; // mostra o n�mero em decimal
    int sentinela = 0;

    // enquanto sentinela diferente de -1 fa�a
    while( sentinela != -1)
    {
        // limpa a tela
        system("cls" );

        // cabe�alho
        cout << "BIN�RIO PARA DECIMAL" << endl;

        // entrada de dados
        cout << "Digite um n�mero bin�rio at� 9 digitos: ";
        cin >> numero; // aguarda entrada do usu�rio

        // separando digitos
        n1 = numero / 100000000 % 100000000; // recebe o primeiro digito
        n2 = numero % 100000000 / 10000000; // recebe o segundo digito
        n3 = numero % 10000000 / 1000000; // recebe o terceiro
        n4 = numero % 1000000 / 100000; // recebe o quarto
        n5 = numero % 100000 / 10000; // recebe o quinto
        n6 = numero % 10000 / 1000;
        n7 = numero % 1000 / 100;
        n8 = numero % 100 / 10;
        n9 = numero % 10 / 1;

        // condi��es para achar o n�mero decimal
        if( n9 == 1 )
            decimal += pow(2,0);

        if( n8 == 1 )
            decimal += pow(2,1);

        if( n7 == 1 )
            decimal += pow(2,2);

        if( n6 == 1 )
            decimal += pow(2,3);

        if( n5 == 1 )
            decimal += pow(2,4);

        if( n4 == 1 )
            decimal += pow( 2,5 );

        if( n3 == 1 )
            decimal += pow( 2, 6 );

        if( n2 == 1 )
            decimal += pow( 2, 7 );

        if( n1 == 1 )
            decimal += pow( 2, 8 );

        // mostra resultado
        cout << "O n�mero bin�rio: " << numero <<  "\nEquivale ao n�mero decimal:  " << decimal << endl;

        // pergunta se quer sair
        cout << "Digite qualquer tecla para continuar (-1 para sair)? ";
        cin >> sentinela; // aguarda entrada pelo usu�rio
        decimal = 0;
        numero = 0;

    } // fim while

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
