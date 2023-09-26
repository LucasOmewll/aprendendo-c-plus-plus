#include <iostream>
using namespace std;

void menu_inicial()
{
    cout << "=====================================================================";
    cout << "\n _____       _            _       _     _             _     _       ";
    cout << "\n/  ___|     | |          (_)     | |   (_)           (_)   | |      ";
    cout << "\n\\ `--.  __ _| | __ _ _ __ _  ___ | |    _  __ _ _   _ _  __| | ___  ";
    cout << "\n `--. \\/ _` | |/ _` | '__| |/ _ \\| |   | |/ _` | | | | |/ _` |/ _ \\ ";
    cout << "\n/\\__/ / (_| | | (_| | |  | | (_) | |___| | (_| | |_| | | (_| | (_) |";
    cout << "\n\\____/ \\__,_|_|\\__,_|_|  |_|\\___/\\_____/_|\\__, |\\__,_|_|\\__,_|\\___/ ";
    cout << "\n                                             |_|                    ";
    cout << "\n====================================================================";
    cout << "\nBy: Gustavo Torres e Lucas Gomes";
    cout << "\nFeito em: C++ \n";
    
}

float calcular_salario_bruto(float valor_hora, int horas_trabalhadas)
{
    float salBruto = valor_hora * horas_trabalhadas;
    
    return salBruto;
}

float calcular_salario_liq(float salario_bruto, float imposto)
{
    float salLiquido = salario_bruto - (salario_bruto * imposto);
    
    return salLiquido;
}