/*
    1.2.23 Escreva um programa que receba dois argumentos inteiros de
    linha de comando me d e imprima verdadeiro se o dia d do m�s m estiver
    entre 23/9 e 21/12, caso contr�rio, falso.
    Feito por: Pedro, 17/11/2021
*/

#include <iostream>
#include <locale>

using namespace std;

// fun��o principal
int main()
{
    setlocale( LC_ALL, "portuguese"); // localiza��o geogr�fica

    system("cls"); // limpa a tela

    // vari�veis
    int dia, mes;

    // entrada de dados
    cout << "Informe um dia do m�s: ";
    cin >> dia;
    cout << "Informe um m�s deste ano: ";
    cin >> mes;

    // verifica a condi��o ( se a data estiver dentre essas op��es )
    // � um dia da esta��o primavera.
    bool mesesDaPrimavera =  (mes == 9 && dia >= 22 && dia <= 30)
                                              || (mes == 10 && dia >= 1 && dia <= 31)
                                              || (mes == 11 && dia >= 1 && dia <= 30)
                                              || (mes == 12 && dia >= 1 && dia <= 21);
    // imprime o resultado
    cout << "� um dia da primavera? ( 1 = verdade / 0 = falso ) " << mesesDaPrimavera << endl;

    cout << endl; // pula uma linha

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
