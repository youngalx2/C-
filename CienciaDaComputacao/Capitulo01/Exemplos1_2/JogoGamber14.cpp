/*
    aposta | valor da aposta
    objetivo | quanto quer ganhar
    ensaios | tentativas
    apostas | contagem de aposta
    vit�rias | contagem de vit�rias
    dinheiro | dinheiro na m�o

    Este programa usa tr�s argumentos de linha de comando inteiros, estaca,
    objetivo e tentativas. O loop while interno neste programa simula um jogador
    com $ staca que faz uma s�rie de apostas de $ 1, continuando at� quebrar
    ou atingir $ goal. O tempo de execu��o deste programa � proporcional
    �s tentativas vezes o n�mero m�dio de apostas. Por exemplo, o terceiro
    comando abaixo faz com que quase 100 milh�es de n�meros aleat�rios sejam gerados.
    Sedgewick, Robert; Wayne, Kevin. Computer Science (p. 71).
    Pearson Education. Edi��o do Kindle.
    15/11/2021
*/

#include <iostream>
#include <locale>
#include <cstdlib>
#include <ctime>
using namespace std;

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    cout << "PROBABILIDADE DE VIT�RIA NO JOGO" << endl;

    // Execute experimentos de teste que come�am com
    // $ aposta e termina em $ 0 ou $ objetivo.
    int valorDaAposta = 0;
    int quantoQuerGanhar = 0;
    int tentativas = 0;

    // entrada de dados
    cout << "Quanto vai apostar R$ ";
    cin >> valorDaAposta;
    cout << "Qual valor pretende ganhar ( valor > aposta ): R$ ";
    cin >> quantoQuerGanhar;
    cout << "Em quantas tentativas: ";
    cin >> tentativas;

    int aposta = 0;
    int vitoria = 0;

    srand( time( 0 ) ); // semente do aleat�rio

    // loop for repete x tentativas
    for(int t = 0; t < tentativas; t ++)
    {
        int dinheiro = valorDaAposta;

        // enquanto o dinheiro maior que zero e menor que quanto quer ganhar fa�a
        while( dinheiro > 0 && dinheiro < quantoQuerGanhar )
        {
            aposta++; //  voc� aposta R$ 1,00

            // se n�mero sorteado for menor que 0,5
            if( rand() % 2 < 0.5 ) // se verdade
                dinheiro++; // voc� ganha R$ 1,00
            else // se falso
                dinheiro--; // voc� perde R$ 1,00

        } // fim while

        // se o dinheiro igual ao valor que quer ganhar
        if( dinheiro == quantoQuerGanhar ) // se verdade
            vitoria++; // voc� recebe 1 ponto na vit�ria

    } // fim for

    // imprime o resultado
    cout << "\nCom essa quantidade de tentativas voc� tem:\n\t"
            << 100 * vitoria / tentativas << "% de chances vit�rias." << endl;
    cout << "\tEm " << aposta / tentativas << " tentativas " << endl;
    cout << endl; // pula uma  linha

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
