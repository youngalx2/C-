/*
    1.2.22 Escreva um programa que receba tr�s argumentos duplos de
    linha de comando x0, v0 e t e imprima o valor de x0 + v0t - g t2 / 2,
    onde g � a constante 9,80665. (Observa��o: este valor � o deslocamento
    em metros ap�s t segundos, quando um objeto � lan�ado diretamente da
    posi��o inicial x0 a uma velocidade de v0 metros por segundo.)
    Sedgewick, Robert; Wayne, Kevin. Ci�ncia da computa��o (p. 46).
    Pearson Education. Edi��o do Kindle.
    Feito por: Pedro, 16/11/2021
*/

#include <iostream>
#include <locale>

using namespace std;

// fun��o principal
int main()
{
    setlocale( LC_ALL, "portuguese"); // localiza��o geogr�fica

    system("cls"); // limpa a tela

    const double g = 9.80665;
    double posicaoInicial = 0.0;
    double velocidade = 0.0;
    double tempo = 0.0;
    double deslocamento = 0.0;

    cout << "DESLOCAMENTO EM M/S" << endl;

    // entrada de dados
    cout << "Informe a posi��o inicial: ";
    cin >> posicaoInicial;
    cout << "Informe a velocidade: ";
    cin >> velocidade;
    cout << "Em quanto tempo? ";
    cin >> tempo;

    deslocamento = ( (posicaoInicial + velocidade) * tempo ) - g ;

    cout << "Deslocamento = " << deslocamento << "m/s" << endl;

    cout << endl; // pula uma linha

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
