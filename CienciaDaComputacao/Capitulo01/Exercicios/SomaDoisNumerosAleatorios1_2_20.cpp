/*
    1.2.20 Escreva um programa que imprima a soma de dois inteiros
    aleat�rios entre 1 e 6 (como voc� pode obter ao rolar os dados).
    Sedgewick, Robert; Wayne, Kevin. Ci�ncia da computa��o (p. 46).
    Pearson Education. Edi��o do Kindle.
    Feito por: Pedro, 16/11/2021
*/

#include <iostream>
#include <locale>
#include <cstdlib>
#include <ctime>

using namespace std;

// fun��o principal
int main()
{
    setlocale( LC_ALL, "portuguese"); // localiza��o geogr�fica

    system("cls"); // limpa a tela

    srand( time( 0 ) ); // gera semante aleat�ria

    // vari�vel
    int alea1 = 1 + rand() % 6; // gera n�mero aleat�rio entre 1 e 6 inclusive
    int alea2 = 1 + rand() % 6; // gera n�mero aleat�rio entre 1 e 6 inclusive

    cout << "SOMA DE DOIS N�MEROS ALEAT�RIOS" << endl;

    // imprime
    cout << "\t" << alea1 << " + " << alea2
            << " = " << alea1 + alea2 << endl;

    cout << endl; // pula uma linha

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
