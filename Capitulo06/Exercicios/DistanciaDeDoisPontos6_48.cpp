/*
    6.48 Escreva uma fun��o distance que calcula a dist�ncia entre dois pontos
    (x1, y1) e (x2, y2). Todos os n�meros e valores de retorno devem  ser do tipo double.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 247). Edi��o do Kindle.
    Autor: Pedro Filho, 01/10/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision
#include <cmath>

using namespace std;

// prot�tipo
double distanciaDoisPontos( double x1, double y1, double x2, double y2 );

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // vari�veis
    double x1, x2, y1, y2;
    double resultado = 0;

    // configura��o
    cout << fixed << setprecision( 2 ) << endl;

    // entrada de dados
    cout << "DIST�NCIA ENTRE DOIS PONTOS" << endl;
    cout << "Digite os valores de A = ( x1, y1 ) e B = ( x2, y2 ): ";
    cin >> x1 >> y1 >> x2 >> y2;

    // resultado chama a fun��o distanciaDoisPontos e recebe seu valor
    resultado = distanciaDoisPontos( x1, y1, x2, y2 );

    // imprime o resultado
    cout << "A dist�ncia entre A = ( " << x1 << ", " << y1<< " ) B = ( "
            << x2 << ", " << y2 << " ) � de " << resultado << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a fun��o distanciaDoisPontos
double distanciaDoisPontos( double x1, double y1, double x2, double y2 )
{
    // retorne a raiz quadrada das pot�ncias
    return sqrt( pow( (x2 - x1), 2 ) + pow( ( y2 - y1 ), 2 ) );

} // fim fun��o distanciaDoisPontos
