/*
    4.23 (Problema do else oscilante) Mostre a sa�da de cada um dos seguintes
    quando x � 9 e y � 11 e quando x � 11 e y � 9. Observe que o  compilador
    ignora o recuo em um programa C++. O compilador C++ sempre associa um
    else com o if anterior a menos que ele seja instru�do a fazer de modo diferente
    pela coloca��o de chaves {}. � primeira vista, o programador pode n�o estar
    certo de qual if corresponde a qual else, o que � referido como problema do �else
    oscilante� (�dangling-else�). Eliminamos o recuo do c�digo a seguir  para tornar
    o problema mais desafiador. [Dica: Aplique as conven��es de recuo que voc� aprendeu.]
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 137). Edi��o do Kindle.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 136). Edi��o do Kindle.
    Autor:
*/

// incluir biblioteca
#include <iostream>
#include <locale>

using namespace std;

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // vari�vel
    int x = 9;
    int y = 11;

    cout << "A)" << endl;
    if( x < 10 )
    if( y > 11 )
    cout << "*****" << endl;
    else
    cout << "#####" << endl;
    cout << "$$$$$" << endl;

    cout << "B)" << endl;
    if( x < 10 )
    {
    if( y > 10 )
    cout << "*****" << endl;
    }
    else
    {
    cout << "#####" << endl;
    cout << "$$$$$" << endl;
    }

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
