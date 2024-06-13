#include <iostream> 

using namespace std; 


int main()
{
system ("cls");
    int numeros[5];
    
      for (int xpto = 0; xpto <= 3; xpto++)
        {
            cout << "insira um numero" << endl;
            cin >> numeros[xpto];
            cout << "\n\n" << endl;
        }
        for(int xpto = 0; xpto <= 3; xpto++)
        { 
            cout << "exibindo \n" << endl; 
            cout << numeros[xpto] << endl;
        }
    


}