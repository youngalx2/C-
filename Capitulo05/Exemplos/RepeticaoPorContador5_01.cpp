/*
    1// Figura 5.1: fig05_01.cpp
    2// Repeti��o controlada por contador.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 142). Edi��o do Kindle.
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
    int contador = 1; // declara e inicializa a var contador

    // enquanto o contador for menor ou igual a 10 fa�a
    while( contador <= 10 )
    {
        // imprima
        cout << contador << " ";
        contador++; // incrementa d contador
    } // fim while

    cout << endl; // pule uma linha

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
