#include "imc"
#include <iostream>

using namespace std;

int main()
{
    cout << "__________________________";
    cout << "\n#### ##     ##  ######  ";
    cout << "\n ##  ###   ### ##    ## ";
    cout << "\n ##  #### #### ##       ";
    cout << "\n ##  ## ### ## ##       ";
    cout << "\n ##  ##     ## ##       ";
    cout << "\n ##  ##     ## ##    ## ";
    cout << "\n#### ##     ##  ######  ";
    cout << "\n==========================";
    cout << "\nBy: Gustavo Torres e Lucas Gomes";
    cout << "\nLinguagem Utilizada: C++";
    
    float pesoCliente;
    float alturaCliente;
    
    cout << "\nInsira o peso do cliente: ";
    cin  >> pesoCliente;
    
    cout << "\nInsira a altura do cliente";
    cin  >> alturaCliente;
    
    system("clear");
    
    float imc = calcular_imc(alturaCliente, pesoCliente);
    float desconto = calcular_desconto(imc);
    
    float quilo
    cout << "\nDigite a quantidade de KG consumidos.";
    cin quilo;
    
    float precoFinal = quilo * 50;

    return 0;
}
