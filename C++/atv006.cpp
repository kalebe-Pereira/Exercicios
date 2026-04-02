// Exercício 006
// Faça um Programa que parte o raio de um círculo, calcule e mostre sua área.

#include <iomanip>
#include <iostream>

#define PI 3.1415

int main()
{
    float raio, circuferencia;

    std::cout << "Digite o raio da circuferência: ";
    std::cin >> raio;

    circuferencia = PI * (raio * raio);

    std::cout << std::fixed << std::setprecision(2) 
    << "A área da circuferência é " << circuferencia << std::endl;  

    return 0;
}