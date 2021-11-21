/*
    1// Figura 6.11: fig06_11.cpp
    2// Simula��o do jogo de dados craps.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 197). Edi��o do Kindle.
*/

// incluir biblioteca
#include <iostream> // padr�o cout,cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed e setprecision
#include <cstdlib> // para srand e rand
#include <ctime> // para time que vai ser usado com srand( time( 0 ) )

using namespace std;

// prot�tipo de fun��o
// diz ao compilador que essa fun��o vai existir
int rollDice();

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // Enumera��o constantes que representam o status do jogo
    enum Status { CONTINUE, WON, LOST };

    // vari�vel
    int myPoint; // pontos que ser�o usados quando vencer ou perder na primeira jogada
    Status gameStatus; // pode conter CONTINUE, WON e LOST

    // torna aleat�rio o gerador de n�meros aleat�rio usando a hora atual
    srand( time( 0 ) );

    // chama a fun��o rollDice e atribui a vari�vel na primeira rolagem dos dados
    int sumOfDice = rollDice();

    // determina o status e apontua��o do jogo (se necess�rio )
    // com base no primeiro lan�amento
    switch( sumOfDice )
    {
        case 7: // ganha se sair na primeira jogada
        case 11: // ganha se sair na primeira jogada
            gameStatus = WON; // voc� venceu
            break; // sai do switch

        case 2: // perde se sair na primeira jogada
        case 3: // perde se sair na primeira jogada
        case 12: // idem
            gameStatus = LOST;
            break;

        default: // n�o ganha nem prede, mas registra a pontua��o
            myPoint = rollDice(); // chama a fun��o rola dados e atribui a vari�vel meus pontos
            gameStatus = CONTINUE;
            // imprime os pontos
            cout << "Meus pontos s�o: " << myPoint << endl;
            break; // opicional, mas necess�rio
    } // fim switch

    //enquanto o jogo n�o estiver completo
    while ( gameStatus == CONTINUE ) // voc� nem venceu, nem perdeu
    {
        sumOfDice = rollDice(); // chama a fun��o e atribui a vari�vel

        // determina o status do jogo
        if( sumOfDice == myPoint )
        {
            gameStatus = WON; // venceu
        } // fim if
        // se n�o
        else
        {
            // se o status do jogo  for igual a sete
            if( sumOfDice == 7 )
                // voc� perdeu
                gameStatus = LOST; // perdeu
        } // fim else
    } // fim while

    // verifica a reposta de status do jogo
    if( gameStatus == WON )
    {
        cout << "Voc� venceu!" << endl;
    } // fim if
    else
    {
        cout << "Voc� perdeu!" << endl;
    } // fim else

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a fun��o rola dados
int rollDice()
{
    // dado 1 recebe valor aleat�rio
    int dado1 = 1 + rand() % 6;

    // dado 2 recebe um valor aleat�rio
    int dado2 = 1 + rand() % 6;

    // soma os valores dos dados
    int sum = dado1 + dado2;

    // imprime
    cout << "Jogador rolou " << dado1 << " + " << dado2 << " = " << sum << endl;

    // retorna o valor da soma
    return sum;

} // fim fun��o rola dados
