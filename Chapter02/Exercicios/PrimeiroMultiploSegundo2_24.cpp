// Inclua biblioteca
#include <iostream>
#include <locale>

using namespace std;

main()
{
    setlocale(LC_ALL, "portuguese");

    // Vari�veis
    int n1, n2;

    // Entrada de dados
    cout<<"Digite dois inteiros: ";
    cin>>n1>>n2;

    // Verifique se n1 e multiplo do outro
    if (n1 % n2 == 0) {
        // Mostra dados
        cout<<n1<<" � multiplo de "<< n2<<endl;
    }
    if (n1 % n2 != 0) {
        //Mostra dados
        cout<<n1<<" n�o � multiplo de "<< n2<<endl;
    }
}
