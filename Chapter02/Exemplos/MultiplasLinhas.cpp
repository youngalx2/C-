#include <iostream>
#include <locale>

using namespace std;
/*
    imprimindo uma linha com m�ltiplas linhas
*/
int main()
{
    // define a localiza��o geogr�fica
    setlocale(LC_ALL, "portuguese");

    cout << "Ol�, ";
    cout << "Mundo C++!\n";

    // programa terminado com sucesso
    return 0;

} // fim main
