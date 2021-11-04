/*
    3.13 (Classe Invoice) Crie uma classe chamada Invoice que uma loja de suprimentos
    de inform�tica possa utilizar para representar uma  fatura de um item vendido na loja.
    Uma Invoice (fatura) deve incluir quatro partes das informa��es como membros de dados
    � um  n�mero identificador (tipo string), uma descri��o (tipo string), a quantidade
    comprada de um item (tipo int) e o pre�o por item (tipo  int). [Nota: Nos cap�tulos
    subseq�entes, utilizaremos n�meros que cont�m pontos de fra��o decimal (por exemplo, 2,75)
    � chamados  valores de ponto flutuante � para representar quantias em d�lar.]
    Sua classe deve ter um construtor que inicializa os quatro membros  de dados.
    Forne�a uma fun��o set e uma fun��o get para cada membro de dados. Al�m disso,
    forne�a uma fun��o-membro chamada  getInvoiceAmount que calcula a quantia da fatura
    (isto �, multiplica a quantidade pelo pre�o por item) e depois retorna a quantidade  como um
    valor int. Se a quantidade n�o for positiva, ela deve ser configurada como 0. Se o pre�o por
    item n�o for positivo, ele deve ser  configurado como 0. Escreva um programa de teste que
    demonstre as capacidades da classe Invoice.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 92). Edi��o do Kindle.
    Autor Pedro Filho, 09/08/2021
*/

#include <string>
#include <iostream>
#include "Fatura.h"

using namespace std;

// cria o construtor
Fatura::Fatura(string identidade, string descricao, int quantidade, int preco )
{
    setIdentidade( identidade );
    setDescricao( descricao );
    setQuantidade( quantidade );
    setPreco( preco );
} // fim construtor

// cria fun��o setIdntidade
void Fatura::setIdentidade( string identidade )
{
    identeDaFatura = identidade;
} // fim fun��o setIdentidade

// cria a fun��o getIdentidade
string Fatura::getIdentidade()
{
    return identeDaFatura;
} // fim da fun��o getIdentdade

// cria fun��o descri��o da fatura
void Fatura::setDescricao(string descricao )
{
    descricaoDaFatura = descricao;
} // fim fun��o setDescricao

string Fatura::getDescricao()
{
    return descricaoDaFatura;
} // fim getDescri��o

// cria fun��o setQuantidade
void Fatura::setQuantidade( int quantidade )
{
    // se quantidade maior ou igual a zero
    if( quantidade >= 0 )
    {
        quantidadeDoProduto = quantidade;
    } // fim do proguto
} // fim fun��o setquantidade

int Fatura::getQuantidade()
{
    return quantidadeDoProduto;
} // fim get

// cria a fun��o setPreco
void Fatura::setPreco(int preco)
{
    // se preco maior que zero
    if( preco >= 0 )
    {
        precoDoProduto = preco;
    } // fim if
} // fim fun��o

// cria a fun��o get pre�o
int Fatura::getPreco()
{
    return precoDoProduto;
} // fim getPreco

// fun��o para calcular o pre�o a pagar
int Fatura::getValorTotal( int quantidade, int preco )
{
    // retorna o valor a pagar
    return quantidade * preco;
} // fim fun��o get valor total
