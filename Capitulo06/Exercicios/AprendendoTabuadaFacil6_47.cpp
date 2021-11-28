/*
    6.47 Os exerc�cios 6.35�6.37 desenvolveram um programa de instru��o auxiliada
    por computador para ensinar multiplica��o a um aluno da  escola prim�ria.
    Este exerc�cio sugere aprimoramentos nesse programa.

    a) Modifique o programa para permitir que o usu�rio insira uma capacidade de
    n�vel de gradua��o.
    O n�vel 1 significa utilizar somente  n�meros de um �nico
    d�gito nos problemas,
    o n�vel 2 significa utilizar n�meros com dois d�gitos etc.

    b) Modifique o programa para permitir que o usu�rio selecione os tipos de
    problemas aritm�ticos que ele ou ela deseja estudar.
    A op��o
    1  significa problemas de adi��o somente,
    2 significa problemas de subtra��o somente,
    3 significa problemas de multiplica��o somente,
    4 significa problemas de divis�o somente e
    5 significa problemas de todos esses tipos misturados aleatoriamente.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 247). Edi��o do Kindle.
    Autor: Pedro Filho, 27/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision
#include <ctime>

using namespace std;

// prot�tipos
int umNumeroAleatorio(); // gera um n�mero aleat�rio
int doisNumerosAleatorios(); // gera dois n�meros aleat�rios
int tresNumerosAleatorios(); // gera tr�s n�meros aleat�rios

int escolherPerguntaNivel(); // para saber em que n�vel o aluno est�
int escolherOperacaoAritimetica(); // para saber qual das 4 opera��es o aluno quer estudar
int tipoDaOperacao( int tipoOperacao, int num1, int num2 ); // seleciona o tipo da opera��o aritim�tica

char sinalDaOperacao( int operacao ); // sinal da opera��o aritim�tica

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

    // vari�veis
    int resposta = 0;
    int produto = 1;
    int contaAcertos = 0;
    int contaErros = 0;
    int contaJogadas = 0;
    int num1 = 0; // para receber valores aleat�rios
    int num2 = 0; // para receber valores aleatorios
    int nivelDoAluno = 0; // recebe a resposta do n�vel
    int aritimetica = 1; // recebe � fun��o opera��o aritim�tica
    int valorDaAritimetica = 0;
    char sinal = ' '; // para o sinal aritim�tico ( +, -, *, / )

    // cabe�alho
    cout << "\tAPRENDENDO" << endl;

    // enquanto resposta diferente de -1
    while( resposta != -1 )
    {
        //gerador
        srand( time( NULL ) );

        // se conta acertos igual a zero
        if( contaAcertos == 0 )
        {
            // chama a fun��o menu escolher o nivel
            nivelDoAluno = escolherPerguntaNivel();

            // limpa a tela
            system("cls");

            // chama a fun��o menu escolha a opera��o aritim�tica
            aritimetica = escolherOperacaoAritimetica();
        } // fim if conta acertos

        // atribuindo valor �s vari�veis
        resposta = 0;
        produto = 1;

        // enquanto resposta diferente de produto
        while( resposta != aritimetica )
        {
            // switch recebe o valor em que o aluno est�
            switch( nivelDoAluno )
            {
                case 1:
                    num1 = umNumeroAleatorio();
                    num2 = umNumeroAleatorio();
                    break;
                case 2:
                    num1 = doisNumerosAleatorios();
                    num2 = doisNumerosAleatorios();
                    break;
                case 3:
                    num1 = tresNumerosAleatorios();
                    num2 = tresNumerosAleatorios();
                    break;
            } // fim switch

            // sinal recebe o caractere retornado pela fun��o sinalDaOperacao
            sinal = sinalDaOperacao( aritimetica );

            // se aritim�tica igual a 4 e num1 menor que num2
            if( ( aritimetica == 4 ) && ( num1 < num2 ) )
            {
                // entrada da resposta do usu�rio
                cout << "Quanto �( 99999 = sair ): " <<  num2 << " " << sinal << " " << num1 << " = ";
                cin >> resposta;
            } // fim if
            else // se n�o
            {
                // entrada da resposta do usu�rio
                cout << "Quanto �( 99999 = sair ): " <<  num1 << " " << sinal << " " << num2 << " = ";
                cin >> resposta;
            } // fim else

            // conta as jogadas
            contaJogadas += 1;

            // se resposta igual ao produto
            if( resposta == 99999 )
            {
                --contaJogadas;
                break; // fim do programa
            } // fim if

            // chama a fun��o aritim�tica e atribuir o valor ao produto
            produto = tipoDaOperacao( aritimetica, num1, num2 ); // COLOCAR UM SWITCH AQUI;

            // se a resposta do usu�rio for igual ao produto do c�lculo
            if( resposta == produto )
            {
                // chama a fun��o mensagem para acertos
                mensagemParaAcerto();
                // conta os acertos
                ++contaAcertos;

            } // fim if
            else // se n�o
            {
                // repita enquanto a resposta for diferente de produto
                while( resposta != produto )
                {
                    // chama a fun��o mensagem para erros
                    mensagemParaErros();

                    // conta os erros
                    ++contaErros;

                    // se aritim�tica igual a 4 e num1 menor que num2
                    if( ( aritimetica == 4 ) && ( num1 < num2 ) )
                    {
                        // entrada da resposta do usu�rio
                        cout << "Quanto �( 99999 = sair ): " <<  num2 << " " << sinal << " " << num1 << " = ";
                        cin >> resposta;
                    } // fim if
                    else // se n�o
                    {
                        // entrada da resposta do usu�rio
                        cout << "Quanto �( 99999 = sair ): " <<  num1 << " " << sinal << " " << num2 << " = ";
                        cin >> resposta;
                    } // fim else

                    // verifica se a resposta � igual ao produto
                    if( resposta == produto )
                    {
                        ++contaAcertos; // soma 1 a acertos
                        mensagemParaAcerto(); // exibe mensagem pelo acerto
                    } // fim if resposta igual produto

                    else if( resposta == 99999 )
                        // sair do programa
                        break;

                } // fim while resposta diferente do produto

            } // fim else

            // verifica se contaJogadas igual a 10
            if( contaJogadas >= 10 )
                break; // sair do programa

        } // fim while interno

        // se resposta igual a -1 ou o acerto igual a 10
        if( resposta == 99999 || contaJogadas >= 10 )
        {
            break; // fim do programa
        } // fim if

    } // fim primeiro while externo

    // chama afun��o acertos e erros e mostra o resultado
    acertosErros( contaJogadas, contaAcertos, contaErros );

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a fun��o primeiroAleatorio
int umNumeroAleatorio()
{
    // vari�vel recebe valor aleat�rio
    int alea = 1 + rand() % 10;
    // retorne o valor
    return alea;

} // fim fun��o um

// cria a fun��o doisNumerosAleatorio
int doisNumerosAleatorios()
{
    // vari�vel recebe valor aleat�rio
    int alea = 10 + rand() % 90;
    // retorne o valor
    return alea;

} // fim fun��o dois

// cria a fun��o doisNumerosAleatorio
int tresNumerosAleatorios()
{
    // vari�vel recebe valor aleat�rio
    int alea = 100 + rand() % 900;
    // retorne o valor
    return alea;

} // fim fun��o tres

// cria a fun��o para estabelecer o n�vel do jogo
int escolherPerguntaNivel()
{
    // vari�vel
    int nivel = 0;

    // cabe�alho
    cout << "\tTABUADA DE?" << endl;
    cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
    cout << "=-       1 n�mero        -=" << endl;
    cout << "=-       2 n�meros       -=" << endl;
    cout << "=-       3 n�meros       -=" << endl;
    cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
    cout << "Em que n�vel voc� est�? ";
    cin >> nivel;

    // retorna o valor do n�vel do aluno.
    return nivel;

} // fim da fun��o n�vel do jogo

// cria a fun��o para estabelecer o n�vel do jogo
int escolherOperacaoAritimetica()
{
    // vari�vel
    int operacao = 0;

    // cabe�alho
    cout << setw(25) << "OPERA��O ARITIM�TICA" << endl;
    cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
    cout << "=-       1 Somar         -=" << endl;
    cout << "=-       2 Subtrair      -=" << endl;
    cout << "=-       3 Multiplicar   -=" << endl;
    cout << "=-       4 Dividir       -=" << endl;
    cout << "=-       5 Misturados    -=" << endl;
    cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;

    // enquanto opera��o menor que 1 e maior que 5
    cout << "Qual a sua op��o? ";
    cin >> operacao;

    // retorna o valor do aluno.
    return operacao;

} // fim da fun��o n�vel do jogo

// cria a fun��o tipo da opara��o aritim�tica
int tipoDaOperacao( int tipoOperacao, int num1, int num2 )
{
    switch( tipoOperacao )
    {
        case 1:
            return num1 + num2;
            break;
        case 2:
            return num1 - num2;
            break;
        case 3:
            return num1 * num2;
            break;
        case 4:
            // se num1 menor que num2
            if( num1 < num2 )
                // retorne o resultado de num2 dividido por num1
                return num2 / num1;
            return num1 / num2;
            break;
    } // fim switch
} // fim fun��o tipo da opera��o aritim�tica

// cria a fun��o sinal da opera��o aritim�tica
char sinalDaOperacao( int operacao )
{
    // FALTA TRABALHAR ESSA FUN��O
    switch ( operacao ) // recebe o valor da opera��o ( 1=+, 2=-, 3=x, 4=/ )
    {
        case 1:
            return '+'; // retorna o sinal de somar +
            break;
        case 2:
            return '-'; // retorna o sinal de subtrair -
            break;
        case 3:
            return 'x'; // retorna o silan de vezes x
            break;
        case 4:
            return '/'; // retorna o sinal de dividir /
            break;

    } // fim switch

} // fim fun��o sinal da opera��o

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
            cout << "N�o. Tente novamente." << endl;
            break;
        case 2:
            cout << "Errado. Tente mais uma vez." << endl;
            break;
        case 3:
            cout << "N�o desista!" << endl;
            break;
        case 4:
            cout << "N�o. Continue tentando." << endl;
            break;
    } // fim switch
} // fim fun��o mensagem errada

// cria a fun��o acertosErros que mostra os resultados
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
