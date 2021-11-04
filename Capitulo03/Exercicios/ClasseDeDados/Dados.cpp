/*
    3.15 (Classe Date) Crie uma classe chamada Date que inclua tr�s partes de
    informa��es como membros de dados � um m�s (tipo int), um  dia (tipo int)
    e um ano (tipo int). Sua classe deve ter um construtor com tr�s par�metros
    que utilize os par�metros para inicializar os tr�s  membros de dados.
    Para o prop�sito desse exerc�cio, assuma que os valores fornecidos para o ano
    e o dia s�o corretos, mas certifique-se  de que o valor de m�s esteja no intervalo
    1�12; se n�o estiver, configure o m�s como 1. Forne�a uma fun��o set e uma
    fun��o get para  cada membro de dados. Forne�a uma fun��o-membro displayDate
    que exiba o dia, o m�s e o ano separados por barras normais (/).
    Escreva um programa de teste que demonstre as capacidades da classe Date.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 92). Edi��o do Kindle.
    Autor: Pedro Filho, 10/08/2021
*/

#include <iostream>
#include "Dados.h" //

using namespace std;

// cria o construtor da classe Dados
Dados::Dados(int dia, int mes, int ano)
{
    setDia(dia); // configura o valor dia
    setMes(mes); // configura o valor m�s
    setAno(ano); // configura o valor ano
} // fim construtor

// fun��o set dia
void Dados::setDia(int valor )
{
    // condi��o de valida��o para a vari�vel dia
    // se o valor maior ou igual a 1
    if( valor >= 1 )
        // e o valor menor ou igual a 30
        if( valor <= 31 )
            // vari�vel dia recebe o valor digitado
            dia = valor;
} // fim fun��o

// fun��o get dia
int Dados::getDia()
{
    // retorna o valor digitado
    return dia;
} // fim fun��o

// fun��o set m�s
void Dados::setMes(int valor )
{
    // condi��o de valida��o do valor digitado
    // valor maior ou igual a 1
    if( valor >= 1 )
        // e o valor menor ou igual a 12
        if( valor <= 12 )
            // se estiver comforme a condi��o acima
            // m�s recebe o valor digitado
            mes = valor;
} // fun��o m�s

// fun��o get m�s
int Dados::getMes()
{
    // retorna o valor digitado
    return mes;
}// fim get

// fun��o set ano
void Dados::setAno( int valor )
{
    // ano recebe o valor digitado
    ano = valor;
} // fim setAno

// fun��o getAno
int Dados::getAno()
{
    // retorna o ano digitado
    return ano;
} // fim getAno

// display messagem
void Dados::displayMensagem()
{
    // mostra um data
    cout << "Data: " << dia << "/" << mes << "/" << ano << endl;
} // fim display
