/*

Faça um programa que receba a idade de uma pessoa e classifique usando o
seguinte critério:
Idade Classificação
0 a 2 anos Recém-Nascido
Recém-Nascido Criança
12 a 19 anos Adolescente
20 a 55 anos Adulto
Acima de 55 anos Idoso
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int idade;

    cout << "Digite a idade da pessoa: ";
    cin >> idade;

    if (idade >= 0 && idade <= 2)
    {
        cout << "Recem-Nascido" << endl;
    }
    else if (idade >= 3 && idade <= 12)
    {
        cout << "Criança" << endl;
    }
    else if (idade >= 13 && idade <= 19)
    {
        cout << "Adolescente" << endl;
    }
    else if (idade >= 20 && idade <= 55)
    {
        cout << "Adulto" << endl;
    }
    else
    {
        cout << "Idoso" << endl;
    }

    return 0;
}
