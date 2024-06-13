#include <iostream>
using namespace std;

int main()
{
    system("cls");
    // indices
    string nomes[5] = {"Eduardo", "samantha", "jucelino", "wesley", "wanderley"};
    // indices
    int idades[5] = {41, 21, 44, 90, 16};

    for(int contador = 0; contador <= 4; contador++){

            cout << "nome: " << nomes [contador] << endl; 
            cout << "idades: " << idades [contador] << "\n"<< endl;

    }

    return 0;
}