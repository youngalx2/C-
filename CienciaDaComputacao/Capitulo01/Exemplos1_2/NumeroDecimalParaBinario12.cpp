/*
    Programa 1.3.7 Convers�o para bin�rio

    n | inteiro para converter
    poder | pot�ncia atual de 2
    Este programa pega um inteiro positivo n como um argumento de linha
    de comando e imprime a representa��o bin�ria de n, lan�ando fora pot�ncias
    de 2 em ordem decrescente .
    Sedgewick, Robert; Wayne, Kevin. Ci�ncia da computa��o (p. 69).
    Pearson Education. Edi��o do Kindle.
    14/11/2021
*/

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

    // Imprime a representa��o bin�ria de n.
    int num;
    int potencia = 1;

    // entrada de dados
    cout << "Informe um n�mero inteiro para ver seu bin�rio: ";
    cin >> num;

    while(potencia <= num / 2)
    {
        potencia *= 2;
    } // fim while

    // Agora, a pot�ncia � a maior pot�ncia de 2 <= n.
    while(potencia > 0)
    {
        // Elimine pot�ncias de 2 em ordem decrescente.
        if (num < potencia)
        {
            cout << 0;
        }
        else
        {
            cout << 1;
            num -= potencia;
        } // fim else

            potencia /= 2;

    } // fim while

    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
