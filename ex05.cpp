#include <iostream> 
#include <locale.h>

using namespace std; 


int main()
{
    setlocale(LC_ALL, "Portuguese");
    /*Fa�a um programa que receba a medida em cent�metros e exiba esse
    n�mero em polegadas. OBS: Uma polegada equivale a 2.54
    cent�metros.
    */

    int cm; 
    float polg = 2.54;


    cout << "quantos centimentros? \n";
    cin >> cm;

    cout << cm << "cm em polagadas s�o: " << cm * polg << endl;


    return 0;


}

