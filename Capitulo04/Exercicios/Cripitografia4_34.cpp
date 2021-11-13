/*
    4.34 (Criptografia) Uma empresa quer transmitir dados por telefone, mas est�
    preocupada com a possibilidade de seus telefones estarem  grampeados.
    Todos os dados s�o transmitidos como inteiros de quatro d�gitos.
    A empresa solicitou que escrev�ssemos um programa  que encriptasse dados
    para que pudessem ser transmitidos com maior seguran�a.
    Seu programa deve ler um inteiro de quatro d�gitos e  encript�-lo como mostrado
    a seguir: Substitua cada d�gito pelo (a soma desse d�gito mais 7) m�dulo 10.
    Em seguida, troque o primeiro  d�gito pelo terceiro, o segundo d�gito pelo quarto e
    imprima o inteiro encriptado. Escreva um programa separado que aceita como
    entrada  um inteiro de quatro d�gitos criptografado e o descriptografe para formar
    o n�mero original.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 138). Edi��o do Kindle.
    Autor: Pedro Filho, 22/08/2021
*/

// incluir biblioteca
#include <iostream>
#include <locale>

using namespace std;

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // vari�veis
    int numero = 0;
    int novoNumero = 0;
    int n1, n2,n3,n4;
    int cripto1, cripto2, cripto3, cripto4;

    // entrada de dados
    cout << "Digite um n�mero de 4 digitos: ";
    cin >> numero; // aguarda entrada do usu�rio

    // separando digitos
    n1 = numero / 1000 % 1000;
    n2 = numero % 1000 / 100;
    n3 = numero % 100 / 10;
    n4 = numero % 10 / 1;

    // criptografia
    cripto1 = ( n1 + 7 ) % 10;
    cripto2 = ( n2 + 7 ) % 10;
    cripto3 = ( n3 + 7 ) % 10;
    cripto4 = ( n4 + 7 ) % 10;

    // cria um novo n�mero
    novoNumero = (cripto3 * 1000) + (cripto4 * 100) + (cripto1 * 10 ) + (cripto2 * 1 );

    // mostra digitos
    cout << "N�mero: ";
    cout << n1 << " " << n2 << " " << n3 << " " << n4 <<  endl;

    cout << "Criptografia: ";
    cout << cripto3 << " " << cripto4 << " " << cripto1 << " " << cripto2 << endl;

    cout << "Novo n�mero = " << novoNumero << endl;
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
