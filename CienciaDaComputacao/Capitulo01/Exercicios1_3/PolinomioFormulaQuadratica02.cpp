/*
    1.3.2 Escreva uma vers�o mais geral e mais robusta do Quadr�tico
    (PROGRAMA 1.2.3) que imprima as ra�zes do polin�mio ax2 + bx + c,
    imprima uma mensagem apropriada se o discriminante for negativo e
    se comporte adequadamente (evitando a divis�o por zero ) se a for zero.
    Sedgewick, Robert; Wayne, Kevin. Ci�ncia da Computa��o (p. 81).
    Pearson Education. Edi��o do Kindle.
    Feito por: Pedro Filho, 18/11/2021
*/

#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

// fun��o principal
int main()
{
    setlocale( LC_ALL, "portuguese"); // localiza��o geogr�fica

    system("cls"); // limpa a tela

    // vari�veis
    double a = 0.0;
    double b =0.0;
    double c = 0.0;

    // entrada de dados
    cout << "Digite 2 valores: ";
    cin >> a >> c;

    // calcular
    double discriminante = a * a  - 4.0 * c;
    b = sqrt( discriminante );

    // mostra resultado
    cout << "( -a + b ) / 2.0 = " << ( -a + b ) / 2.0 << endl;
    cout << "( -a - b ) / 2.0 = " << ( -a - b ) / 2.0 << endl;

    cout << endl; // pula uma linha

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
