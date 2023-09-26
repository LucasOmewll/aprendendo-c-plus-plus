using namespace std;
#include <unistd.h>
#include <iostream>

float converter_para_celsius(float tempFah)
{
    float tempCel = (tempFah - 32.0) / 1.8;
    
    return tempCel;
}

float converter_para_fahrenheit(float tempCel)
{
    float tempFah = (9 * tempCel + 160)/5;
    
    return tempFah;
}

void exibir_resultados(float temperatura, float tempConvertida, char tipoConversao)
{
    system("clear");
    
    if(tipoConversao == 'c')
    {
        cout<<"===================";
        printf("\nTemperatura em ºF...........: %2.f", temperatura);
        printf("\nTemperatura convertida em ºC: %2.f", tempConvertida);
        cout<<"\n===================";
    }
    
    if(tipoConversao == 'f')
    {
        cout<<"=============================";
        printf("\nTemperatura em ºC...........: %2.f", temperatura);
        printf("\nTemperatura convertida em ºF: %2.f", tempConvertida);
        cout<<"=============================";
    }
    
}