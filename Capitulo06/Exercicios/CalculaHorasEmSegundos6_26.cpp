/*
    6.26 Escreva uma fun��o que aceita a hora como tr�s argumentos do tipo inteiro
    (horas, minutos e segundos) e retorna o n�mero de segundos  desde a �ltima
    vez que o rel�gio �deu 12�. Utilize essa fun��o para calcular a quantidade de tempo
    em segundos entre duas horas, ambas  as quais est�o dentro de um ciclo de 12 horas.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 244). Edi��o do Kindle.
    Autor: Pedro Filho, 15/09/2021
*/

// incluir biblioteca
#include <iostream> // para cout e cin
#include <locale> // para setlocale
#include <iomanip> // para setw, fixed, setprecision

using namespace std;

// prot�tipo
int horasEmSegundos( int horas, int minutos, int segundos );

// fun��o principal
int main()
{
    // localiza��o geogr�fica
    setlocale( LC_ALL, "portuguese");

    // limpa a tela
    system("cls");

    // vari�veis
    int horas = 0;
    int minutos;
    int segundos;
    int resposta = 0;
    int diferenca = 0;

    // enquanto resposta diferente de -1 fa�a
    while( resposta != -1 )
    {
        // entrada de dados
        cout << "Informe �s horas atuais: ";
        cin >> horas;
        cout << "Informe os minutos: ";
        cin >> minutos;
        cout << "Informe os segundos: ";
        cin >> segundos;

        // chama a fun��o horas em minutos
        diferenca = horasEmSegundos( horas, minutos, segundos );

        // mostra resultado
        cout << "De 12 horas at� agora j� se passaram " << diferenca << " segundos." << endl;

        // faz uma pergunta
        cout << "\nDeseja continuar (-1 para sair)? ";
        cin >> resposta;

    } // fim while

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main

// cria a fun��o horasEmSegundos
int horasEmSegundos( int horas, int minutos, int segundos )
{
    int diferenca = 0;

    // se horas maior que 0 e menor que 12
    if( horas > 0 && horas < 12 )
    {
        // diferen�a recebe
        diferenca = ( horas * 3600 ) + (minutos * 60 ) + segundos;
    } // fim if
    else if( horas > 12 && horas < 24 )
    {
        // diferen�a recebe
        diferenca = ( ( horas - 12 ) * 3600 ) + (minutos * 60 ) + segundos;
    } // fim else if
    else
    {
        diferenca = ( minutos * 60 ) + segundos;
    } // fim else

    // retorne o valor da difren�a
    return diferenca;

} // fim fun��o horasEmSegundos
