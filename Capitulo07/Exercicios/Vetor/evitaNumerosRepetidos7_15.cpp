/*
    7.15 Utilize um array unidimensional para resolver o seguinte problema.
    Leia 20 n�meros, cada um dos quais est� entre 10 e 100, inclusive.
    � medida que cada n�mero � lido, valide-o e armazene-o no array somente se
    ele n�o for uma duplicata de um n�mero j� lido. Depois  de ler todos os valores,
    exiba somente os valores �nicos que o usu�rio inseriu. Previna-se para o �pior caso�
    em que todos os 20 n�meros  s�o diferentes. Utilize o menor array poss�vel para
    resolver esse problema.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 303). Edi��o do Kindle.
    Autor: Pedro Filho, 24/10/2021
*/

#include <iostream>
#include <locale>
#include <ctime>

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
