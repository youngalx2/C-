/*
    valor | argumento
    elipse | toler�ncia de erro
    estimativa | estimativa da raiz quadrada de c
    Este programa pega um n�mero de ponto flutuante positivo c como um
    argumento de linha de comando e calcula a raiz quadrada de c para 15
    casas decimais de precis�o, usando o m�todo de Newton (ver texto).
    Sedgewick, Robert; Wayne, Kevin. Ci�ncia da computa��o (p�g. 66).
    Pearson Education. Edi��o do Kindle.
    14/11/2021
*/

#include <iostream>
#include <locale>
#include <cmath>
using namespace std;

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // vari�vel
    double valor;

    // entrada de dados
    cout << "Entre com o valor: ";
    cin >> valor;

    double elipse = sqrt( 2 );
    double estimativa = valor;

    while( abs( estimativa - valor / estimativa ) > elipse * estimativa )
    {
        estimativa = (valor / estimativa + estimativa ) / 2.0;
    } // fim while

    cout << estimativa << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
