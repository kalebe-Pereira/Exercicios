// Exercício 010
// Faça um programa que parte a temperatura em graus Celsius, transforma e mostra em graus fahrenheit.

#include <iostream>

int main()
{
    float celsius, fahrenheit;

    std::cout << "Digite a temperatura (°C): ";
    std::cin >> celsius;

    fahrenheit = (celsius * 1.8) + 32;

    std::cout << "A temperatura em fahrenheit é " << fahrenheit << std::endl;

    return 0;
}