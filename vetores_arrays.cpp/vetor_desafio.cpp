#include <iostream>
using namespace std;

int main()
{
    system("cls");

    int numeros[5];
    // 1
    for (int i = 0; i < 5; i++)
    {
        cout << "insira um numero: ";
        cin >> numeros[i];
    }
    for (int x = 0; x < 5; x++)
    {
        cout << "numero" << x << ": " << numeros[x] << endl;
    }
    // 2
    for (int i = 0; i < 5; i++)
    {
        cout << "insira um numero: ";
        cin >> numeros[i];
    }
    for (int x = 0; x < 5; x++)
    {
        cout << "numero " << x + 1 << ": " << numeros[x] << endl;
    }
    // 3
    for (int i = 0; i < 5; i++)
    {
        cout << "insira um numero: ";
        cin >> numeros[i];
    }
    for (int x = 0; x < 5; x++)
    {
        cout << x + 1 << "o) numero: " << numeros[x] << endl;
    }
    // 4
    for (int i = 0; i < 5; i++)
    {
        cout << "insira um numero: ";
        cin >> numeros[i];
    }
    for (int x = 0; x < 5; x++)
    {
        cout <<  x << " ";
    }

    return 0;
}