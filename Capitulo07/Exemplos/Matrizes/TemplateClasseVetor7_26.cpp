/*
    1// Figura 7.26: fig07_26.cpp
    2// Demonstrando o template de classe vector da C++ Standard Library.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 289). Edi��o do Kindle.
    Autor: 10/10/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision
#include <vector> // para vector

using namespace std;

// prot�tipos
void outputVetor( const vector< int > & ); // exibe o vetor
void inputVetor( vector< int > & ); // introduz valores ao vetor

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // cria os vetores integers1 e integers2
    vector< int > integers1( 7 ); // vector< int > integers1 com 7 elementos
    vector< int > integers2( 10 ); // vector< int > integers2 com 10 elementos

    // imprime o tamanho e o conte�do do vetor integers1
    cout << "O tamanho do vetor integers1 � de " << integers1.size()
            << " Antes da inicializa��o." << endl;

    // chama a fun��o outputVetor
    outputVetor( integers1 );

    // imprime o tamanho e o conte�do do vetor integers2
    cout << "O tamanho do vetor integers2 � "<< integers2.size()
            << " Antes da inicializa��o." << endl;

    // chama a fun��o outputVetor
    outputVetor( integers2 );

    // insere valores inteiros em integers1 e 2
    inputVetor( integers1 );
    inputVetor( integers2 );

    // depois de inputVetor
    cout << "\nDepois de inserir valores ao vetor: " << endl;
    cout << "Integers1: " << endl;
    outputVetor( integers1 );
    cout << "\nIntegers2: " << endl;
    outputVetor( integers2 );

    // utiliza o operador de diferen�a ( != ) com objetos vetor
    cout << "\nEvoluc�o integers1 != integers2 " << endl;

    if( integers1 != integers2 )
        cout << "Integers1 � diferente de integers2." << endl;

    // cria o vetor integer3 utilizando integers1 como inicializador;
    // imprime o tamanho e o conte�do
    vector< int > integers3( integers1 );

    // imprime o tamanho e o conte�do do vetor integers3
    cout << "O tamanho do vetor integers3 � "<< integers3.size()
            << "Depois da inicializa��o." << endl;

    // chama a fun��o outputVetor
    outputVetor( integers3 );

    // utilizando o operadore de atribui��o (=) sobrecarregando
    cout << "Atribuindo integers2 para integers1:" << endl;

    // integers1 recebe integers2
    integers1 = integers2;

    cout << "integers1:" << endl;
    outputVetor( integers1 );
    cout << "integers2:" << endl;
    outputVetor( integers2 );

    // utiliza o sinal de (==) com os objetos vector
    if( integers1 == integers2 )
        // imprima
        cout << "Evolu��o integers1 � igual a integers2." << endl;

    // utilizando colchetes para criar valor
    cout << "\nintegers1[ 5 ] � " << integers1[ 5 ] << endl;

    // utilizando colchetes para criar valor
    cout << "Atribuindo 1000 para integers1[ 5 ]" << endl;
    integers1[ 5 ] = 1000;

    // imprima
    cout << "\nintegers1:" << endl;
    outputVetor( integers1 );

    // tentativa de utilizar subscrito fora do intervalo
    cout << "\nTentativa de atribuir 1000 para integers1.at( 15 )" << endl;
    integers1.at( 15 ) = 1000; // Erro, fora do intervalo

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a fun��o outputVetor
void outputVetor(const vector< int > &array )
{
    size_t i; // declara a vari�vel de controle

    // loop para mostrar o vetor
    for( i = 0; i < array.size(); i++ )
    {
        // se multiplo de 4
        if( (i + 1) % 4 == 0 )

        // pule uma linha
        cout << endl;

        // imprima
        cout << setw( 12 ) << array[ i ];

    } // fim for

    // se diferente i modulo 4 diferente de zero
    if( i % 4 != 0 )
        // pule uma linha
        cout << endl;

} // fi fun��o

// cria a fun��o inputVetor
void inputVetor( vector< int > &array )
{
    // imprima
    cout << "Entre com 17 valores para os vetores: " << endl;

    for( size_t i = 0; i < array.size(); i++ )
        cin >> array[ i ];
} // fim da fun��o inputVetor
