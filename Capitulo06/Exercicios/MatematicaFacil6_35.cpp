/*
    6.35 (Computadores na educa��o) Os computadores est�o desempenhando
    um papel crescente na educa��o. Escreva um programa que ajuda  um aluno
    da escola prim�ria a aprender multiplica��o. Utilize rand para produzir dois inteiros
    a partir de um algarismo positivo. Ent�o  ele deve digitar uma pergunta como
    Quanto � 6 vezes 7?  Em seguida, o aluno digita a resposta. Seu programa verifica
    a resposta do aluno. Se estiver correto, imprima �Muito bem!� e ent�o  fa�a outra
    pergunta de multiplica��o. Se a resposta estiver errada, imprima �N�o. Tente novamente.�
    e ent�o deixe o aluno tentar  a mesma pergunta repetidamente at� que, por fim,
    ele consiga acertar o n�mero.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 245). Edi��o do Kindle.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 244). Edi��o do Kindle.
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
        } // fim while interno

        // se resposta igual ao produto
        if( resposta == -1 )
        {
            break; // fim do programa
        } // fim if

    } // fim primeiro while
} // fim fun��o entrar com dados
