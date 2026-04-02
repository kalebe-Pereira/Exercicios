// Exercício 005
// Faça um Programa que converte metros para centímetros.

#include <cstdlib>
#include <iostream>

int main()
{
    float metros, centimetros;

    std::cout << "Digite uma medida (em Metros): ";
    std::cin >> metros;

    centimetros = metros * 100;

    system("clear");

    std::cout << "Medida em metros: " << metros << std::endl;
    std::cout << "Medida em centímetros: " << centimetros << '\n';

    return 0;
}