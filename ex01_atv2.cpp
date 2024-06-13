#include <iostream> 
#include <locale.h> 

using namespace std;



int main()
{
 setlocale(LC_ALL, "Portuguese");
/*Faça um programa que receba o nome, cargo e salário de um funcionário. Se o
funcionário ganhar abaixo de 1000 reais, calcule o salário acrescido de 10%. Ao final
exiba o nome, o cargo e o salário desse funcionário.
*/

        string nome,cargo;
        
    cout << "Qual o seu nome? \n";
    cin >> nome;

    cout << "Qual o seu cargo? " << nome << "? \n";
    cin  >> cargo; 

        float salario; 

    cout << "Qual � o salario do " << nome << "? \n";
    cin >> salario;


    if( salario < 1000){
        salario = salario + (salario * 10 / 100); 

    }


        
        cout << nome << "\n"; 
        cout << cargo <<  "\n";
        cout << "seu novo salario �: R$" << salario << "\n";





    return 0;



}