#include <iostream> 
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    /*
        //fa�a um porgrama  que receba a idade de uma pessoa em anos e imprima essa idade em:
        meses, dias, horas, minutos

    */
   //entrada
        int idade;
        cout << "qual � a sua idade? \n";
        cin >> idade;


    cout << idade << endl;


   //processo
        int idademeses = idade * 12;

        int idadedias = idade * 365;

        int idadehoras = idade * 24 * 365;

        int idademinutos = idade * 60 * 24 * 365;


   //sa�da
        cout << "idade em meses: " << idademeses << endl;

        cout << "idade em dias: " <<  idadedias << endl;

        cout << "idade em horas: " << idadehoras << endl;

        cout << "idade em minutos: " << idademinutos << endl;




    return 0;




}
