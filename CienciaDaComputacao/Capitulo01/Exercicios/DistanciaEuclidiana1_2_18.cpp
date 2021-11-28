/*
    1.2.18 Escreva um programa que receba dois argumentos inteiros de linha de comando xey
    e imprima a dist�ncia euclidiana do ponto (x, y) � origem (0, 0).
    Sedgewick, Robert; Wayne, Kevin. Computer Science (p. 46).
    Pearson Education. Edi��o do Kindle.
    @Pedro 16/11/2021
*/

#include <iostream>
#include <locale>
#include <cmath>
#include <iomanip>
using namespace std;

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // vari�veis
    int x1, x2, y1, y2;

    cout << "\tDIST�NCIA EUCLIDIANS ENTRE  X e Y PONTOS" << endl;

    // entrada de dados
    cout << "Digite os valores de x1 e y1: ";
    cin >> x1 >> y1;
    cout << "Digite os valores de x2 e y2: ";
    cin >> x2 >> y2;

    // configura casas decimais de double
    cout << setprecision( 6 ) << endl;

    /*
        A Dist�ncia Euclidiana � definida como a soma da raiz quadrada
        da diferen�a entre x e y em suas respectivas dimens�es.
        A f�rmula para calcular a dist�ncia Euclidiana entre dois pontos �:
        sqrt( pow( ( x2 - x1 ), 2 ) + pow( (y2 - y1), 2 ) )
    */
    // calculo
    double distancia = sqrt( pow( (x2 - (x1) ), 2 ) + pow( (y2 - (y1) ), 2 ) );

    // imprime
    cout << "A dist�ncia Euclidiana entre x(" << x1 << ", "
            << y1 << ") e y(" << x2 << ", " << y2 << " ) = " << distancia << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
