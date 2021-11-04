/*
    3.11 (Modificando a classe GradeBook) Modifique a classe GradeBook
    (figuras 3.11�3.12) como mostrado a seguir:
    a) Inclua um segundo membro de dados string que representa o nome do instrutor de curso.
    b) Forne�a uma fun��o set para alterar o nome do instrutor e uma fun��o get para recuper�-lo.
    c) Modifique o construtor para especificar dois par�metros � um para
        o nome do curso e um para o nome do instrutor.
    d) Modifique a fun��o-membro displayMessage de tal maneira que ele primeiro
    gere a sa�da da mensagem de boas-vindas e o nome  do curso, depois gere
    a sa�da de �This course is presented by: � seguido pelo nome do instrutor.
    Utilize sua classe modificada em um programa de teste que demonstra as novas
    capacidades da classe.
    Deitel, Harvey; Paul, Harvey. C++ Como Programar (p. 91). Edi��o do Kindle.
   Autor: Pedro Filho, 06/08/2021
*/

#include <iostream>
#include "GradeBookModificado01.h"

using namespace std;

int main()
{
    GradeBookModificado01 meuGradeBook("Livro C++ como programar", "Pedro Filho" );
    meuGradeBook.displayMessage();

    cout << "Hello world!" << endl;
    return 0;
}
