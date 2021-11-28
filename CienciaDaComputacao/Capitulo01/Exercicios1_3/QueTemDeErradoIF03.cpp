/*
    1.3.3 O que h� de errado (se houver) com cada uma das seguintes afirma��es?
    a. if (a> b) ent�o c = 0;
    b. se a> b {c = 0; }
    c. if (a> b) c = 0;
    d. if (a> b) c = 0
    sen�o b = 0;
    Sedgewick, Robert; Wayne, Kevin. Ci�ncia da Computa��o (p. 81). Pearson Education. Edi��o do Kindle.
    Feito por:
*/

#include <iostream>
#include <locale>

using namespace std;

// fun��o principal
int main()
{
    setlocale( LC_ALL, "portuguese"); // localiza��o geogr�fica

    system("cls"); // limpa a tela

    // vari�veis
    int a, b, c;

    // O que tem de errado? if (a > b) ent�o c = 0;
    // Erro: em C++ n�o existe a palavra ent�o.
    // correto:
    // se a maior que b
    if ( a > b ) // se verdade
        c = 0; // a vari�vel c recebe o valor zero

    // O que tem de errado? b. se a> b {c = 0; }
    // Erro: depois de se(if) coloca�se par�ntese e a express�o dentro do par�ntese
    // correto:
    if( a > b ) { c = 0; }

/*    c. if (a> b) c = 0;
    d. if (a> b) c = 0
    sen�o b = 0;
    */
    cout << endl; // pula uma linha

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
