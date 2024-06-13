#include <iostream>
#include <locale.h>
using namespace std;

/*
Faça um programa que receba um número de usuário e exiba este número, apenas
se for par. Caso contrário informe apenas “DIGITE APENAS NÚMEROS PARES”.
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numero;

    cout << "Digite um numero: \n";
    cin >> numero;

    if (numero % 2 == 0)
    {

        cout << "O numero digitado foi: " << numero << endl;
    }
    else
    {

        cout << "DIGITE APENAS NUMEROS PARES" << endl;
    }

    return 0;
}
