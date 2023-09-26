#include <iostream>
#include <locale.h> //Permite utilizar caracteres especiais
#include <stdio.h>
using namespace std;

typedef struct
{
    string nome;
    long int cpf;
    int idade;
    string cargo;
    float salario;
}funcionario;

int main()
{
    setlocale(LC_ALL, "");
    int quantMembros;
    
    cout << "Quantos membros há na sua equipe? ";
    cin >> quantMembros;
    
    funcionario equipe[quantMembros];
    system("clear");
    
    for(int i = 0; i < quantMembros; i++)
    {
        cout << "Digite o nome do "  << i + 1 << "º funcionário: ";
        cin.ignore();
        getline(cin, equipe[i].nome);
        
        cout << "\nDigite o cpf do "  << i + 1 << "º funcionário: ";
        cin >>  equipe[i].cpf;
        
        cout << "\nDigite a idade do "  << i + 1 << "º funcionário: ";
        cin >> equipe[i].idade;
        
        cout << "\nDigite o cargo do "  << i + 1 << "º funcionário: ";
        cin.ignore();
        getline(cin, equipe[i].cargo);
        
        cout << "\nDigite o salário do "  << i + 1 << "º funcionário: ";
        cin >> equipe[i].salario;
         
        system("clear"); 
        
    }
    
    for(int i = 0; i < quantMembros; i++)
    {
        cout << "========================================";
        cout << "\nNome   : " << equipe[i].nome;
        cout << "\nCPF    : " << equipe[i].cpf;
        cout << "\nIdade  : " << equipe[i].idade;
        cout << "\nCargo  : " << equipe[i].cargo;
        printf("\nSalário: R$%.2f\n\n", equipe[i].salario);
    }
    
    return 0;
}