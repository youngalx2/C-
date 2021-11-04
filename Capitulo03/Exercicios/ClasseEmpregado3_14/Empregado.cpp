/*
    3.14 (Classe Employee) Crie uma classe chamada Employee que inclua tr�s
    partes de informa��es como membros de dados � um nome  (tipo string),
    um sobrenome (tipo string) e um sal�rio mensal (tipo int). [Nota: Nos cap�tulos
    subseq�entes, utilizaremos n�meros  que cont�m pontos de fra��o decimal
    (por exemplo, 2,75) � chamados valores de ponto flutuante � para representar
    quantias em d�lar.]  Sua classe deve ter um construtor que inicialize os tr�s
    membros de dados. Forne�a uma fun��o set e uma fun��o get para cada membro
    de dados. Se o sal�rio mensal n�o for positivo, configure-o como 0.
    Escreva um programa de teste que demonstre as capacidades da classe  Employee.
    Crie dois objetos Employee e exiba o sal�rio anual de cada objeto.
    Ent�o d� a cada Employee um aumento de 10% e exiba  novamente o sal�rio anual
    de cada Employee.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 92). Edi��o do Kindle.
    Autor:
*/
#include <iostream>
#include <string>

#include "Empregado.h"

using namespace std;

Empregado::Empregado(string nome, string sobrenome, int salario )
{
    setNome(nome); // configura o nome
    setSobreNome( sobrenome); // configura o sobrenome
    setSalario( salario ); // configura o valor do sal�rio
} // fim construtor

// cria a fun��o para configurar o nome do Empregado
void Empregado::setNome(string nome )
{
    // se nome menor ou igual a 30 caracteres
    if( nome.length() <= 30)
        // vari�vel recebe o nome
        nomeDoEmpregado = nome;
} // fim fun��o setNome

// fun��o getNome
string Empregado::getNome()
{
    return nomeDoEmpregado;
} // fim fun��o getSobre

// cria a fun��o setSobrenome
void Empregado::setSobreNome(string sobrenome)
{
    // se sobrenome menor ou igual a 25
    if( sobrenome.length() <= 25 )
        sobreNome = sobrenome;
} // fim fun��o get

// fun��o getSobreNome
string Empregado::getSobreNome()
{
    return sobreNome;
} // fim get

// fun��o setsalario
void Empregado::setSalario( int sal )
{
    // se sal�rio maior ou igual a zero
    if( sal >= 0 )
        salario = sal;
} // fim fun��o get

// fun��o get sal�rio
int Empregado::getSalario()
{
    return salario;
} // fim fun��o

// fun��o getSalarioAnual( int salario )
int Empregado::salarioAnual( int salario )
{
    return salario * 12;
} // fim salario anual
