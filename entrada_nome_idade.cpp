/*
Faça um programa que solicite do usuário o nome e sua idade. 
Exiba a frase “Olá sr(a) XXXXXXXXXXXXXXXXX, você tem XX anos de idade
*/

#include <iostream>
#include <string>
#include <locale.h> // Permite a utilização de caracteres oficiais
#include <unistd.h>   


using namespace std;

int main()
{
    string nome;
    int idade;
    
    cout<<"Solicitando Nome e Idade\n";
    cout<<"========================\n";
    
    sleep(3);
    system("clear");
    
    //Entrada
    cout<<"Por favor, insira seu nome: \n";
    //cin.ignore();
    getline(cin, nome);
    
    cout<<"\n";
    
    cout<<"Por favor, " << nome << ", insira a sua idade: \n";
    cin >> idade;
    
    //Saída
    cout<<"Olá, Sr(a). " << nome << ", você tem " << idade << " anos de idade.";
    
    return 0;
}