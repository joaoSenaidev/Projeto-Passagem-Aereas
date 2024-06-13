#include <iostream>

using namespace std;

int main()
{
    system("cls");
    int numeros[10]; // vai ir de zero a nove
    int contador = 0;
    while (contador <= 9)
    {
        cout << "Digite um numero: ";
        cin >> numeros[contador];

        // cout << numeros[contador];

        if (numeros[contador] % 2 == 0)
        {
            numeros[contador];
            cout << "Numero guardado na posicao " << contador << endl;
            contador++;
        }
        else
        {
            cout << "Esse numero nao eh par: " << numeros[contador] << endl;
        }
    }
    cout << "Numeros digitados: ";
    for (int i = 0; i <= 9; i++)
    {
        cout << numeros[i] << " ";
    }

    return 0;
}