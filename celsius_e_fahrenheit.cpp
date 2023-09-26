/******************************************************************************

Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. 
A formula de conversão é: F := (9 * C + 160)/5, sendo C a temperatura em Celsius e F em Fahrenheit

*******************************************************************************/
#include "converter_temperaturas.h"
#include <iostream>
#include <unistd.h>
#include <locale.h> // Permite a utilização de caracteres oficiais

using namespace std;

int main()
{
    cout<<"=========================\n";
    cout<<"Conversão de Temperaturas\n";
    
    sleep(3);
    system("clear");
    
    float temperatura, temperaturaConvertida;
    char resposta, tipoConversao;
    bool flag = true;
    
    do
    {
        cout<<"Selecione uma opção: \n[C] - Conversão para Celsius \n[F] - Conversão para Fahrenheit: \n";
        cin>>resposta;
        
        switch (resposta)
        {
            case 'c':
            case 'C':
                system("clear");
                tipoConversao = 'c';
                
                cout<<"Digite a temperatura, em ºF, que deseja converter: ";
                cin>>temperatura;
                
                temperaturaConvertida = converter_para_celsius(temperatura);
                break;
            case 'f':
            case 'F':
                system("clear");
                tipoConversao = 'c';
                
                cout<<"Digite a temperatura, em ºC, que deseja converter: ";
                cin>>temperatura;
                
                temperaturaConvertida = converter_para_fahrenheit(temperatura);
                break;
            default:
                system("clear");
                cout<<"Opção incorreta, tente novamente...";
                
                sleep(3);
        }
        
        exibir_resultados(temperatura, temperaturaConvertida, tipoConversao);
        
        cout<<"Gostaria de realizar uma nova conversão [S/N]? ";
        cin>>resposta;
        
        switch (resposta)
        {
            case 's':
            case 'S':
                system("clear");
                break;
            case 'n':
            case 'N':
                system("clear");
                cout<<"Obrigado por utilizar o programa! Encerrando...";
                
                flag = false;
                break;
            default:
                system("clear");
                cout<<"Resposta inválida, incerrando programa...";
        }
    }
    while(flag == true);
    
    
    return 0;
}