/*
    1// Figura 6.18: fig06_18.cpp
    2// Utilizando uma fun��o inline para calcular o volume de um cubo.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 209). Edi��o do Kindle.
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// cria a fun��o inline cubo
inline int cubo( int num )
{
    return num * num * num;
} // fim cubo

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // vari�vel
    int x = 0;
    int resposta;

    // entrada de dados
    cout << "Informe um n�mero: ";
    cin >> x; // aguarda entrada do usu�rio

    // chama a fun��o cubo e atribui o valor a resposta
    resposta = cubo( x );

    // imprime o resultado
    cout << "O cubo de " << x << " � " << resposta << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
