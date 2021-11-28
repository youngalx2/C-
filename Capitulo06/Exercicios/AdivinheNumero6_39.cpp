/*
    6.39 Modifique o programa do Exerc�cio 6.38 para contar o n�mero de suposi��es
    que o jogador faz. Se o n�mero for 10 ou menor, imprima  �Voc� sabe o segredo
    ou teve sorte!�. Se o jogador adivinhar o n�mero em 10 tentativas, ent�o imprima
    �Ahah! Voc� sabe  o segredo!�. Se o jogador fizer mais de 10 suposi��es, imprima
    �Voc� deveria ser capaz de fazer melhor!�. Por que n�o  deve haver mais de 10 suposi��es? Bem, a cada �boa suposi��o� o jogador deve ser capaz de eliminar metade dos n�meros. Agora mostre  por que qualquer n�mero de 1 a 1.000 pode ser adivinhado em 10 ou menos tentativas.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 245). Edi��o do Kindle.
    Autor: Pedro Filho, 21/09/2021
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
void tentativasDeAcertos( int tentativas );

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
    int tentativas = 0;
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

        // contar o n�mero de tentativas
        tentativas += 1;

        // resposta recebe o valor da fun��o gera n�meros aleat�rios
        resposta = geraNumeroAleatorio();

        // enquanto n�mero diferente de resposta fa�a
        while( numero != resposta )
        {
            // chama afun��o avaliaResposta
            numero = avaliaResposta( numero, resposta );
            // soma o n�mero de tentativas
            tentativas += 1;
        } // fim while interno

        // se o n�mero digitado igual a resposta
        if( numero == resposta )
        {
            // imprima
            cout << "Excelente! Voc� adivinhou que eu gerei " << resposta
                    << " em " << tentativas << " tentativas." << endl;

            // chama a fun��o tentativas de acerto
            tentativasDeAcertos( tentativas );

        } // fim if

        // pergunta se deseja continuar
        cout << "Deseja continuar s / n: ";
        cin >> simOuNao;

        // se simOuNao igual a n
        if( simOuNao == 'n' || simOuNao == 'N' )
            break; // saia do programa
        else
        {
            system("cls"); // limpa a tela
            tentativas = 0; // reinicializa o n�mero de tentativas
        } // fim else

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
        cout << "N�mero alto. Tente um mais baixo. ";
        cin >> numero;
    } // fim else if
    else if( numero < resposta )
    {
        cout << "N�mero baixo. Tente um mais alto. ";
        cin >> numero;
    } // fim segundo else if

    // retorne o n�mero
    return numero;

} // fim fun��o avaliaResposta

// cria a fun��o tentativasDeAcertos
void tentativasDeAcertos( int tentativas )
{
    // se tentativas menor ou igual a 10
    if( tentativas < 10 )
    {
        // imprima
        cout << "Voc� sabe o segredo ou teve sorte!" << endl;
    } // fim if
    // se n�o
    else if( tentativas == 10 )
    {
        // imprima
        cout << "Ahah! Voc� sabe o segredo!" << endl;
    } // fim else if
    // se n�o
    else if( tentativas > 10 )
        // imprima
        cout << "Voc� deveria ser capaz de fazer bem melhor!" << endl;

} // fim fun��o tentativasDeAcertos
