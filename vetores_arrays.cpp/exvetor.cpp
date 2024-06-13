#include <iostream> 
#include <vector>
using namespace std; 



int main()
{
system("cls");
    vector<string> nomes;//cria um array dinamico
    /*cout <<"tamanho do array: " << nomes.size() << endl;

    nomes.push_back("joao");
    cout <<"tamanho do array: " << nomes.size() << endl;

     nomes.push_back("giulia");
    cout <<"tamanho do array: " << nomes.size() << endl;

     nomes.push_back("oliveira");
    cout <<"tamanho do array: " << nomes.size() << endl;
    

    cout << "Nome: " << nomes[0] << endl;
    cout << "Nome: " << nomes[1] << endl; 
    cout << "Nome: " << nomes[2] << endl;
*/
    for(int i = 0; i < 3; i++)
    {
        string nome; 

        cout << "Digite um nome " << endl; 
        cin >> nome;

        nomes.push_back(nome);

        cout << "TAMANHO DO ARRAY: " << nomes.size() << endl; 
    }

    cout << "Nome: " << nomes[0] << endl;
    cout << "Nome: " << nomes[1] << endl; 
    cout << "Nome: " << nomes[2] << endl;



return 0;
}