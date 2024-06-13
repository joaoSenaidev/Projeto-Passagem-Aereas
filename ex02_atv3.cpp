#include <iostream> 
#include <locale.h> 
using namespace std;


int main()
{
    setlocale(LC_ALL, "Portuguese");
    /*
    Uma empresa decide dar aumento de 30% aos funcionários cujo salário é inferior a
500 reais. Escreva um programa que receba o salário de um funcionário e imprima o
valor do salário reajustado ou uma mensagem caso o funcionário não tenha direito a
aumento.
    */
    
    float salario; 

        cout << "digite o salario do funcionario  \n";
        cin >> salario; 

    if( salario < 500 ){
        salario = salario * 1.3;
        cout << "o salario do funcionario foi reajustado �: \n" << salario << " reais." << endl;
    } else { 
        cout << "o fucionario n�o tem direito de aumento! " << endl;

    }
   
        





        return 0; 





}