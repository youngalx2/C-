/*
    6.4 Forne�a o cabe�alho de fun��o para cada uma das seguintes fun��es:
    a) A fun��o hypotenuse, que aceita dois argumentos de ponto flutuante com
    dupla precis�o side1 e side2 e retorna um resultado de  ponto flutuante com dupla precis�o.
    b) A fun��o smallest, que aceita tr�s inteiros, x, y e z e retorna um inteiro.
    c) A fun��o instructions, que n�o recebe argumentos e n�o retorna um valor.
    [Nota: Essas fun��es s�o comumente utilizadas para  exibir instru��es ao usu�rio.]
    d) A fun��o intToDouble, que aceita um argumento de inteiro, number, e retorna
    um resultado de ponto flutuante com dupla  precis�o.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 238). Edi��o do Kindle.
    Autor: Pedro Filho, 09/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// CABE�ALHO de fun��o - exibe os nomes das vari�veis
double hypotenuse( double side1, double side2 ); // a)
int smallest( int x, int y, int z ); // b)
void instructions( void ); // ou void instructions() => c)
double inToDouble( double numero ); // d)

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
