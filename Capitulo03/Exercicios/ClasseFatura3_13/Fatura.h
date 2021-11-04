// cria a classe fatura
#include <iostream>
#include <string>

using namespace std;

// classe Fatura
class Fatura
{
public:
    Fatura(string, string, int, int ); // cria o construtor da classe
    void setIdentidade( string ); // configura o ID
    string getIdentidade(); // retorna o valor do ID
    void setDescricao( string ); // configura a descri��o
    string getDescricao(); // obtem o valor da descri��o
    void setQuantidade(int); // configura a quantidade
    int getQuantidade(); // obtem o valor da quantidade
    void setPreco(int); // configura o pe�o
    int getPreco(); // obtem o pre�o
    int getValorTotal( int, int ); // calcula quantidade pelo pre�o

private:
    string identeDaFatura;
    string descricaoDaFatura;
    int quantidadeDoProduto;
    int precoDoProduto;
}; // fim da classe
