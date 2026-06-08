// Exercício 040
// Faça um Programa que peça um número e informe se o número é inteiro ou decimal. Dica: utilize uma função de arredondamento.

#include <iostream>
#include <math.h>

int main()
{
    float num;
    std::cout << "Digite um número: ";
    std::cin >> num;

    if(floor(num) == num)
    {
        std::cout << "Inteiro" << '\n';
    }
    else
    {
        std::cout << "Decimal" << std::endl;
    }

    return 0;
}