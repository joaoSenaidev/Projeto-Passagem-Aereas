#include <iostream>
#include <locale.h>
using namespace std; 

/*

Faça um programa que receba 4 notas de um aluno, calcule e imprima a média
aritmética das notas e a mensagem de APROVADO para média superior ou igual a
7,0 RECUPERAÇÃO para notas entre 5.0 e 7,0 ou a mensagem de REPROVADO
para média inferior a 5,0.

*/







int main()
{
        setlocale(LC_ALL, "Portuguese");
        string nome;

        float n1, n2, n3, n4; 



        cout << "Digite o nome: \n";
        cin >> nome; 
        

    cout << "Digite a nota 1:  \n";
    cin >> n1;

    cout << "Digite a nota 2: \n ";
    cin >> n2; 

    cout << "Digite a nota 3 \n";
    cin >> n3;

    cout << "Digite a nota 4 \n";
    cin >> n4; 

    float media = (n1 + n2 + n3 + n4 ) / 4;

        
    if ( media >= 7 ){ 
          cout << nome << " sua media foi: " << media << " APROVADO." << endl;

    }else if ( media >= 5){
        cout << nome <<  "sua media foi: " << media << " RECUPERA��O." << endl;
    }else{
        cout << nome << "sua media foi: " << media << " REPROVADO." << endl;
    }








    return 0;
}
