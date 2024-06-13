#include <iostream>
#include <locale.h>

using namespace std;



int main()
{
    /*
    Faça um programa que receba o nome, o peso e a altura de uma
 pessoa. Calcule e imprima o nome e o IMC dessa pessoa - IMC = peso
 / (altura * altura).

    */
    setlocale(LC_ALL, "Portuguese" );
    
    string nome;
    float altura, peso, imc ; 

    cout << "qual é o seu nome? \n";
    cin >> nome;

    cout << "qual é o seu peso? \n "; 
    cin >> peso;

    cout << "qual é a sua altura? \n"; 
    cin >> altura;
     
     imc = peso / (altura * altura);

    cout << "nome: " << nome << endl;
    cout << "imc: " << imc << endl;


    return 0;




}