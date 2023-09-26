#include <iostream>

using namespace std;

int main()
{
    int operando_01, operando_02;
    
    char escolha;
    
    cout << "Digite o primeiro operando: ";
    cin  >> operando_01;
    
    cout << "\nDigite o segundo operando: ";
    cin  >> operando_02;
    
    cout << "Qual operação você gostaria de realizar? \n[A] - Adição \n[S] - Subtração \n[M] - Multiplicação \n[D] - Divisão \n";
    cin  >> escolha;
    
    switch(escolha)
    {
        case 'a':
        case 'A':
            cout << operando_01 + operando_02;
            break;
        case 's':
        case 'S':
            cout << operando_01 - operando_02;
            break;
        case 'm':
        case 'M':
            cout << operando_01 * operando_02;
            break;
        case 'd':
        case 'D':
            cout << operando_01 / operando_02;
            break;
        default:
            cout << "\nOpção inválida, tente novamente.";
    }
    

    return 0;
}