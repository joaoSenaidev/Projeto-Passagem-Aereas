#include <iostream>
using namespace std;

int main()
{
    system("cls");
    // indices
    string nomes[5] = {"Eduardo", "samantha", "jucelino", "wesley", "wanderley"};
    // indices
    int idades[5] = {41, 21, 44, 90, 16};

    //imprimindo dados
    cout << nomes [3] << endl; //wesley 
    cout << idades [3] << endl; //90
    
    cout << endl << endl;

     cout << "nome: " << nomes[3] << endl;
     cout << "idae: " << idades[3] << endl;

     cout << "nome: " << nomes[4] << endl;
     cout << "idae: " << idades[0] << endl;

     cout << "nome: " << nomes[2] << endl;
     cout << "idae: " << idades[4] << endl;

     cout << "nome: " << nomes[0] << endl;
     cout << "idae: " << idades[1] << endl;

    return 0;
}