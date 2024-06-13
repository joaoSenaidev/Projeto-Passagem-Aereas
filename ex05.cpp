#include <iostream> 
#include <locale.h>

using namespace std; 


int main()
{
    setlocale(LC_ALL, "Portuguese");
    /*Faça um programa que receba a medida em centímetros e exiba esse
    número em polegadas. OBS: Uma polegada equivale a 2.54
    centímetros.
    */

    int cm; 
    float polg = 2.54;


    cout << "quantos centimentros? \n";
    cin >> cm;

    cout << cm << "cm em polagadas são: " << cm * polg << endl;


    return 0;


}

