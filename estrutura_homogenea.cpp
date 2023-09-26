/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>

using namespace std;

string buscar_cores(string matriz[10][2], string cor)
{
    for (int i = 0; i < 10; i++)
    {
        if (cor == matriz[i][0])
        {
            return matriz[i][1];
        }
        
        if (cor == matriz[i][1])
        {
            return matriz[i][0];
        }
    }
    
    return "A cor informanda não existe no programa.";
}

int main()
{
    string cores[10][2] = {{"branco", "white"}, {"preto", "black"},{"laranja", "orange"},{"amarelo", "yellow"}, {"rosa", "pink"}, 
                           {"roxo", "purple"}, {"vermelho", "red"}, {"ciano", "cyan"}, {"ocre", "maroon"}, {"marrom", "brown"}};
                           
    string resposta;
    cout << "Digite a cor desejada: \n";
    cin >> resposta;
    
    cout << buscar_cores(cores, resposta);
    
    return 0;
}