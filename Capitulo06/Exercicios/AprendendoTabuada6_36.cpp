/*
    6.36 (Instru��o auxiliada por computador) O uso de computadores no ensino
    � referido como instru��o auxiliada por computador (computerassisted instruction � CAI).
    Um problema que se desenvolve em ambientes CAI � a fadiga do aluno. Isso pode ser
    eliminado variando  o di�logo do computador para prender a aten��o do aluno.
    Modifique o programa do Exerc�cio 6.35 de modo que os v�rios coment�rios  sejam
    impressos para cada resposta correta e cada resposta incorreta como segue:
    R�plicas para uma resposta correta:  Muito bom!  Excelente!  Bom trabalho!  Continue assim!
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 245). Edi��o do Kindle.
    Autor: Pedro, 20/09/2021
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

            // se resposta igual ao produto
            if( resposta == -1 )
            {
                break; // fim do programa
            } // fim if

            // calcular os valores
            produto = num1 * num2;

            // se resposta igual ao produto
            if( resposta == produto ) // se verdade
                // chama a fun��o mensagem para acertos
                mensagemParaAcerto();
            else // se n�o
                // chama a fun��o mensagem para erros
                mensagemParaErros();

        } // fim while interno

        // se resposta igual ao produto
        if( resposta == -1 )
        {
            break; // fim do programa
        } // fim if

    } // fim primeiro while
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
