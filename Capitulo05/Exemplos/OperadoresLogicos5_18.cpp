/*
    1// Figura 5.18: fig05_18.cpp  2// Operadores l�gicos.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 163). Edi��o do Kindle.
    Autor:
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

    // cria a tabela verdade para o operador AND  ( E ) &&
    cout << boolalpha << "Operador L�gico E ( && )"
            << "\nverdade && verdade: " << ( true && true )
            << "\nverdade && falso: " << ( true && false )
            << "\nfalso && verdade: " << ( false && true )
            << "\nfalso && falso: " << ( false && false ) << endl;

    // cria a tabela verdade para o operador OU ||
    cout << boolalpha << "\nOperador l�gico OU ||"
            << "\nverdade || verdade: " << ( true || true )
            << "\nverdade || falso: " << ( true || false )
            << "\nfalso || verdade: " << ( false || true )
            << "\nfalso || falso: " << ( false || false ) << endl;

    // cria a tabela verdade para o operador N�O !
    cout << boolalpha << "\nOperador l�gico N�O !"
            << "\n!verdade: " << ( !true )
            << "\n!falso: " << ( !false ) << endl;

    // pula linha
    cout << endl;

    system("pause"); // pausa do programa

    return 0; // programa terminado com sucesso

} // fim main
