/*
    6.38 (Jogo �Adivinhe o n�mero�) Escreva um programa que joga �adivinhe o n�mero�
    como mostrado a seguir: Seu programa escolhe o n�mero  a ser adivinhado selecionando
    um inteiro aleatoriamente no intervalo de 1 a 1.000. O programa ent�o exibe o seguinte:
    Tenho um n�mero entre 1 e 1000. Voc� consegue adivinh�-lo?
    Digite sua primeira suposi��o.  O jogador ent�o digita uma primeira suposi��o.
    O programa responde com uma das seguintes frases:
    1. Excelente! Voc� adivinhou o n�mero!
    Quer jogar de novo (s ou n)?
    2. Muito baixo. Tente novamente.
    3. Muito alto. Tente novamente.
    Se a suposi��o do jogador estiver incorreta, o programa deve fazer um loop at�
    o jogador por fim acertar o n�mero. Seu programa deve  continuar dizendo ao jogador
    Muito alto ou Muito baixo para ajudar o jogador a acertar a resposta.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 245). Edi��o do Kindle.
    Autor: Pedro Filho, 20/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision
#include <ctime>

using namespace std;

// prot�tipos
int geraNumeroAleatorio();
int avaliaResposta( int numero, int resposta );

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // vari�veis
    int numero = 1;
    int resposta;
    char simOuNao = ' ';

    // enquanto n�mero diferente de zero
    while( numero != 0 )
    {
        // gerador
        srand( time( NULL ) );

        // entrada de dados
        cout << "Tenho um n�mero entre 1 e 1000" << endl;
        cout << "Voc� consegue advinhar?"
                << "\nDiga sua primeira suposi��o: ";
        cin >> numero;

        // resposta recebe o valor da fun��o gera n�meros aleat�rios
        resposta = geraNumeroAleatorio();

        // enquanto n�mero diferente de resposta fa�a
        while( numero != resposta )
        {
            // chama afun��o avaliaResposta
            numero = avaliaResposta( numero, resposta );
        } // fim while interno

        // se o n�mero digitado igual a resposta
        if( numero == resposta )
        {
            // imprima
            cout << "Excelente! Voc� adivinhou que eu gerei " << resposta << endl;
        } // fim if

        // pergunta se deseja continuar
        cout << "Deseja continuar s / n: ";
        cin >> simOuNao;

        // se simOuNao igual a n
        if( simOuNao == 'n' || simOuNao == 'N' )
            break; // saia do programa
        else
            system("cls"); // limpa a tela

    } // fim while externo

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// fun��o geraNumeroAleatorio
int geraNumeroAleatorio()
{
    int alea = 1 + rand() % 1000;
    // retorne alea
    return alea;
} // fim fun��o geraNumeroAleatorio

// cria a fun��o avaliaResposta
int avaliaResposta( int numero, int resposta )
{
    if( numero > resposta )
    {
        cout << "Digite um n�mero menor: ";
        cin >> numero;
    } // fim else if
    else if( numero < resposta )
    {
        cout << "Digite um n�mero maior: ";
        cin >> numero;
    } // fim segundo else if

    // retorne o n�mero
    return numero;

} // fim fun��o avaliaResposta
