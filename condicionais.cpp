#include <iostream> 
#include <locale.h>

using namespace std;



int main()
{
    setlocale(LC_ALL, "Portuguese" );

    cout << "************ Programa Festa ************** \n\n";
    cout << "             seja Bem-vindo :) \n\n"; 




    string ingresso;
    int idade;


    cout << "voce tem um ingresso? \n";
    cin >> ingresso;

    cout << "Qual � a sua idade? \n";
    cin >> idade; 

    if ( idade >= 18 && ingresso == "sim" )
    { 

        cout << "bem-vindo a festa :) \n ";
    } else { 
        cout << "n�o pode entrar na festa \n ";

    }










}