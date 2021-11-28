/*
    6.23 Modifique a fun��o criada no Exerc�cio 6.22 para formar o quadrado
    a partir de qualquer que seja o caractere contido no par�metro de  caractere
    fillCharacter. Portanto, se side for 5 e fillCharacter for #, ent�o essa fun��o
    deve imprimir o seguinte:
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 243). Edi��o do Kindle.
    Autor: Pedro Filho, 15/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// prot�tipo de fun��o
void quadradoDeTipos( int tamanho, char tipo);

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // vari�veis
    int resposta = 0;
    int tamanho;
    char tipo;

    // enquanto a resposta for diferente de -1 fa�a
    while( resposta != -1 )
    {
        // entrada de dados
        cout << "Informe o tamanho do quatrado: ";
        cin >> tamanho;
        cout << "Informe o tipo de caractere: ";
        cin >> tipo;

        // chama a fun��o quadrado
        quadradoDeTipos( tamanho, tipo );

        // entrada da resposta
        cout << "Deseja continuar (-1 = sair): ";
        cin >> resposta;
    } // fim enquanto

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a fun��o quadradoDeTipos
void quadradoDeTipos( int tamanho, char tipo )
{
    // loop para linha
    for( int linha = 1; linha <= tamanho; linha++ )
    {
        // loop para a coluna
        for( int coluna = 1; coluna <= tamanho; coluna++ )
        {
            // imprime o tipo
            cout << tipo << ' ';
        } // fim for coluna

        // pula linha
        cout << endl;

    } // fim for linha
} // fim fun��o
