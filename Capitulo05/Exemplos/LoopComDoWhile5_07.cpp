/*
    contando at� 10 com do while
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

    // cria vari�vel contador
    int contador = 1;

    // loop do while
    do // fa�a
    {
        // imprime o contador
        cout << contador << " ";

        // incrementa o contador em 1
        contador++;

    // enquanto contador menor ou igual a 10
    } while( contador <= 10 );

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
