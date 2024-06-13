#include <iostream>
using namespace std;

int main()
{
    system("cls");
    // indices
    string nomes[5] = {"Eduardo", "samantha", "jucelino", "wesley", "wanderley"};
    // indices
    int idades[5] = {41, 21, 44, 90, 16};

    int contador;
    do{
        cout << nomes [contador];
        contador++;
    }while(contador <= 4);

    return 0;
}