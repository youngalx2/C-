// inclua biblioteca
#include <iostream>

using namespace std;

// Fun��o Main
main()
{
    // Vari�vel
    int num;

    //Entrada de dados
    cout<<"Digite um inteiro: ";
    cin>>(num);

    // Verificar se num � para
    if (num % 2 == 0){
        //Mostrar se � par
        cout<<num<<" PAR."<<endl;
    }
    if (num % 2 != 0) {
        // mostra impar
        cout<<num<<" IMPAR."<< endl;
    }

}
