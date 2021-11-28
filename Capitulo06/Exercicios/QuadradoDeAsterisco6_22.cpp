/*
    6.22 Escreva uma fun��o que exibe na margem esquerda da tela um quadrado
    s�lido de asteriscos cujo lado � especificado no par�metro do  tipo inteiro side.
    Por exemplo, se side for 4, a fun��o exibir� o seguinte:
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 243). Edi��o do Kindle.
    Autor: Pedro Filho, 15/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// prot�tipo de fun��o
 void quadrado( int tamanho );

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // vari�vel
    int contador;
    int tamanho;

    // enquanto contador diferente de -1 fa�a
    while( contador != -1)
    {
        // entrada de dados
        cout << "Informe o tamanho do quadrado: ";
        cin >> tamanho;

        // chama a fun��o quadrado
        quadrado( tamanho );

        // perguntar
        cout << "Deseja continuar (-1 = sair): ";
        cin >> contador;
    } // fim enquanto

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a fun��o quadrado
void quadrado( int tamanho )
{
    //loop para linhas
    for( int i = 1; i <= tamanho; i++ )
    {
        // loop para as colunas
        for( int j = 1; j <= tamanho; j++ )
        {
            // imprime os asteriscos
            cout << "* " ;
        } // fim for coluna

        // pula uma linha
        cout << endl;
    } // fim for linha

} // fim fun��o
