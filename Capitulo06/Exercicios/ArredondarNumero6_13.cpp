/*
    6.13 Uma aplica��o da fun��o floor � arredondar um valor para o inteiro mais
    pr�ximo. A instru��o  y = floor( x + .5);  arredonda o n�mero x para o inteiro
    mais pr�ximo e atribui o resultado a y. Escreva um programa que l� v�rios
    n�meros e utiliza a  instru��o anterior para arredondar cada um desses n�meros
    para o inteiro mais pr�ximo. Para cada n�mero processado, imprima ambos
    os n�meros, o original e o arredondado.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 242). Edi��o do Kindle.
    Autor: Pedro filho, 12/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision
#include <cmath> // para floor ( arredondar o n�mero )
#include <ctime>

using namespace std;

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // vari�veis
    float x;
    int y;

    // configura o n�mero para 2 casas decimais
    cout << fixed << setprecision( 2 ) << endl;

    // gerador
    srand( time( NULL) );

    // cabe�alho
    cout << "ARREDONDANDO N�MEROS" << endl;

    // loop para gera valor aleat�rio
    for( int i = 1; i <= 20; i++ )
    {
        x = ( 1 + rand() % 50 ) / 3.14159; // gera n�mero aleat�rio

        y = floor( x + .5 ); // arredonda o n�mero x

        // mostra o resultado
        cout << "O valor arredondado de " << x << " � " << y << endl;

    } // fim for

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
