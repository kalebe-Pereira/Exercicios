// Exercício 004
// Faça um Programa que parte as 4 notas bimestrais e mostre a média.

#include "iostream"

int main()
{
    float numeros[4];
    float total = 0;

    for(int i = 0; i < 4; i++)
    {
        std::cout << "Digite a " << i + 1 << "º nota: ";
        std::cin >> numeros[i];
        total += numeros[i];
    }

    total /= 4;

    std::cout << "A média das notas é " << total << '\n';

    return 0;
}