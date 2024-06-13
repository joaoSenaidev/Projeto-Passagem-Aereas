#include <iostream> 
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

        int number1;

    cout << "qual numero voce deseja? \n";
    cin >> number1;

    int resultado = number1 * 2;

    cout << "seu dobro é: " << resultado << endl;



    return 0;








    
}



