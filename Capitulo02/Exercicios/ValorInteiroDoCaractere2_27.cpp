/*
    2.27 Eis uma pequena antecipa��o do que est� por vir. Neste cap�tulo, voc�
    aprendeu sobre inteiros e o tipo int. O C++ tamb�m pode representar letras
    mai�sculas, min�sculas e uma variedade consider�vel de s�mbolos especiais.
    O C++ utiliza inteiros pequenos internamente  para representar cada caractere
    diferente. O conjunto de caracteres que um computador utiliza e das
    correspondentes representa��es na  forma de inteiro desses caracteres �
    chamado conjunto de caracteres desse computador. Voc� pode imprimir um
    caractere colocando  esse caractere entre aspas simples, como em
    cout << �A�;// imprime um A mai�sculo  Voc� pode imprimir o equivalente inteiro
    de um caractere utilizando static_cast da seguinte maneira:
    cout << static_cast< int >( �A�);// imprime 'A' como um inteiro  Isso � chamado
    de opera��o de coer��o (introduzimos formalmente as coer��es no Cap�tulo 4).
    Quando a instru��o precedente executar,  ela imprimir� o valor 65 (em sistemas
    que utilizam o conjunto de caracteres ASCII). Escreva um programa que imprime
    o n�mero  inteiro equivalente de um caractere digitado no teclado. Teste seu
    programa v�rias vezes utilizando letras mai�sculas, min�sculas, d�gitos  e caracteres
    especiais (como $).
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 54). Edi��o do Kindle.
    Pedro, 04/08/2021
*/
// inclua biblioteca
#include <iostream>

using namespace std;

//Fun��o principal
main()
{
    // Variaveis
    char letra;

    // Entra dados
    cout<<"Digite uma letra, ou um numero, ou um caracter qualquer: ";
    cin>>(letra);

    // Mostra na tela
    cout<<"\nO "<< "["<< letra << "]" <<" tem o valor na tabela ASCII = "<<static_cast< int >(letra)<<endl;
}
