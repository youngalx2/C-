/*
    6.45 (M�ximo divisor comum recursivo) O m�ximo divisor comum dos inteiros x e y
    � o maior inteiro que � divis�vel por x e y. Escreva uma  fun��o recursiva mdc que
    retorna o m�ximo divisor comum de x e y, definido recursivamente como mostrado a
    seguir: Se y for igual a  0, ent�o mdc( x, y) ser� x; caso contr�rio, mdc( x, y) ser� mdc( y, x% y), onde% � o operador m�dulo. [Nota: Para esse  algoritmo, x deve ser maior que y.]
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 247). Edi��o do Kindle.
    Autor:
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// prot�tipo
int mdcRecursivo( int x, int y );

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // vari�veis
    int x, y;
    int resultado = 0;
    char resposta = 's';

    // enquanto resposta diferente de n
    while( resposta != 'n' )
    {
        // cabe�alho
        cout << "\tM�XIMOMDIVISOR COMUM RECURSIVO" << endl;

        // entrada de dados
        cout << "Informe um valor para x: ";
        cin >> x;
        cout << "Informe um valor para y diferente de 0: ";
        cin >> y;

        // chama a fun��o mdcRecursivo
        resultado = mdcRecursivo( x, y );

        // imprime o resultado
        cout << "O mdc entre " << x << " e " << y  << " � " << resultado << endl;

        // pergunta
        cout << "Quer fazer outra pesquisa ( s / n )? ";
        cin >> resposta;
        system("cls") ; // limpa a tela

    } // fim while

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a fun��o mdcRecursivo
int mdcRecursivo( int x, int y )
{
    // se y igual a zero
    if( y == 0 )
        // retorne o valor de x
        return x;
    else // se n�o
    {
        // imprima
        cout << x << " % " << y << " = " << x % y << endl;

        // retorne o valor do mdcRecursivo
        return mdcRecursivo( y, x % y );
    } // fim else

} // fim fun��o
