/*
    1// Figura 7.14: fig07_14.cpp
    2// Passando arrays e elementos de array individuais a fun��es.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 268). Edi��o do Kindle.
    Autor: 04/10/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// prot�tipos
void modificaArray( int [], int );
void modificaElemento( int );

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cria constante
    const int tamanho = 5;

    // cria array
    int num[ tamanho ] = { 0, 1, 2, 3, 4 };

    cout << "Efeitos da passagem do array por refer�ncia: "
            << "\n\nOs valores originais do array s�o: ";

    // loop para mostrar os valores do array
    for( int i  = 0; i < tamanho; i++ )
        cout << setw( 3 ) << num[ i ] << "  ";

    // chama as fun��es e passa o nome do array e o tamanho
    modificaArray( num, tamanho );

    cout << "\n\nOs valores modificados do array s�o: ";

    // loop para mostrar os valores do array
    for( int i  = 0; i < tamanho; i++ )
        cout << setw( 3 ) << num[ i ] << "  ";

    cout << "\n\nO valor de num[ 3 ] antes da fun��o modificaElemento � " << num[ 3 ] << endl;

    // chama a fun��o modifica elemento e passa o local onde o elemento se encontra
    modificaElemento( num[ 3 ] );

    cout << "\nO valor de num[ 3 ] depois da fun��o modificaElemento � " << num[ 3 ] << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a fun��o modificaArray
void modificaArray( int nomeArray[], int tamanho )
{
    // loop para modificar os valores do array
    for( int i = 0; i < tamanho; i++ )
        nomeArray[ i ] *= 2;
} // fim fun��o modificaArray

// cria a fun��o modificaelementos
void modificaElemento( int elemento )
{
    // imprima
    cout << "\nO valor do elemento na fun��o modificaElemento() � " << ( elemento *= 2 ) << endl;
} // fim fun��o modifica elemento
