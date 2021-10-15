#include <iostream>
#include <string>

using namespace std;

// cria a classe empregado
class Empregado
{
public:
    Empregado(string, string, int ); // cria o construtor com 3 par�metros
    void setNome(string); // configura o nome do empregado
    string getNome(); // obtem o nome do empregado
    void setSobreNome( string ); // configura o sobre nome do empregado
    string getSobreNome(); // obtem o sobrenome do empregado
    void setSalario( int ); // configura o valor do sal�rio do empregado
    int getSalario(); // obtem o valor do sal�lario do empregado
    int salarioAnual( int ); // retorna o valor do sal�rio anual

private:
    string nomeDoEmpregado; // vari�vel que recebe o nome do empregado
    string sobreNome; // vari�vel que recebe o sobrenome do empregado
    int salario; // vari�vel que recebe o sal�rio do empregado
}; // fim classe
