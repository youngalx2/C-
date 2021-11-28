/*
    6.37 Sistemas mais sofisticados de instru��o auxiliada por computador monitoram
    o desempenho do aluno durante um per�odo de tempo.  A decis�o de iniciar um
    novo t�pico � freq�entemente baseada no sucesso do aluno com t�picos anteriores.
    Modifique o programa do  Exerc�cio 6.36 para contar o n�mero de respostas
    corretas e incorretas digitadas pelo aluno. Depois que o aluno digitar 10 respostas,
    seu  programa deve calcular a porcentagem de respostas corretas. Se a porcentagem
    for menor que 75%, seu programa deve imprimir
    �Pe�a  ao seu professor uma ajuda extra� e terminar.
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
int geraUmAleatorio(); // n�meros aleat�rio entre 1 e 10
void entrarComDados();
void mensagemParaAcerto(); // para respostas certas
void mensagemParaErros(); // para respostas erradas
void acertosErros( int jogadas, int acertos, int erros ); // mostra o resumo

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    //gerador
    srand( time( NULL ) );

    // cabe�alho
    cout << "APRENDENDO TABUADA" << endl;

    // Chama a fun��o entrar com dados
    entrarComDados();

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a fun��o primeiroAleatorio
int geraUmAleatorio()
{
    // vari�vel recebe valor aleat�rio
    int alea = 1 + rand() % 10;
    // retorne o valor
    return alea;

} // fim fun��o

// entrada de dados
void entrarComDados()
{
    // vari�vel
    int resposta = 0, produto = 1;
    int contaAcertos = 0;
    int contaErros = 0;
    int contaJogadas = 0;

    // enquanto resposta diferente de -1
    while( resposta != -1 )
    {
        // vari�veis
        int num1 = geraUmAleatorio();
        int num2 = geraUmAleatorio();
        int resposta = 0, produto = 1;

        // enquanto resposta diferente de produto
        while( resposta != produto )
        {
            // entrada de dados
            cout << "Quanto � (-1 = sair): " <<  num1 << " x " << num2 << " = ";
            cin >> resposta;

            // conta as jogadas
            contaJogadas += 1;

            // se resposta igual ao produto
            if( resposta == -1 )
            {
                --contaJogadas;
                break; // fim do programa
            } // fim if

            // calcular os valores
            produto = num1 * num2;

            // se resposta igual ao produto
            if( resposta == produto ) // se
            {
                // chama a fun��o mensagem para acertos
                mensagemParaAcerto();
                // conta os acertos
                ++contaAcertos;
            } // fim if
            else // se n�o
            {
                // chama a fun��o mensagem para erros
                mensagemParaErros();
                // conta os erros
                ++contaErros;
            } // fim else

            // se contaJogadas igual a 10
            if( contaJogadas >= 10 )
                break; // sair do programa

        } // fim while interno

        // se resposta igual ao produto
        if( resposta == -1 )
        {
            break; // fim do programa
        } // fim if

        // se contaJogadas igual a 10
        if( contaJogadas >= 10 )
            break; // sair do programa
    } // fim primeiro while

    // chama afun��o acertos e erros
    acertosErros( contaJogadas, contaAcertos, contaErros );

} // fim fun��o entrar com dados

// cria a fun��o mensagemParaAcerto
void mensagemParaAcerto()
{
    // vari�veis
    int alea = 1 + rand() % 5;

    // switch
    switch( alea )
    {
        case 1:
            cout << "Muito bom!" << endl;
            break;
        case 2:
            cout << "Excelente!" << endl;
            break;
        case 3:
            cout << "Bom trabalho!" << endl;
            break;
        case 4:
            cout << "Continue assim!" << endl;
            break;
    } // fim switch
} // fim fun��o mensagem boa

// cria a fun��o mensagemParaErros
void mensagemParaErros()
{
    // vari�veis
    int alea = 1 + rand() % 5;

    // switch
    switch( alea )
    {
        case 1:
            cout << "N�o.   Tente novamente." << endl;
            break;
        case 2:
            cout << "Errado.    Tente mais uma vez." << endl;
            break;
        case 3:
            cout << "N�o desista!" << endl;
            break;
        case 4:
            cout << "N�o.   Continue tentando." << endl;
            break;
    } // fim switch
} // fim fun��o mensagem errada

// cria a fun��o acertosErros
void acertosErros( int jogadas, int acertos, int erros )
{
    // mostra resultado
    cout << "\nVoc� jogou " << jogadas << " vezes." << endl;
    cout << "Acertou " << acertos << "\nErrou " << erros << endl;

    // se acertos menor ou igual a 8
    if( acertos >= 8 )
        cout << "Parab�ns! voc� est� pronto para o pr�ximo n�vel."  << endl;
    else
        cout << "Voc� acertou menos de 80 % das quest�es."
                << "\nPe�a ajuda a seu professor." << endl;
} // fim fun��o mostra resultado
