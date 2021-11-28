/*
    7.11 (Classifica��o por borbulhamento (bubble sort)) No algoritmo de classifica��o
    por borbulhamento, valores menores gradualmente  sobem para a parte superior
    do array como bolhas de ar subindo na �gua, enquanto as bolhas maiores afundam.
        A classifica��o por  borbulhamento faz v�rias passagens pelo array. Em cada
        passagem, sucessivos pares de elementos s�o comparados. Se um par estiver
        na ordem crescente (ou os valores forem id�nticos), deixamos os valores como
        eles est�o. Se um par estiver na ordem decrescente, seus  valores s�o trocados
        no array. Escreva um programa que classifica um array de 10 inteiros utilizando
        classifica��o por borbulhamento.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 303). Edi��o do Kindle.
    Autor: Pedro Filho, 15/10/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision
#define TAMANHO 10

using namespace std;

// prot�tipos
void bubbleSort( int [], int ); // organizador do vetor
void mostrarValores(const int [], int ); // mostra os valores do vetor

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cria o vetor
    int numeros[ TAMANHO ] = { 9, 5, 7, 1, 4, 3, 6, 8, 0, 2 };

    cout << "Vetor original: "; // in�cio
    // loop para mostrar o vetor original
    for( int i = 0; i < TAMANHO; i++ )
        cout << numeros[ i ] << " "; // imprime o vetor
    cout << endl; // pula linha

    // organiza o vetor
    bubbleSort( numeros, TAMANHO );
    // chama a fun��o mostrar valores
    mostrarValores( numeros, TAMANHO );

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a fun��o bubbleSort
void bubbleSort( int vetor[], int tamanho )
{
    // cria vari�vel
    int auxiliar = 0;

    // loop para organizar vetor em ordem crescente ou
    // decrescente ( basta inverter sinal de > para < )
    for( int maior = 0; maior < tamanho; maior++ )
    {
        for( int menor = 0; menor < tamanho; menor++ )
        {
            // se o valor do vetor menor for maior que o valor vetor maior
            if( vetor[ menor ] > vetor[ maior ] )
            {
                cout << "\nIN�CIO" << endl;
                cout << "vetor[ maior ] " << vetor[ maior ] << " era o menor valor " << endl;
                cout << "auxiliar = " << auxiliar << " recebe vetor[ maior ] = " << vetor[ maior ] << endl;
                // auxiliar recebe o valor do vetor maior
                auxiliar = vetor[ maior ];

                cout << "vetor[ maior ] = " << vetor[ maior ] << " recebe vetor[ menor ] = " << vetor[ menor ] << endl;
                // vetor maior recebe o valor do vetor menor
                vetor[ maior ] = vetor[ menor ];

                cout << "vetor[ menor ] = " << vetor[ menor ] << " recebe auxiliar = " << auxiliar << endl;
                // vetor menor recebe o valor do auxiliar
                vetor[ menor ] = auxiliar;
                cout << "vetor[ menor ] " << vetor[ menor ] << " � o menor valor agora." << endl;
                cout << "FIM" << endl;

            } // fim if
        } // fim for interno
    } // fim for externo
} // fim fun��o bubbleSort

// cria vetor mostrarValores
void mostrarValores( const int vetor[], int tamanho )
{
    // loop para mostra os valores do vetor
    for( int valor = 0; valor < tamanho; valor++ )
    {
        cout << vetor[ valor ] << " ";
    } // fim for valor
} // fim fun��o mostrarValores
