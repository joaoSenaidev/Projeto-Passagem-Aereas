#include <iostream> 
#include <locale.h> 

using namespace std;


int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int ano_nascimento;
    int ano_atual = 2024;

    
    cout << "qual ano voce nasceu? \n";
    cin >> ano_nascimento;

    cout << "ano atual: \n";
    cin >> ano_atual;

    int idade = ano_atual - ano_nascimento;
    int semanas = idade * 48;

    cout << "idade: " << idade << endl;
    cout << "idade em semanas: "<< semanas << endl;


    return 0;






}