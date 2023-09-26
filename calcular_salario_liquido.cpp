#include "imposto"
#include <iostream>
#include <unistd.h> // biblioteca do linuz que possibilita limpar o terminal

using namespace std;

int main()
{
    // Exibição do Menu Inicial
    menu_inicial();
    
    float valorHora;
    int   quantHora;
    
    cout << "\nInforme o valor da hora trabalhada: ";
    cin >> valorHora;
    
    
    cout << "\nInforme a quantia de horas trabalhadas por mês: ";
    cin >> quantHora;
    
    system("clear");
    
    float salarioBruto = calcular_salario_bruto(valorHora, quantHora);
    
    float imposto;
    
    if (salarioBruto <= 4000.0)
    {
        imposto = 0.08;        
    }
    else if (salarioBruto > 4000.0 && salarioBruto <= 5000.0)
    {
        imposto = 0.10;        
    }
    else if (salarioBruto > 5000.0 && salarioBruto <= 6000.0)
    {
        imposto = 0.12;        
    }     
    else
    {
        imposto = 0.14;
    }

    float salarioLiquido;
    
    salarioLiquido = calcular_salario_liq(salarioBruto, imposto);
    
    printf("| Resumo das Informações |");
    printf("\nSalário Bruto  : R$ %.2f", salarioBruto);
    printf("\nImposto a Pagar: R$ %.2f", salarioBruto * imposto);
    cout << "\n------------------------";
    printf("\nSalário Líquido: R$ %.2f", salarioLiquido);
}