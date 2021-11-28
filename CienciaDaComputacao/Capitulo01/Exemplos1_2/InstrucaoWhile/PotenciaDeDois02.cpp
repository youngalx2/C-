/*
    pot�ncia de 2 com while
    17/11/2021
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
    int num;
    int conta = 0;
    int potencia = 1;

    // entrada de dados
    cout << "Digite um inteiro: ";
    cin >> num;

    cout << "   �ndice    Valor" << endl;

    while( conta <= num )
    {
        // imprime valor
        cout << "\t" << conta << "  -  " << potencia << endl;
        potencia *= 2; // calcula pot�ncia

        conta++; // incrementa 1 a conta

    } // fim while

    cout << endl; // pula uma linha

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
