#include <iostream>
#include <locale.h>
using namespace std;

/*

Uma empresa decide dar aumento aos funcionários de acordo com o seu cargo,
disposto na tabela abaixo:
Cargo % Aumento
Produção 6.5
Administrativo 7.5
Diretoria 12
De acordo com a tabela acima faça um programa que receba o cargo e o salário de
um funcionário e calcule e imprima o salário reajustado.
*/

int main()
{

    setlocale(LC_ALL, "Portuguese");
    string cargo;
    float salario;

    cout << "Digite o cargo do funcionario: \n";
    cin >> cargo;

    cout << "Digite o salario atual do funcionario: \n";
    cin >> salario;

    if (cargo == "Producao")
    {
        salario = salario + salario * 6.5 / 100;

        cout << "seu novo salario sera de " << salario << endl;
    }
    else if (cargo == "Administrativo")
    {
        salario = salario + salario * 7.5 / 100;
        cout << "seu novo salario sera de " << salario << endl;
    }
    else if (cargo == "Diretoria")
    {
        salario = salario + salario * 12 / 100;
        cout << "seu novo salario sera de " << salario << endl;
    }

    return 0;
}