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

using namespace std;

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");


    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
