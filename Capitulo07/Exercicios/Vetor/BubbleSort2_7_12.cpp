/*
    7.12 A classifica��o por borbulhamento descrita no Exerc�cio 7.11 � ineficiente
    para arrays grandes. Fa�a as seguintes modifica��es simples  para aprimorar
    desempenho da classifica��o por borbulhamento:
    a) Depois da primeira passagem, garante-se que o maior n�mero est� no elemento
    de n�mero mais alto do array; ap�s a segunda passagem,  os dois n�meros mais
    altos est�o �no lugar�; e assim por diante. Em vez de fazer nove compara��es em
    cada passagem, modifique a  classifica��o por borbulhamento para fazer oito
    compara��es na segunda passagem, sete na terceira passagem e assim por diante.
    b) Os dados no array j� podem estar na ordem adequada ou ordem quase adequada,
    ent�o por que fazer nove passagens se menos seriam  suficientes?
    Modifique a classifica��o para verificar no fim de cada passagem se alguma troca foi feita.
    Se nenhuma troca tiver sido  feita, ent�o os dados j� devem estar na ordem apropriada;
    portanto, o programa deve terminar. Se trocas foram feitas, ent�o pelo menos  mais uma
    passagem � necess�ria.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 303). Edi��o do Kindle.
    Autor: Pedri Filho 23/10/2021
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

    cout << "Vetor ordenado = { ";
    // chama a fun��o mostrar valores
    mostrarValores( numeros, TAMANHO );
    cout << " };" << endl;

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
                // auxiliar recebe o valor do vetor maior
                auxiliar = vetor[ maior ];
                // vetor maior recebe o valor do vetor menor
                vetor[ maior ] = vetor[ menor ];
                // vetor menor recebe o valor do auxiliar
                vetor[ menor ] = auxiliar;
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
