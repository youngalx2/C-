#include <iostream>
#include "Dados.h"

using namespace std;

// fun��o principal
int main()
{
    // limpa a tela
    system("cls");

    // cria o objeto minhaData da classe dados
    Dados minhaData(24, 9, 1963 ); // atribui 24 para dia, 9 para m�s e 1963 para ano

    // chama a fun��o displayMensagem da classe dados
    // para mostrar a data atribuida no objeto minhaData
    minhaData.displayMensagem();

    // mostra a string
    cout << "Hello world!" << endl;

    // pausa  o sistema
    system("pause");

    return 0; // fim do programa
} // fim de main
