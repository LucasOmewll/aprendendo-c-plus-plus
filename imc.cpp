#include <iostream>

using namespace std;

float calcular_imc(float altura, float peso)
{
    float valor_imc = peso / (altura * altura);
    
    return valor_imc;
}

float calcular_desconto(float imc)
{
    float desconto 
    if(imc < 20)
    {
        desconto = 0.30;
    }
    else if (imc >= 20 && imc <= 25)
    {
        desconto = 0.20;
    }
    else if (imc > 25 && imc < 30)
    {
        desconto = 0.10;
    }
    else
    {
        desconto = 0;
    }
}