#include <iostream>
#include <locale.h>
using namespace std;




int main()
{ 
    setlocale(LC_ALL, "Portuguese");
    
    string nome, cargo;
    int codigo;
    float salario, percentual_aumento;

    
    cout << "Digite o nome do funcionario: ";
    getline(cin, nome ); // Para permitir nomes com espaços
    cout << "Digite o salario do funcionario: ";
    cin >> salario;
    cout << "Digite o codigo do cargo do funcionario (1 a 5): ";
    cin >> codigo;

    //switch case serve para não ficar repetindo if encadeado
    switch ( codigo ) {
        case 1:
            cargo = "Escriturario";
            percentual_aumento = 0.50;
            break;
        case 2:
            cargo = "Secretario";
            percentual_aumento = 0.35;
            break;
        case 3:
            cargo = "Caixa";
            percentual_aumento = 0.20;
            break;
        case 4:
            cargo = "Gerente";
            percentual_aumento = 0.10;
            break;
        case 5:
            cargo = "Diretor";
            percentual_aumento = 0.0; 
            break;
        default:
            cout << "Codigo de cargo invalido." << endl;
            return 1;
    }

    
    float salario_com_aumento = salario * (1 + percentual_aumento);


    cout << "Nome: " << nome << endl;
    cout << "Salario: " << salario << endl;
    cout << "Codigo: " << codigo << endl;
    cout << "Cargo: " << cargo << endl;
    cout << "Percentual de aumento: " << percentual_aumento * 100 << "%" << endl;
    cout << "Salario com aumento: " << salario_com_aumento << endl;

    return 0;
}

    























