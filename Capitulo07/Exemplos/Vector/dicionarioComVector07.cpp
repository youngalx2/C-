/*
    cria um dicion�rio simples, evita nomes repetidos
    Autor: 24/10/2021
*/

#include <iostream>
#include <locale>
#include <vector>
#include <algorithm>

using namespace std;

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    vector<string> palavras; // cria o vetor palavras

    for (string temp; cin >> temp;) // ler palavras separadas por espa�os em branco
        palavras.push_back (temp); // coloca palavras no vetor

    cout << "N�mero de palavras:" << palavras.size () << endl;

    sort( palavras.begin(), palavras.end() ); // classifica as palavras

    for(int i = 0; i < palavras.size (); ++ i)
          if (i == 0 || palavras [ i ] != palavras [ i - 1 ]  ) // esta � uma palavra nova?
            cout << palavras [i] << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
