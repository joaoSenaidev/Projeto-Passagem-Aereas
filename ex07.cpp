#include <iostream> 

using namespace std;



int main()
{
  /*
    Faça um programa que receba o nome, cargo e salário de um funcionário. Calcule o
    salário acrescido de 10%. Ao final exiba o nome, o cargo e o novo salário desse
    funcionário.

*/
        string nome;
        string cargo;
        float salario; 

    cout << "qual o seu nome? \n"; 
    cin >> nome; 

     cout << "qual o seu cargo? \n"; 
    cin >> cargo; 

    cout << "qual o seu salario? \n";
    cin >> salario; 

      float resultado1 = 10 / 100;
      float resultado2 = resultado1 + salario;

      cout << "seu novo salario eh de: " << resultado2 << endl;




}