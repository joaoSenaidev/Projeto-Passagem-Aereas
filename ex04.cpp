#include <iostream>
#include <locale.h>

using namespace std;



int main()
{
    /*
    Fa�a um programa que receba o nome, o peso e a altura de uma
 pessoa. Calcule e imprima o nome e o IMC dessa pessoa - IMC = peso
 / (altura * altura).

    */
    setlocale(LC_ALL, "Portuguese" );
    
    string nome;
    float altura, peso, imc ; 

    cout << "qual � o seu nome? \n";
    cin >> nome;

    cout << "qual � o seu peso? \n "; 
    cin >> peso;

    cout << "qual � a sua altura? \n"; 
    cin >> altura;
     
     imc = peso / (altura * altura);

    cout << "nome: " << nome << endl;
    cout << "imc: " << imc << endl;


    return 0;




}