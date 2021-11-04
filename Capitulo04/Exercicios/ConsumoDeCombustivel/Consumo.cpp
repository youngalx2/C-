/*
    4.13 Os motoristas se preocupam com o consumo de combust�vel dos seus autom�veis.
    Um motorista monitorou v�rios tanques cheios de  gasolina registrando a quilometragem
    dirigida e a quantidade de combust�vel em litros utilizados para cada tanque cheio.
    Desenvolva um  programa C++ que utiliza uma instru��o while para inserir os quil�metros
    percorridos e a quantidade de litros de gasolina utilizados  para cada taque.
    O programa deve calcular e exibir o consumo em quil�metros/litro para cada tanque cheio
    e imprimir a quilometragem  combinada e a soma total de litros de combust�vel consumidos
    at� esse ponto.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 133). Edi��o do Kindle.
    Autor: Pedro Filho, 14/08/2021
*/
#include <iostream>

#include "Consumo.h" // inclui a classe Consumo.h

using namespace std;

// cria a fun��o para configurar a vari�vel quilometragem
void Consumo::setQuilometrosRodados( float valor )
{
    if( valor >= 0 )
    {
        quilometragem = valor;
    } // fim if
} // fim setQuilometrosRodados

// cria a fun��o getQuilometrosRodados
float Consumo::getQuilometrosRodados()
{
    // retorne o valor da quilometragem
    return quilometragem;
} // fim get

// cria a fun��o setLitrosAbastecidos
void Consumo::setLitrosAbastecidos( float valor )
{
    if( valor >= 0 )
    {
        litrosAbastecidos = valor;
    } // fim if
} // fim fun��o set

// cria a fun��o getLitrosAbastecidos
float Consumo::getLitrosAbastecidos()
{
    // retorna o valor dos litros abastecidos
    return litrosAbastecidos;
} // fim get

// cria a fun��o consumo
void Consumo::consumoKmPorLitros(double quantidade, double litros )
{
    // cria a vari�vel
    double consumoAtual = quantidade / litros;

    // mostra o resultado
    cout << "Km/litros deste tanque: " << consumoAtual << endl;

} // fim consumo
