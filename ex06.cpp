#include <iostream> 
 
 using  namespace std;



 int main()
 {
        //Faça um programa que receba a medida em polegadas e exiba esse número em
        //centímetros.


     float  polegadas;
     float cm;

    cout << "Digite a medida em polegadas: \n";
    cin >> polegadas;

    
    cm = polegadas / 2.54;


    cout << "A medida em centimetros e: \n" << cm << " cm" << endl;

    return 0;
        








 }